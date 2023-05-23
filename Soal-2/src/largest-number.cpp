#include "include/largest-number.hpp"
#include <iostream>
#include <conio.h>

LargestNumber::LargestNumber(){

}

bool LargestNumber::compare(int _a, int _b)
{
    if (_a == _b)
    {
        return false;
    }

    int aC = 1, bC = 1;
    float a = (float)_a, b = (float)_b;

    while (a >= 10) 
    {
        aC *= 10; 
        a /= 10;
    }

    while (b >= 10) 
    {
        bC *= 10;
        b /= 10;
    }

    int mod = aC > bC ? aC : bC;

    // std::cout<<a<<" "<<b<<std::endl;
    
    while ((int)a == (int)b && mod != 1)
    {
        //std::cout<<"tes"<<std::endl;

        // std::cout<<"_a = "<<_a<<" _a % mod = "<<(_a % mod)<<"_b = "<<_b<<" _b % mod = "<<(_b % mod)<<std::endl;
        // getch();

        if ( ( (_a % mod) != (_b % mod) ) /*&& (_a % mod != 0) && (_b % mod != 0)*/ )
        {
            return (_a % mod) > (_b % mod);
        }

        // 10 1

        // std::cout<<"mod = "<<mod<<" "<<(_a % mod)<<" "<<" "<<(_b % mod)<<std::endl;
        // getch();

        mod /= 10;
    } 

    //if (a == b) return _a < _b;

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
        //n += " ";
    }

    return n;
}