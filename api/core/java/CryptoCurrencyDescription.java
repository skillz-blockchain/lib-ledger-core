// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto_currency_description.djinni

package co.ledger.core;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class CryptoCurrencyDescription {
    public abstract String getIdentifier();

    public abstract String getName();

    public abstract ArrayList<CryptoCurrencyUnit> getUnits();

    public abstract int getDecimalPlaceOfSmallestUnit();

    public abstract String getBolosApplicationName();

    public abstract String getDerivationScheme();

    private static final class CppProxy extends CryptoCurrencyDescription
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getIdentifier()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getIdentifier(this.nativeRef);
        }
        private native String native_getIdentifier(long _nativeRef);

        @Override
        public String getName()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getName(this.nativeRef);
        }
        private native String native_getName(long _nativeRef);

        @Override
        public ArrayList<CryptoCurrencyUnit> getUnits()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getUnits(this.nativeRef);
        }
        private native ArrayList<CryptoCurrencyUnit> native_getUnits(long _nativeRef);

        @Override
        public int getDecimalPlaceOfSmallestUnit()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDecimalPlaceOfSmallestUnit(this.nativeRef);
        }
        private native int native_getDecimalPlaceOfSmallestUnit(long _nativeRef);

        @Override
        public String getBolosApplicationName()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBolosApplicationName(this.nativeRef);
        }
        private native String native_getBolosApplicationName(long _nativeRef);

        @Override
        public String getDerivationScheme()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDerivationScheme(this.nativeRef);
        }
        private native String native_getDerivationScheme(long _nativeRef);
    }
}