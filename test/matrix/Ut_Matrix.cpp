#include "gtest/gtest.h"
#include "matrix.h"


TEST(MatrixTest, MemoryAllocation)
{

    ::Matr::Matrix<2, 3> Matrix = ::Matr::Matrix<2, 3>();
    EXPECT_GE(sizeof(Matrix), sizeof(double[2][3]));

    ::Matr::Matrix<100, 1000> Matrix1 = ::Matr::Matrix<100, 1000>();
    EXPECT_GE(sizeof(Matrix1), sizeof(double[100][1000]));

}

TEST(MatrixTest, Multiplication)
{
    ::Matr::Matrix<2, 3> Lhs = ::Matr::Matrix<2, 3>();
    Lhs.SetAllTo(2);

    ::Matr::Matrix<3, 4> Rhs = ::Matr::Matrix<3, 4>();
    Rhs.SetAllTo(.1);

    ::Matr::Matrix<2, 4> Result = Lhs * Rhs;

    EXPECT_DOUBLE_EQ(Result.Get(0, 0), 0.6);
}
