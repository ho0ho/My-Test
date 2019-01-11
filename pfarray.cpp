// pfarray.cpp
#include "pfarray.h"

namespace pfaPARK {
    template <class T>
    PFArray<T>::PFArray(int size) : capacity(size), used(0) {
        a = new T[capacity];
    }

    template <class T>
    PFArray<T>::PFArray(const PFArray<T>& other) : capacity(other.capacity), used(other.capacity){
        a = new T[capacity];
        for (int i = 0; i < used; i++) {
            a[i] = other.a[i];
        }
    }

    template <class T>
    void PFArray<T>::addElement(const T& element) {
        if (used >= capacity) {
            cout << "error" << endl;
            exit(0);
        }

        a[used] = element;
        used++;
    }

    template <class T>
    bool PFArray<T>::full() const {
        return (used >= capacity);
    }

    template <class T>
    void PFArray<T>::emptyArray() {
        used = 0;
    }

    template <class T>
    int PFArray<T>::getCapacity() const {
        return capacity;
    }

    template <class T>
    int PFArray<T>::getUsed() const {
        return used;
    }

    template <class T>
    T& PFArray<T>::operator [] (int index) {
        if (index >= used) {
            cout << "error" << endl;
            exit(0);
        }

        return a[index];
    }

    template <class T>
    PFArray<T>& PFArray<T>::operator = (const PFArray<T> rightSide) {
        if (this == &rightSide) {
            return *this;
        }


    }


} // pfaPARK
