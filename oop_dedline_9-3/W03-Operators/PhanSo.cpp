//
//  PhanSo.cpp
//  Constructor
//
//  Created by Dung L.H. Nguyen on 10/4/16.
//  Copyright © 2016 DnD. All rights reserved.

#include "PhanSo.h"

int CPhanSo::dem = 0;

void CPhanSo::Nhap(){
    cout<<"Nhap tu:";
    cin >>tuSo;
    cout<<"Nhap mau:";
    cin >>mauSo;
}

void CPhanSo::Xuat(){
    cout<<tuSo<<"/"<<mauSo<<endl;
}

CPhanSo::CPhanSo(){
    tuSo = 0;
    mauSo = 1;
    CPhanSo::dem+=1;
}

CPhanSo::CPhanSo(int ts, int ms){
    tuSo = ts;
    mauSo = ms;
    
    CPhanSo::dem+=1;
}

CPhanSo::CPhanSo(const CPhanSo& ps){
    tuSo = ps.tuSo;
    mauSo = ps.mauSo;
    
    CPhanSo::dem+=1;
}



CPhanSo CPhanSo::operator+(const CPhanSo &ps){
    CPhanSo ketQua;
    ketQua.tuSo = (this->tuSo)*ps.mauSo + ps.tuSo*mauSo;
    ketQua.mauSo = mauSo * ps.mauSo;
    
    return ketQua;
}

//a>b
int CPhanSo::operator>(const CPhanSo &ps){
    float ps1 = tuSo/mauSo;
    float ps2 = ps.tuSo/ps.mauSo;
    
    if (ps1 > ps2) {
        return 1;
    }
    
    return 0;
}

int CPhanSo::operator<=(const CPhanSo &ps){
//    if (*this > ps) {
//        return 0;
//    }
//    return 1;
    float ps1 = tuSo/mauSo;
    float ps2 = ps.tuSo/ps.mauSo;

    if (ps1 <= ps2) {
        return 1;
    }

    return 0;
}


//friend ostream& operator<<(ostream& os,const CPhanSo&ps);
//friend istream& operator>>(istream& is,CPhanSo&ps);
ostream& operator<<(ostream& os,const CPhanSo&ps){
    os<<ps.tuSo<<"/"<<ps.mauSo;
    
    return os;
}

istream& operator>>(istream& is,CPhanSo&ps){
    cout<<"Nhap tu:";
    is >> ps.tuSo;
    cout<<"Nhap mau:";
    is >>  ps.mauSo;
    
    return is;
}


// CPhanSo::operator float() const {
//     return 1.0*this->tuSo/this->mauSo;
// }