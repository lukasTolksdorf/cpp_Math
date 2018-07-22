#ifndef MATRIX_H_
#define MATRIX_H_

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef signed short int16;

namespace Matr {

template<uint16 Tsize0, uint16 Tsize1>
class Matrix
{
public:
    Matrix()
    {
        //intentionally left empty
    }
    ~Matrix()
    {
        //intentionally left empty
    }

    double& Get(int idx1, int idx2)
    {
        Values_[idx1][idx2];
    }

    void SetValue(int idx1, int idx2, double value)
    {
        Values_[idx1][idx2] = value;
    }

    void SetZeros() {
        for(int i=0; i<Tsize0; ++i) {
            for(int j=0; j<Tsize1; ++j) {
                Values_[i][j] = (double)rand() / RAND_MAX;;
            }
        }
    }

    double* GetRow(int idx1) {
        return &Values_[idx1][0];
    }

    double* operator[](int idx1) {
        return this->GetRow(idx1);
    }

    void writeToIostream()
    {
        std::cout << Values_[0][0] << "\n";
    }
    //multiplication zahl, matrix

    //multiplication matrix, matrix

    //template<uint16 dim1>
    //Matrix<Tsize0, dim1>& operator*(Matrix<uint16, uint16 dim1>)
    //{

    //}
    //addition matrix, matrix



private:
    template <uint16 outer1, uint16 inner, uint16 outer2>
    friend Matrix<outer1, outer2> operator*(const Matrix<outer1, inner>& lhs,
                                            const Matrix<inner, outer2>& rhs);

    double Values_[Tsize0][Tsize1];
}; //Matrix



template <uint16 outer1, uint16 inner, uint16 outer2>
Matrix<outer1, outer2> operator*(const Matrix<outer1, inner>& lhs,
                                 const Matrix<inner, outer2>& rhs)
{

    return Matr;
}

} /// namespace matr

#endif
