#include "fraction.h"

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction::Fraction(const Fraction &f)
{
    numerator = f.numerator;
    denominator = f.denominator;
}
Fraction::~Fraction()
{
    
}

istream &operator>>(istream &is, Fraction &f)
{
    char c;
    is >> f.numerator >> c >> f.denominator;
    return is;
}

ostream &operator<<(ostream &os, const Fraction &f)
{
    os << f.numerator << "/" << f.denominator << endl;
    return os;
}


Fraction Fraction::operator+(const Fraction &f)
{
    Fraction temp;
    temp.numerator = numerator * f.denominator + denominator * f.numerator;
    temp.denominator = denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator-(const Fraction &f)
{
    Fraction temp;
    temp.numerator = numerator * f.denominator - denominator * f.numerator;
    temp.denominator = denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator*(const Fraction &f)
{
    Fraction temp;
    temp.numerator = numerator * f.numerator;
    temp.denominator = denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator/(const Fraction &f)
{
    Fraction temp;
    temp.numerator = numerator * f.denominator;
    temp.denominator = denominator * f.numerator;
    return temp;
}
    
    ///////
Fraction Fraction::operator+(int n){
    Fraction temp;
    temp.numerator = numerator + denominator * n;
    temp.denominator = denominator;
    return temp;
}
Fraction Fraction::operator-(int n){
    Fraction temp;
    temp.numerator = numerator - denominator * n;
    temp.denominator = denominator;
    return temp;
}
Fraction Fraction::operator*(int n){
    Fraction temp;
    temp.numerator = numerator * n;
    temp.denominator = denominator;
    return temp;
}
Fraction Fraction::operator/(int n){
    Fraction temp;
    temp.numerator = numerator;
    temp.denominator = denominator * n;
    return temp;
}
    
    
    
Fraction Fraction::operator+=(const Fraction &f){
    return *this = *this + f;
}
Fraction Fraction::operator-=(const Fraction &f){
    return *this = *this - f;
}
Fraction Fraction::operator*=(const Fraction &f){
    return *this = *this * f;
}
Fraction Fraction::operator/=(const Fraction &f){
    return *this = *this / f;
}



bool Fraction::operator==(const Fraction &f) 
{
    return numerator == f.numerator && denominator == f.denominator;
}


bool Fraction::operator!=(const Fraction &f){
    return numerator != f.numerator || denominator != f.denominator;
}

bool Fraction::operator>=(const Fraction &f){
    return numerator * f.denominator >= denominator * f.numerator;
}
bool Fraction::operator>(const Fraction &f){
    return numerator * f.denominator > denominator * f.numerator;
}
bool Fraction::operator<=(const Fraction &f){
    return numerator * f.denominator <= denominator * f.numerator;
}

bool Fraction::operator<(const Fraction &f){
    return numerator * f.denominator < denominator * f.numerator;
}




Fraction &Fraction::operator++() {
    return *this = *this + Fraction(1,1);
}
Fraction Fraction::operator++(int) {
    Fraction temp = *this;
    ++*this;
    return temp;
}
Fraction &Fraction::operator--() {
    return *this = *this - Fraction(1,1);
}
Fraction Fraction::operator--(int) {
    Fraction temp = *this;
    --*this;
    return temp;
}
 Fraction::operator float() {
    return (float)numerator / (float)denominator;
}
