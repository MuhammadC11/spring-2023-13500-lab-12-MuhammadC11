#include <iostream>
#include <vector>
#include "funcs.h"

int main()
{

    std::vector<int> v = makeVector(10);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
    std::vector<int> n{-4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

    std::vector<int> newV = goodVibes(n);
    for (int i = 0; i < newV.size(); i++)
    {
        std::cout << newV[i] << std::endl;
    }
    std::cout << std::endl;

    std::vector<int> goku{1, 2, 3};
    std::vector<int> vegeta{4, 5, 6};
    gogeta(goku, vegeta);
    for (int i = 0; i < goku.size(); i++)
    {
        std::cout << goku[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < vegeta.size(); i++)
    {
        std::cout << vegeta[i] << std::endl;
    }

    std::cout << std::endl;

    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};
    std::vector<int> sum = sumPairWise(v1, v2);
    for (int i = 0; i < sum.size(); i++)
    {
        std::cout << sum[i] << std::endl;
    }

    return 0;
}