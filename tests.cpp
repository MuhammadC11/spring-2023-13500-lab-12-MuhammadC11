#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("makeVector")
{
    std::vector<int> v = makeVector(10);
    CHECK(v.size() == 10);
    CHECK(v[0] == 0);
    CHECK(v[1] == 1);
    CHECK(v[2] == 2);
    CHECK(v[3] == 3);
    CHECK(v[4] == 4);
}

TEST_CASE("goodVibes")
{
    std::vector<int> n{-4, -3, -2, -1, 1, 2, 3, 4, 5};
    std::vector<int> newV = goodVibes(n);
    CHECK(newV.size() == 5);
    CHECK(newV[0] == 1);
    CHECK(newV[1] == 2);
    CHECK(newV[2] == 3);
    CHECK(newV[3] == 4);
    CHECK(newV[4] == 5);
}

TEST_CASE("gogeta")
{
    std::vector<int> goku{1, 2, 3};
    std::vector<int> vegeta{4, 5, 6};
    gogeta(goku, vegeta);
    CHECK(goku.size() == 6);
    CHECK(goku[0] == 1);
    CHECK(goku[1] == 2);
    CHECK(goku[2] == 3);
    CHECK(goku[3] == 4);
    CHECK(goku[4] == 5);
    CHECK(goku[5] == 6);
    CHECK(vegeta.size() == 0);
}

TEST_CASE("sumPairWise")
{
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};
    std::vector<int> sum = sumPairWise(v1, v2);
    CHECK(sum.size() == 3);
    CHECK(sum[0] == 5);
    CHECK(sum[1] == 7);
    CHECK(sum[2] == 9);
}
