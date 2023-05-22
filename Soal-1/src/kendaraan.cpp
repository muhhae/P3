#include "include/kendaraan.hpp"
#include <iostream>
#include <conio.h>

Kendaraan::Kendaraan(int datang, int pergi)
{
    setDatang(datang);
    setPergi(pergi);
}

Kendaraan::Kendaraan()
{
    while (1)
    {
        int d, p;
        std::cout<<"datang : "; std::cin>>d;
        std::cout<<"pergi : "; std::cin>>p;

        if (p <= 24 && p > 1 && d < 24 && d >= 1 && p >= d)
        {
            setDatang(d);
            setPergi(p);
            break;
        }

        std::cout<<"Data salah, masukkan data kembali (tekan sembarang)"<<std::endl; 
        getch();
    }
}

void Kendaraan::setDatang(int datang) 
{
    this->datang = datang;
}

void Kendaraan::setPergi(int pergi)
{
    this->pergi = pergi;
}

void Kendaraan::print()
{
    std::cout<<"Datang :"<<datang<<std::endl;
    std::cout<<"Pergi : "<<pergi<<std::endl;
}

Kendaraan::~Kendaraan()
{
}