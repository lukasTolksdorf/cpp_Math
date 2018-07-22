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

    void SetValues()
    {}

    void SetZeros() {
        for(int i; i<Tsize0; ++i) {
            for(int j; j<Tsize1; ++j) {
                Values_[i][j] = 0;
            }
        }
    }

    //double& operator[](int idx1){
    //
    //}

    //double& operator[][](int idx1, int idx2){
    //    return this->get(idx1, idx2);
    //}

private:

    double Values_[Tsize0][Tsize1];
};

} /// namespace matr

#endif
