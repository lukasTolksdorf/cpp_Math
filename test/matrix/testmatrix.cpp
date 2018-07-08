#include "gtest/gtest.h"

#include "matrix.h"
#include "operators.h"


TEST(MatrixTests, InitializeDimensionProperty){
  matr::Matrix matr = matr::Matrix(5,5);
  matr::Dimension dim = matr::Dimension(5,5);
  EXPECT_EQ(matr.size().getRows(), dim.getRows());
  EXPECT_EQ(matr.size().getColumns(), dim.getColumns());
}

TEST(MatrixTests, TestEquality){
  EXPECT_EQ(matr::Dimension(4,4), matr::Dimension(4,4));
}
