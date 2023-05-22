#include "include/largest-number.hpp"
#include <iostream>

LargestNumber::LargestNumber(){

}

bool LargestNumber::compare(int a, int b)
{
    while (a >= 10) 
    {
        a /= 10;
    }

    while (b >= 10) 
    {
        b /= 10;
    }

    // std::cout<<a<<" "<<b<<std::endl;

    if (a > b) return true;
    else return false;
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