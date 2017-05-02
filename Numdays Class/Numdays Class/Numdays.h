//
//  Numdays.hpp
//  Numdays Class
//
//  Created by Rafael Pagan on 4/24/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef NUMDAYS_H_
#define NUMDAYS_H_

#include <iostream>

using namespace std;

class Numdays {
    
private:
    float hours;
    float numdays;
    
public:
    //Constructor and Destructor
    Numdays(float hours = 8, float numdays = 1);
    ~Numdays();
    
    //Accesors and Mutators
    void setHours(float h);
    void setNumdays(float n);
    float getHours() const;
    float getNumdays() const;
    
    //Copy Constructor
    Numdays(const Numdays &N);
    
    //Logical Operators
    Numdays &operator = (const Numdays &);
    bool operator > (const Numdays &tempNum);
    bool operator < (const Numdays &tempNum);
    
    //Assign Operator
    bool operator ==(const Numdays &);
    
    //Math Operators
    Numdays operator + (const Numdays &tempNum);// addition operator
    Numdays operator - (const Numdays &tempNum);// subtraction operator
    Numdays operator * (const Numdays &tempNum);// multiplication operator
    Numdays operator / (const Numdays &tempNum);// division operator
    
    // Unary ++ and -- Operators
    //Prefix
    Numdays operator ++ ();
    Numdays operator -- ();
    //Postfix
    Numdays operator ++ (int);
    Numdays operator -- (int);
    
    //Stream Operators
    friend ostream &operator << (ostream &, const Numdays &tempNum);
    friend istream &operator >> (std::istream &, Numdays &);
    
};

#endif /* Numdays_h_ */
