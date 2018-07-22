#ifndef MATRIX_H_s

#define MATRIX_H_

#include <stdlib.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef signed short int16;


namespace Matr {

template<uint16 Tsize0, uint16 Tsize1>
class Matrix
{
public:
    Matrix() :
        Dim0_(Tsize0),
        Dim1_(Tsize1)
    {
        SetAllTo(0);
    }
    ~Matrix()
    {
        //intentionally left empty
    }

    double& Get(int idx1, int idx2)
    {
        return Values_[idx1][idx2];
    }

    void SetValue(int idx1, int idx2, double value)
    {
        Values_[idx1][idx2] = value;
    }

    void SetAllTo(double value)
    {
        for (int i = 0; i<Tsize0; ++i) {
            for (int j = 0; j<Tsize1; ++j) {
                Values_[i][j] = 0;
            }
        }
    }

    void SetRandom() {
        for(int i=0; i<Tsize0; ++i) {
            for(int j=0; j<Tsize1; ++j) {
                Values_[i][j] = rand();
            }
        }
    }

    void SetZeros()
    {
        SetAllTo(0);
    }

    void SetOnes()
    {
        SetAllTo(1);
    }


    double* GetRow(int idx1)
    {
        return &Values_[idx1][0];
    }

    double* operator[](int idx1)
    {
        return this->GetRow(idx1);
    }

    //multiplication zahl, matrix


    //addition matrix, matrix


    uint16 GetDim0()
    {
        return Dim0_;
    }

    uint16 GetDim1()
    {
        return Dim1_;
    }


private:
    template <uint16 outer1, uint16 inner, uint16 outer2>
    friend Matrix<outer1, outer2> operator*(Matrix<outer1, inner>& lhs,
                                            Matrix<inner, outer2>& rhs);

    template <uint16 dim1, uint16 dim2>
    friend Matrix<dim1, dim2> operator+(Matrix<dim1, dim2>& lhs,
                                        Matrix<dim1, dim2>& rhs);

    double Values_[Tsize0][Tsize1];
    uint16 Dim0_;
    uint16 Dim1_;

}; //Matrix


//#todo check if parameteres can be const
template <uint16 outer1, uint16 inner, uint16 outer2>
Matrix<outer1, outer2> operator*(Matrix<outer1, inner>& lhs,
                                 Matrix<inner, outer2>& rhs)
{
    Matrix<outer1, outer2> Result = Matrix<outer1, outer2>();

    for (uint16 i = 0; i < outer1; ++i)
    {
        for (uint16 j = 0; j < outer2; ++j)
        {
            for (uint16 k = 0; k < inner; ++k)
            {
                Result[i][j] += lhs[i][k] * rhs[k][j];
            }
        }
    }
    return Result;
}


template <uint16 dim1, uint16 dim2>
Matrix<dim1, dim2> operator+(Matrix<dim1, dim2>& lhs,
                             Matrix<dim1, dim2>& rhs)
{
    Matrix<dim1, dim2> res_;
    double* lhs_values_ptr = &lhs.Values_[0][0];
    double* rhs_values_ptr = &rhs.Values_[0][0];
    double* res_values_ptr = &res_.Values_[0][0];

    for(int i=0; i<dim1*dim2; i++) {
        res_values_ptr[i] = lhs_values_ptr[i] + rhs_values_ptr[i];
    }
    return res_;
}

;

} /// namespace matr

#endif //MATRIX_H_

