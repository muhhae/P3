#include "include/parkir.hpp"

#include <iostream>

Parkir::Parkir(int kapasitas, int jmlKendaraan)
{
    this->jmlKendaraan = jmlKendaraan;
    this->kapasitas = kapasitas;
}

void Parkir::tambahKendaraan(){
    m_kendaraan.push_back(Kendaraan());
}

void Parkir::input()
{
    for (int i = 0; i < jmlKendaraan; i++)
    {
        system("cls");
        std::cout<<"Kendaraan "<<i+1<<std::endl;
        tambahKendaraan();
    }
}

void Parkir::print()
{
    system("cls");
    for (int i = 0; i < m_kendaraan.size(); i++)
    {
        std::cout<<"Kendaraan "<<i+1<<std::endl;
        m_kendaraan[i].print();
        std::cout<<std::endl;
    }
}

void Parkir::cekRamai()
{
    int min = 24, max = 0;

    for (int i = 0; i < m_kendaraan.size(); i++)
    {
        if (min > m_kendaraan[i].getDatang()) min = m_kendaraan[i].getDatang();
        if (max < m_kendaraan[i].getPergi()) max = m_kendaraan[i].getPergi();
    }

    int Kendaraan1Waktu = 0;
    int max1Waktu = 0;

    //std::cout<<"min = "<<min<<"max = "<<max<<std::endl;

    for (int i = min; i <= max; i++)
    {
        Kendaraan1Waktu = 0;

        for (int j = 0; j < m_kendaraan.size(); j++)
        {
            if (i <= m_kendaraan[j].getPergi() && i >= m_kendaraan[j].getDatang())
            {
                //std::cout<<i<<" "<<m_kendaraan[j].getDatang()<<m_kendaraan[j].getPergi()<<" "<<" "<<std::endl;
                Kendaraan1Waktu++;
            }
        }

        if (max1Waktu < Kendaraan1Waktu) max1Waktu = Kendaraan1Waktu;
    }

    std::cout<<"Kapasitas : "<<kapasitas<<std::endl;
    std::cout<<"Jumlah Terbanyak Kendaraan : "<<max1Waktu<<std::endl;
    
    if (max1Waktu > kapasitas) std::cout<<"Macet"<<std::endl;
    else std::cout<<"Lancar"<<std::endl;
}