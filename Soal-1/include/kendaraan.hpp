#ifndef _KENDARAAN_HPP
#define _KENDARAAN_HPP

class Kendaraan
{
    private:
        int datang, pergi;
    public:
        Kendaraan();
        Kendaraan(int datang, int pergi);
        ~Kendaraan();
        void setDatang(int datang);
        void setPergi(int pergi);
        int getDatang(){ return datang; }
        int getPergi(){ return pergi; }
        void print();
};


#endif