#include "gtest/gtest.h"
#include "matrix.h"


TEST(MatrixTest, MemoryAllocation)
{

    ::Matr::Matrix<2, 3> Matrix = ::Matr::Matrix<2, 3>();
    EXPECT_GE(sizeof(Matrix), sizeof(double[2][3]));

    ::Matr::Matrix<100, 1000> Matrix1 = ::Matr::Matrix<100, 1000>();
    EXPECT_GE(sizeof(Matrix1), sizeof(double[100][1000]));

}
