#include <iostream>
#include "matrix.h"



int main(int argc, char* argv[])
{
    Matr::Matrix<1, 2> Matr1;
    Matr1.SetZeros();
    Matr::Matrix<2, 3> Matr2;
    Matr2.SetZeros();
    auto Matr3 = Matr1 * Matr2;
    Matr3.SetZeros();
    Matr3.writeToIostream();
}
