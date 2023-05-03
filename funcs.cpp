#include <iostream>
#include <vector>

std::vector<int> makeVector(int n)
{
    std::vector<int> num;
    for (int i = 0; i < n; i++)
    {
        num.push_back(i);
    }
    return num;
}
std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector<int> num;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            num.push_back(v[i]);
        }
    }
    return num;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for (int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]); // pushes vegeta into goku
    }
    vegeta.clear(); // clears vegeta
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    std::vector<int> sum;
    for (int i = 0; i < v1.size(); i++)
    {
        int sumN = v1[i] + v2[i];
        sum.push_back(sumN);
    }
    return sum;
}