// pfarray.h
#ifndef __PFARRAY_H_
#define __PFARRAY_H_

namespace pfaPARK {
    template <class T>
    class PFArray {
    protected:
        T *a;
        int capacity;
        int used;
    public:
        PFArray(int size = 50);
        PFArray(const PFArray<T>& other);

        void addElement(const T& element);
        bool full() const;
        void emptyArray();
        int getCapacity() const;
        int getUsed() const;

        T& operator [] (int index);
        PFArray<T>& operator = (const PFArray<T> rightSide);

        ~PFArray();
    };
} // pfaPARK

#endif // __PFARRAY_H_
