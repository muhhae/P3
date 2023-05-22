#include <iostream>
#include "include/parkir.hpp"

using namespace std;

int main()
{
    int k, n;

    cout<<"Kapasistas parkir: "; cin >> k;
    cout<<"Jumlah kendaraan: "; cin >> n;

    Parkir m_parkir(k, n);

    m_parkir.input();
    m_parkir.print();
    m_parkir.cekRamai();

    return 0;
}