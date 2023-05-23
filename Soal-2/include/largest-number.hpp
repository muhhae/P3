#ifndef LARGESTNUMBER_HPP
#define LARGESTNUMBER_HPP

#include <vector>
#include <string>


class LargestNumber{
    private:
        std::vector<int> num;

    public:
        LargestNumber();
        bool compare(int a, int b);
        void readInput(int inputNum);
        void sortNumbers();
        std::string getLargestNumber();
};


#endif