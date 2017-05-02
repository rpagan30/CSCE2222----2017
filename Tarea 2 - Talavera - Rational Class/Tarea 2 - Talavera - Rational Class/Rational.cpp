//
//  Rational.cpp
//  Tarea 2 - Talavera - Rational Class
//
//  Created by Rafael Pagan on 3/14/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>

using namespace std;

#include "Rational.h"

/////////////////////////////////////////////////////////////////////////////////////////////
//Overloaded Operators///////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

double Rational::CalculateFloat() {
    double q1 = (double)this->getNum();
    double q2 = (double)this->getDen();
    return q1 / q2;
}

Rational Rational::operator + (const Rational &tempRational) {
    
    int cd = this->getDen() * tempRational.getDen();
    int Num1 = this->getNum() * tempRational.getDen();
    int Num2 = tempRational.getNum() * this->getDen();
    
    return Rational (Num1 + Num2, cd);
}

Rational Rational::operator - (const Rational &tempRational) {
    
    int cd = this->getDen() * tempRational.getDen();
    int Num1 = this->getNum() * tempRational.getDen();
    int Num2 = tempRational.getNum() * this->getDen();
    
    return Rational (Num1 - Num2, cd);
}

Rational Rational::operator * (const Rational &tempRational) {
    
    int cdr = this->getDen() * tempRational.getDen();
    int Num5 = this->getNum() * tempRational.getNum();
    
    return Rational (Num5, cdr);
}

Rational Rational::operator / (const Rational &tempRational) {
    
    int cdd = this->getDen() * tempRational.getNum();
    int Num6 = this-> getNum() * tempRational.getNum();
    
    return Rational (Num6, cdd);
}


Rational & Rational::operator=(const Rational &tempRational) {
    this->numerator = tempRational.getNum();
    this->denominator = tempRational.getDen();
    return *this;
}
//"Is more than" operator
bool Rational::operator>(Rational &tempRational) {
    bool flag = false;
    if (this -> CalculateFloat() > tempRational.CalculateFloat()) {
        flag = true;
    }
    return flag;
}
//"Is less than" operator
bool Rational::operator<(Rational &tempRational) {
    bool flag = false;
    if (this -> CalculateFloat() < tempRational.CalculateFloat()) {
        flag = true;
    }
    return flag;
}
//"Is equal to" operator
bool Rational::operator==(const Rational &tempRational) {
    bool flag = false;
    if(tempRational.getNum() == this-> getNum() & tempRational.getDen() == this-> getDen()) {
        flag = true;
    }
    return flag;
}

ostream &operator<<(ostream &output, const Rational &tempRational) {
    output << "Numerator: " << tempRational.getNum() << endl;
    output << "Denominator: " << tempRational.getDen() << endl;
    return output;
}///end operator


istream &operator>>(istream &input, Rational &tempRational) {
    cout << "Entra el valor de la base: " << endl;
    input >> tempRational.numerator;
    cout << "Entra el valor de la altura: " << endl;
    input >> tempRational.denominator;
    
    return input;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//Constructor, Destructor, Getters and Setters///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
Rational::Rational( int numerator, int denominator): numerator(numerator), denominator(denominator)
{}

Rational::~Rational() {
    //cout << "Rational object destroyed.\n";
}
//Getters and Setters
int Rational::getNum() const {
    return numerator;
}
int Rational::getDen() const {
    return denominator;
}
void Rational::setNum(int a) {
    numerator = a;
}
void Rational::setDen(int b) {
    denominator = b;
}
/////////////////////////////////////////////////////////////////////////////////////////////
//Math///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
void Rational::GCD(Rational g1) {
    
    int temp = 1, a = g1.getNum() , b = g1.getDen();
    
    if(a < 0) {
        a *= 1;
    }
    else if(b < 0) {
        b *= -1;
    }
    
    while(b > 0)
    {
        temp = b;//r = x % y;
        b = a % temp;//x=y;
        a = temp;//y=r;
    }
    
    cout << "The fraction (" << getNum() << " / " << getDen() << ") can be simplified to (" << g1.getNum() / temp << " / " << g1.getDen() / temp << ") using the GCD " << temp <<  "." << endl;
}

void Rational::Add(Rational a1) {

    int cd = getDen() * a1.getDen();
    int Num1 = getNum() * a1.getDen();
    int Num2 = a1.getNum() * getDen();
    
    cout << "SUM: (" << getNum() << " / " << getDen() << ") + (" << a1.getNum() << " / " << a1.getDen() << ") = (" << Num1 + Num2 << " / " << cd << ")"<< endl;
    
}

void Rational::Subtract(Rational s1) {
    
    int cds = getDen()* s1.getDen();
    int Num3 = getNum() * s1.getDen();
    int Num4 = s1.getNum() * getDen();
    
    cout << "SUBTRACTION: (" << getNum() << " / " << getDen() << ") - (" << s1.getNum() << " / " << s1.getDen() << ") = (" << Num3 - Num4 << " / " << cds << ")"<< endl;
}

void Rational::Multiply(Rational m1) {
    
    int cdr = getDen()* m1.getDen();
    int Num5 = getNum() * m1.getNum();
    
    cout << "MULTIPLICATION: (" << getNum() << " / " << getDen() << ") * (" << m1.getNum() << " / " << m1.getDen() << ") = (" << Num5  << " / " << cdr << ")"<< endl;
}

void Rational::Divide(Rational d1) {
    int cdd = getDen()* d1.getNum();
    int Num6 = getNum() * d1.getDen();
    
    cout << "DIVISION: (" << getNum() << " / " << getDen() << ") / (" << d1.getNum() << " / " << d1.getDen() << ") = (" << Num6  << " / " << cdd << ")"<< endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////
//Display////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
void Rational::DisplayFract() const {
    cout <<"DISPLAY FRACTION: " << this->getNum() << " / " << this->getDen() << endl;
}
void Rational::DisplayFloat() {
    
    cout <<"DISPLAY DECIMAL OF FRACTION: " << this->getNum() << " / " << this->getDen() <<" = " << this->CalculateFloat() << endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////
//Copy Constructor///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
Rational::Rational( const Rational &aRational) {
        
    setNum( aRational.getNum() );
    setDen( aRational.getDen() );
    //cout << "Copied fraction using the copy constructor." << endl;
}





