#include"array.h"
#include<iostream>
using namespace std;
IntArray::IntArray(){
    this->size = 0;
    this->data = NULL;
}
IntArray::IntArray(int size){
    this->size = size;
    this->data = new int[size];
}

IntArray::IntArray(int* data, int size){
    this->size = size;
    this->data = new int[size];
    for(int i = 0; i < size; i++){
        this->data[i] = data[i];
    }
}

IntArray::IntArray(const IntArray& other){
    this->size = other.size;
    this->data = new int[other.size];
    for(int i = 0; i < other.size; i++){
        this->data[i] = other.data[i];
    }
}

istream& operator>>(istream& is, IntArray& other){
    cout << "Enter size: ";
    is >> other.size;
    other.data = new int[other.size];
    for(int i = 0; i < other.size; i++){
        cout << "Enter data[" << i << "]: ";
        is >> other.data[i];
    }
    return is;
}
ostream& operator<<(ostream& os,const IntArray& other){
    for(int i = 0; i < other.size; i++){
        os << other.data[i] << " ";
    }
    return os;
}



IntArray::~IntArray(){
    delete[] this->data;
}
