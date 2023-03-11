#include <iostream>
#include <ctime>

using namespace std;
class IntArray{
private:
    int* data;
    int size;
public:
    IntArray();
    IntArray(int size);
    IntArray(int* data, int size);
    IntArray(const IntArray& other);
    ~IntArray();

    friend istream& operator>>(istream& is, IntArray& other);
    friend ostream& operator<<(ostream& os, const IntArray& other);

 };