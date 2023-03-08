#include <iostream>
#include <string>
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
        friend istream &operator>>(istream &is, Fraction &f);
        friend ostream& operator<<(ostream& os, const Fraction& f);
        
        Fraction operator+(const Fraction &f);
        Fraction operator-(const Fraction &f);
        Fraction operator*(const Fraction &f);
        Fraction operator/(const Fraction &f);
        
        
        //functions fraction addition with int
        Fraction operator+(int n);
        Fraction operator-(int n);
        Fraction operator*(int n);
        Fraction operator/(int n);
        
        
        Fraction operator+=(const Fraction &f);
        Fraction operator-=(const Fraction &f);
        Fraction operator*=(const Fraction &f);
        Fraction operator/=(const Fraction &f);
        
        bool operator==(const Fraction &f);
        bool operator!=(const Fraction &f);
        bool operator>=(const Fraction &f);
        bool operator>(const Fraction &f);
        bool operator<=(const Fraction &f);
        bool operator<(const Fraction &f);
        
        //operator +=
        //constexpr Fraction &Fraction::operator++();
       // constexpr Fraction &Fraction::operator++(int);
        Fraction &operator++();
        Fraction operator++(int);
        Fraction &operator--();
        Fraction operator--(int);
        
        // function defined fraction  to float
        operator float() ;

};