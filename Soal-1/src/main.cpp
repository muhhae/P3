#include <iostream>
#include "include/parkir.hpp"

using namespace std;

int main()
{
    int k, n;

    cout<<"Jumlah kendaraan: "; cin >> n;
    cout<<"Kapasistas parkir: "; cin >> k;
    

    Parkir m_parkir(k, n);

    cout<<"\n";

    m_parkir.input();
    m_parkir.print();
    m_parkir.cekRamai();

    return 0;
}