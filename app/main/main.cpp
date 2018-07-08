#include <iostream>
#include "matrix.h"
#include "operators.h"

int main(int argc, char *argv[])
{
  matr::Matrix matr = matr::Matrix(5,5);
  matr::Dimension dim = matr::Dimension(5,5);
  if(dim == matr.size()){
    std::cout<<"stimmt\n";
  }
  else
  {
    std::cout<<"stimmt nicht \n";
  }

}
