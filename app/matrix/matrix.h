#ifndef MATRIX_H_
#define MATRIX_H_

namespace Matr {


template <int size>
class Slice
{
public:
    Slice() {};
    Slice(double values[size]) :
        Values_(values)
    {
        //intentionally left empty
    }

    Slice& operator=(double rhs[size])
    {
        for (int i = 0; i < size; ++i)
        {
            Values_[i] = rhs[i];
        }
        return *this;
    }
    double Values_[size];
private:

    int Size_ = size;
};

} /// namespace matr

#endif
