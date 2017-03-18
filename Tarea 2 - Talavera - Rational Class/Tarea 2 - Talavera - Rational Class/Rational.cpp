//
//  Rational.cpp
//  Tarea 2 - Talavera - Rational Class
//
//  Created by Rafael Pagan on 3/14/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>
#include "Rational.h"

using namespace std;
//double d2 = (double)i
//Constructor & Destructor
Rational::Rational( int numerator, int denominator): numerator(numerator), denominator(denominator)
{}

Rational::~Rational() {
    //cout << "Rational object destroyed.\n";
}
//Getters and Setters
int Rational::getNum() const {
    return numerator;
}
int Rational::getDem() const {
    return denominator;
}
void Rational::setNum(int a) {
    numerator = a;
}
void Rational::setDem(int b) {
    denominator = b;
}
//Math
void Rational::GCD(Rational g1) {
    
    int temp = 1, a= g1.getNum() , b = g1.getDem();
    
    if(a < 0) {
        a*= 1;
    }
    else if(b < 0) {
        b*= -1;
    }
    
    while(b > 0)
    {
        temp = b;
        b = a % temp;
        a = temp;
    }
    
    cout << "The fraction (" << getNum() << " / " << getDem() << ") can be simplified to (" << g1.getNum() / temp << " / " << g1.getDem() / temp << ") using the GCD " << temp <<  "." << endl;
}

void Rational::Add(Rational a1) {

    int cd = getDem() * a1.getDem();
    int Num1 = getNum() * a1.getDem();
    int Num2 = a1.getNum() * getDem();
    
    cout << "SUM: (" << getNum() << " / " << getDem() << ") + (" << a1.getNum() << " / " << a1.getDem() << ") = (" << Num1 + Num2 << " / " << cd << ")"<< endl;
    
}

void Rational::Subtract(Rational s1) {
    
    int cds = getDem()* s1.getDem();
    int Num3 = getNum() * s1.getDem();
    int Num4 = s1.getNum() * getDem();
    
    cout << "SUBTRACTION: (" << getNum() << " / " << getDem() << ") - (" << s1.getNum() << " / " << s1.getDem() << ") = (" << Num3 - Num4 << " / " << cds << ")"<< endl;
}

void Rational::Multiply(Rational m1) {
    
    int cdr = getDem()* m1.getDem();
    int Num5 = getNum() * m1.getNum();
    
    cout << "MULTIPLICATION: (" << getNum() << " / " << getDem() << ") * (" << m1.getNum() << " / " << m1.getDem() << ") = (" << Num5  << " / " << cdr << ")"<< endl;
}

void Rational::Divide(Rational d1) {
    int cdd = getDem()* d1.getNum();
    int Num6 = getNum() * d1.getDem();
    
    cout << "DIVISION: (" << getNum() << " / " << getDem() << ") / (" << d1.getNum() << " / " << d1.getDem() << ") = (" << Num6  << " / " << cdd << ")"<< endl;
}
//Display
void Rational::DisplayFract(Rational f1) const {
    cout <<"DISPLAY FRACTION: " << f1.getNum() << " / " << f1.getDem() << endl;
}
void Rational::DisplayFloat(Rational f2) const {
    
    double q1 = (double)f2.getNum();
    double q2 = (double)f2.getDem();
    
    cout <<"DISPLAY DECIMAL OF FRACTION: " << f2.getNum() << " / " << f2.getDem() <<" = " << q1 / q2 << endl;
}

    //Copy constructor
Rational::Rational( const Rational &aRational) {
        
    setNum( aRational.getNum() );
    setDem( aRational.getDem() );
    //cout << "Copied fraction using the copy constructor." << endl;
}
    

