#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction();
        Fraction(int numerator, int denominator);
        Fraction(const Fraction &f);
        ~Fraction();
        int getNumerator();
        int getDenominator();
        void setNumerator(int numerator);
        void setDenominator(int denominator);
    //cin fraction
        friend istream& operator>>(istream &is, Fraction &f);
    //cout fraction 
        friend ostream& operator<<(ostream &os, const Fraction &f);
        void print();

        void operator=(const Fraction &f);  
        Fraction operator+(const Fraction &f);
        Fraction operator-(const Fraction &f);
        Fraction operator*(const Fraction &f);
        Fraction operator/(const Fraction &f);
        
        bool operator==(const Fraction &f); 
        bool operator!=(const Fraction &f);
        bool operator>(const Fraction &f);
        bool operator<(const Fraction &f);
        bool operator>=(const Fraction &f);
        bool operator<=(const Fraction &f);


};
