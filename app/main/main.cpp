#include <iostream>
#include "matrix.h"

using Matr::Slice;

int main(int argc, char* argv[])
{
    Matr::Slice<2> test1 =  Matr::Slice<2>();
    Matr::Slice<1> test2 = Matr::Slice<1>();

    double TestArray[2] = { 1.f, 0.1f };
    test1 = TestArray;
    //std::cout << test1.Values_[1] <<"\n";
    return 0;
}
