//
//  Rational.hpp
//  Tarea 2 - Talavera - Rational Class
//
//  Created by Rafael Pagan on 3/14/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

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
    int getDem() const;
    void setNum(int a);
    void setDem(int b);
    
    //Math
    void Add(Rational a1);
    void Subtract(Rational s1);
    void Multiply(Rational m1);
    void Divide(Rational d1);
    void GCD(Rational g1);

    //Display
    void DisplayFract(Rational f1) const;
    void DisplayFloat(Rational f2) const;
    //Copy Constructor
    Rational(const Rational &aRational);
};


#endif /* Rational_hpp */
