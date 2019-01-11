// pfarray.cpp
#include "pfarray.h"

namespace pfaPARK {
    template <class T>
    PFArray<T>::PFArray(int size) : capacity(size), used(0) {
        a = new T[capacity];
    }

    PFArray<T>::PFArray(const PFArray<T>& other) : capacity(other.capacity), used(other.capacity){
        a = new T[capacity];
        for (int i = 0; i < used; i++) {
            a[i] = other.a[i];
        }
    }

} // pfaPARK
