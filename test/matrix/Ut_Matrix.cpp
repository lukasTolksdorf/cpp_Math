#include "gtest/gtest.h"
#include "UtMatrix_Fixture.hpp"
#include "matrix.h"




/*
 *  \test MemoryAllocation
 *
 *  \brief checks if the allocated memory is big enough
 */

TEST(MatrixTest, MemoryAllocation) {
    ::Matr::Matrix Matrix = ::Matr::Matrix(2, 2);

    EXPECT_GE(sizeof(Matrix), sizeof(double[2][2]));

}
