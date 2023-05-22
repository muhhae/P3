#ifndef PARKIR_HPP
#define PARKIR_HPP

#include <vector>
#include "kendaraan.hpp"

class Parkir{
    private:
        int jmlKendaraan;
        int kapasitas;
        std::vector<Kendaraan> m_kendaraan;
    public:
        Parkir(int kapasitas, int jmlKendaraan);
        void input();
        void tambahKendaraan();
        void print();
        void cekRamai();
};


#endif