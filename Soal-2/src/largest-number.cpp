#include "include/largest-number.hpp"
#include <iostream>

LargestNumber::LargestNumber(){

}

bool LargestNumber::compare(int _a, int _b)
{
    int aC, bC;
    float a = (float)_a, b = (float)_b;

    while (a >= 10) 
    {
        a /= 10;
    }

    while (b >= 10) 
    {
        b /= 10;
    }

    // std::cout<<a<<" "<<b<<std::endl;

    if ((int)a == (int)b) return _a % 10 > _b % 10;

    return a > b;
}

void LargestNumber::sortNumbers()
{
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i; j < num.size(); j++)
        {
            if (compare(num[j], num[i]))
            {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
}

void LargestNumber::readInput(int inputNum)
{
    num.push_back(inputNum);
}
std::string LargestNumber::getLargestNumber()
{
    std::string n = "";

    for (int i = 0; i < num.size(); i++)
    {
        n += std::to_string(num[i]);
    }

    return n;
}