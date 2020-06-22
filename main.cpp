#include <iostream>
#include "ConstSizeVector.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    ConstSizeVector<int, 3> A1;

    A1[0] = 6;
    A1[1] = 7;
    A1[2] = 3;

    /*
    for (size_t i = 0; i < A1.size(); i++)
    {
        std::cout << A1[i] << std::endl;
    }
    */






    ConstSizeVector<int, 5> A2;

    A2[0] = 4;
    A2[1] = 2;
    A2[2] = 1;
    A2[3] = 8;
    A2[4] = 9;

    ConstSizeVector<int, (A1.size() + A2.size())> A3 = concat(A1, A2);

    for (size_t i = 0; i < A3.size(); i++)
    {
        std::cout << A3[i] << std::endl;
    }



    return 0;
}
