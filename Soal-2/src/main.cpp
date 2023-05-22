#include <iostream>
#include "include/largest-number.hpp"

using namespace std;

int main()
{
    LargestNumber largestNumber;

    int n; cout<<"Jumlah Angka : ";cin>>n;

    cout<<"\nAngka : ";
    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        largestNumber.readInput(temp);
    }

    largestNumber.sortNumbers();
    cout<<"Angka Terbesar : "<<largestNumber.getLargestNumber();
    
    return 0;

}