#ifndef MATRIX_H_
#define MATRIX_H_

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef signed short int16;

namespace Matr {


class Matrix
{
public:
    Matrix(uint16 size0, uint16 size1);
    ~Matrix();
    double& operator[](int index);
private:
    uint16 Size0_;
    uint16 Size1_;

    double* Values;
};

} /// namespace matr

#endif
