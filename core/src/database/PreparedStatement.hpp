/*
 *
 * PreparedStatement.hpp
 * ledger-core
 *
 * Created by Pierre Pollastri on 31/12/2020.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef LEDGER_CORE_PREPAREDSTATEMENT_HPP
#define LEDGER_CORE_PREPAREDSTATEMENT_HPP

#include <soci.h>
#include <utils/Exception.hpp>

namespace ledger {
    namespace core {

        template <class Bindings>
        class PreparedStatement {
        public:
            PreparedStatement() {};
            void execute() {
                if (statement.isEmpty()) {
                    throw make_exception(api::ErrorCode::RUNTIME_ERROR, "Cannot execute not prepared statement");
                }
                statement.getValue().execute(true);
            }
            Bindings bindings;
            Option<soci::statement> statement;
        };

        template<class Bindings>
        class StatementDeclaration {
        public:
            using BindFunction = std::function<void(soci::details::prepare_temp_type &, Bindings &)>;

            StatementDeclaration(const std::string &sqlQuery, const BindFunction &binder)
                    : _query(sqlQuery), _binder(binder) {

            }

            void operator()(soci::session &sql, PreparedStatement<Bindings>& out) const {
                soci::details::prepare_temp_type prepare = sql.prepare << _query;
                _binder(prepare, out.bindings);
                out.statement = (prepare);
            }

        private:
            std::string _query;
            BindFunction _binder;
        };

        namespace db {
            template<class Bindings>
            StatementDeclaration<Bindings> stmt(const std::string &sqlQuery, const typename StatementDeclaration<Bindings>::BindFunction &binder) {
                return StatementDeclaration<Bindings>(sqlQuery, binder);
            }
        }

    }
}


#endif //LEDGER_CORE_PREPAREDSTATEMENT_HPP
