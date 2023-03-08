#include <iostream>
using namespace std;

class CPhanSo{
    private:
        int tuSo;
        int mauSo;
    public:
        static int dem;
        void Nhap();
        void Xuat();
        CPhanSo();
        CPhanSo(int tuSo, int mauSo);
        CPhanSo(const CPhanSo& ps);

        CPhanSo operator+(const CPhanSo& ps); ///
        int operator>(const CPhanSo& ps);
        int operator<=(const CPhanSo& ps);
        friend istream& operator>>(istream& is, CPhanSo& ps);
        friend ostream& operator<<(ostream& os, const CPhanSo& ps);
        operator float();

};