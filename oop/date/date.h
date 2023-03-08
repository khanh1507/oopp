#include<iostream>
#include<ctime>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(  int year);
    Date(int year, int month);
    Date(int year, int month, int day);
    Date(const Date& date);
    ~Date();
    friend ostream& operator<<(ostream& os, const Date& date);
    friend istream& operator>>(istream& is, Date& date);

    Date Tomorrow();
    Date Yesterday();

    // Date& operator=(const Date& date);

    bool operator==(const Date& date);
    bool operator!=(const Date& date);
    bool operator>=(const Date& date);
    bool operator<=(const Date& date);
    bool operator>(const Date& date);
    bool operator<(const Date& date);

    Date operator+( int days);
    Date operator-(int days);

    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    operator int();
    operator long();
    Date& operator+=(int days);
    Date& operator-=(int days);

};