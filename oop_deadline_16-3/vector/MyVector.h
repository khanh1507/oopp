#include <string>
#include <iostream>
#include <vector>
using namespace std;


template<class T>
class MyVector{
    private:
        T *arr;
        int size;
    public:
        // empty array
        MyVector();
        // n zeros
        MyVector(int n);
        MyVector(T *a, int n);
        MyVector(const MyVector &v);
        ~MyVector();
        int getSize();
        T getItem(int index);
        void setItem(T value, int index);
        void add(T value);
        void addRange(T *a, int n);
        void clear();
        bool contains(T value);
        void toArray(T *arr, int &n);
        bool equals(const MyVector &v);
        int indexOf(T value);
        int lastIndexOf(T value);
        void insert(T value, int index);
        void remove(T value);
        void removeAt(int index);
        void reverse();
        string toString();
        void sortAsc();
        void sortDesc();
};

template<class T>
MyVector<T>::MyVector(){
    size = 0;
    arr = new T[size];
}
template<class T>
MyVector<T>::MyVector(int n){
    size = n;
    arr = new T[size];
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}
template<class T>
MyVector<T>::MyVector(T *a, int n){
    size = n;
    arr = new T[size];
    for(int i = 0; i < size; i++){
        arr[i] = a[i];
    }
}
template<class T>

MyVector<T>::MyVector(const MyVector &v){
    size = v.size;
    arr = new T[size];
    for(int i = 0; i < size; i++){
        arr[i] = v.arr[i];
    }
}
template<class T>
MyVector<T>::~MyVector(){
    delete[] arr;
}
template<class T>

//int gets the size of the array
int MyVector<T>::getSize(){
    return size;
}
template<class T>
T MyVector<T>::getItem(int index){
    return arr[index];
}
template<class T>
void MyVector<T>::setItem(T value, int index){
    arr[index] = value;
}

template<class T>
void MyVector<T>::add(T value){
    T *temp = new T[size + 1];
    for(int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    temp[size] = value;
    delete[] arr;
    arr = temp;
    size++;
}
template <class T>
void MyVector<T>::addRange(T *a, int n)
{
    T *temp = new T[size + n];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = size; i < size + n; i++)
    {
        temp[i] = a[i - size];
    }
    delete[] arr;
    arr = temp;
    size += n;
    // for(int i = 0; i < n; i++){
    //     this -> add(a[i]);
    // }
}

template<class T>
void MyVector<T>::clear(){
    delete[] arr;
    size = 0;
    arr = new T[size];
}

template<class T>
bool MyVector<T>::contains(T value){
    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            return true;
        }
    }
    return false;
}
template<class T>

void MyVector<T>::toArray(T *arr, int &n){
    n = size;
    for(int i = 0; i < size; i++){
        arr[i] =this->arr[i];
    }
}
template<class T>
bool MyVector<T>::equals(const MyVector &v){
    if(size != v.size){
        return false;
    }
    for(int i = 0; i < size; i++){
        if(arr[i] != v.arr[i]){
            return false;
        }
    }
    return true;
}

template<class T>
int MyVector<T>::indexOf(T value){
    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}
template<class T>
int MyVector<T>::lastIndexOf(T value){
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}


template<class T>
//void MyVector<T>::insert(T value, int index)
void MyVector<T>::insert(T value, int index){
    T *temp = new T[size + 1];
    for(int i = 0; i < index; i++){
        temp[i] = arr[i];
    }
    temp[index] = value;
    for(int i = index + 1; i < size + 1; i++){
        temp[i] = arr[i - 1];
    }
    delete[] arr;
    arr = temp;
    size++;
}

template<class T>

void MyVector<T>::remove(T value){
    int index = indexOf(value);
    if(index != -1){
        removeAt(index);
    }
}

template<class T>
void MyVector<T>::removeAt(int index){
    T *temp = new T[size - 1];
    for(int i = 0; i < index; i++){
        temp[i] = arr[i];
    }
    for(int i = index; i < size - 1; i++){
        temp[i] = arr[i + 1];
    }
    delete[] arr;
    arr = temp;
    size--;
}

template<class T>
void MyVector<T>::reverse(){
    T *temp = new T[size];
    for(int i = 0; i < size; i++){
        temp[i] = arr[size - i - 1];
    }
    delete[] arr;
    arr = temp;
}

template<class T>
string MyVector<T>::toString(){
    string s = "";
    for(int i = 0; i < size; i++){
        s += to_string(arr[i]) + " ";
    }
    return s;
}
template<class T>
void MyVector<T>::sortAsc(){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
template<class T>
void MyVector<T>::sortDesc(){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}