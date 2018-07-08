#include "gtest/gtest.h"

#include "matrix.h"

TEST(DimensionTest, OperationEQUALTO){
  EXPECT_TRUE(matr::Dimension(5,5) == matr::Dimension(5,5));
  EXPECT_FALSE(matr::Dimension(4,5) == matr::Dimension(5,4));
  EXPECT_FALSE(matr::Dimension(1,2) == matr::Dimension(1,1));
  EXPECT_FALSE(matr::Dimension(7,7) == matr::Dimension(6,7));
}
