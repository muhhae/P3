#include "include/largest-number.hpp"
#include <iostream>
#include <conio.h>
#include <vector>

LargestNumber::LargestNumber(){

}

bool LargestNumber::compare(int _a, int _b)
{
    // std::cout<<"A0 = "<<_a<<" B0 = "<<_b<<std::endl;

    if (_a == _b)
    {
        return false;
    }

    std::vector<int> A_digit;
    std::vector<int> B_digit;

    if (_a == 0) A_digit.push_back(0);
    if (_b == 0) B_digit.push_back(0);

    while (_a > 0) 
    {
        A_digit.push_back(_a % 10);
        _a /= 10;
    }

    while (_b > 0) 
    {
        B_digit.push_back(_b % 10);
        _b /= 10;
    }

    int iA = A_digit.size() - 1, iB = B_digit.size() - 1;

    while (1)
    {
        // std::cout<<"A = "<<A_digit[iA]<<" B = "<<B_digit[iB]<<std::endl;
        // getch();

        if (A_digit[iA] == B_digit[iB])
        {
            // std::cout<<"sama\n";
            if (iA > 0) iA--;
            if (iB > 0) iB--;
        }

        else 
        {
            // std::cout<<"beda\n";
            return A_digit[iA] > B_digit[iB];
        }

        if (A_digit[iA] == B_digit[iB] && iA <= 0 && iB <= 0) return A_digit.size() < B_digit.size();
    }
    
    return 0;
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