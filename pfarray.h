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
        
    };
} // pfaPARK

#endif // __PFARRAY_H_
