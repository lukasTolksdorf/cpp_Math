#include "matrix.h"

using namespace matr;

Matrix::Matrix(const int& rows, const int& colums):
size_(rows, colums)
{}

Dimension Matrix::size() const{
  return size_;
}

Matrix prodDot(Matrix& rhs)
{
  // create new matrix with correct dimensions
  Matrix result = Matrix(this.size().getRows(), rhs.size().getColumns());

  if(this.size().getColumns() != rhs.size().getRows())
  {
    throw error("the dimensions of the matrixes do not fit, hence no prodDot is possible");
  }

  for (int iterCol; iterCol< this.getColumns(); iterCol++)
  {
    for(int iterRow; iterRow < rhs.getRows(); iterRow)
    {
      result[][]
    }
  }

}
