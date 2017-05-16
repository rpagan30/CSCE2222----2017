//  Rational.h

#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <stdio.h>

class Rational {
private:
    
    int numerator;
    int denominator;
    
public:
    
    //Constructor & Destructor
    Rational( int numerator = 0, int denominator = 1);
    ~Rational();
    
    //Getters and Setters
    int getNum() const;
    int getDen() const;
    void setNum(int a);
    void setDen(int b);
    
    //Math
    void Add(Rational a1);
    void Subtract(Rational s1);
    void Multiply(Rational m1);
    void Divide(Rational d1);
    Rational GCD();
    double CalculateFloat();

    //Display
    void DisplayFract() const;
    void DisplayFloat();
    //Copy Constructor
    Rational(const Rational &aRational);
    
    //Overloaded Operators
    Rational operator + (const Rational &tempRational);// addition operator
    Rational operator - (const Rational &tempRational);// subtraction operator
    Rational operator * (const Rational &tempRational);// multiplication operator
    Rational operator / (const Rational &tempRational);// division operator

    Rational &operator=(const Rational &);//assign operator
    bool operator >(Rational &tempRational);// is greater than operator
    bool operator <(Rational &tempRational);//is less than operator
    bool operator ==(const Rational &);//is equal to operator
    
    friend ostream &operator<<(ostream &, const Rational &tempRational);//cout operator
    friend istream &operator>>(std::istream &, Rational &);//cin operator
};


#endif /* Rational_hpp */
