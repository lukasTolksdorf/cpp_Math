#ifndef UTMATRIX_FIXTURE_HPP__
#define UTMATRIX_FIXTURE_HPP__

#include "gtest/gtest.h"
#include "matrix.h"

class UtMatrix_Fixture : public testing::Test
{
public:
    UtMatrix_Fixture() {};
    void SetUp() {};
    void TearDown() {};
    ~UtMatrix_Fixture() {};

private:
    ::Matr::Matrix Matrix2x3_ = ::Matr::Matrix(2, 3);
};
#endif //UTMATRIX_FIXTURE_HPP__
