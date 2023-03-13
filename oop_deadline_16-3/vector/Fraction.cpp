#include "MyVector.h"
#include "Fraction.h"

Fraction::Fraction() {
    this->numerator = 0;
    this->denominator = 1;
}
Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}
Fraction::Fraction(const Fraction &f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
}
Fraction::~Fraction() {
}
int Fraction::getNumerator() {
    return numerator;
}
int Fraction::getDenominator() {
    return denominator;
}
void Fraction::setNumerator(int numerator) {
    this->numerator = numerator;
}
void Fraction::setDenominator(int denominator) {
    this->denominator = denominator;
}
void Fraction::print() {
    cout << numerator << "/" << denominator << endl;
}
istream& operator>>(istream &is, Fraction &f) {
    is >> f.numerator >> f.denominator;
    return is;
}
ostream& operator<<(ostream &os, const Fraction &f) {
    os << f.numerator << "/" << f.denominator;
    return os;
}

void Fraction::operator=(const Fraction &f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
}
Fraction Fraction::operator+(const Fraction &f) {
    Fraction temp;
    temp.numerator = this->numerator * f.denominator + this->denominator * f.numerator;
    temp.denominator = this->denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator-(const Fraction &f) {
    Fraction temp;
    temp.numerator = this->numerator * f.denominator - this->denominator * f.numerator;
    temp.denominator = this->denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator*(const Fraction &f) {
    Fraction temp;
    temp.numerator = this->numerator * f.numerator;
    temp.denominator = this->denominator * f.denominator;
    return temp;
}
Fraction Fraction::operator/(const Fraction &f) {
    Fraction temp;
    temp.numerator = this->numerator * f.denominator;
    temp.denominator = this->denominator * f.numerator;
    return temp;
}
bool Fraction::operator==(const Fraction &f) {
    return (this->numerator * f.denominator == this->denominator * f.numerator);
}
bool Fraction::operator!=(const Fraction &f) {
    return (this->numerator * f.denominator != this->denominator * f.numerator);
}
bool Fraction::operator>(const Fraction &f) {
    return (this->numerator * f.denominator > this->denominator * f.numerator);
}
bool Fraction::operator<(const Fraction &f) {
    return (this->numerator * f.denominator < this->denominator * f.numerator);
}
bool Fraction::operator>=(const Fraction &f) {
    return (this->numerator * f.denominator >= this->denominator * f.numerator);
}
bool Fraction::operator<=(const Fraction &f) {
    return (this->numerator * f.denominator <= this->denominator * f.numerator);
}
