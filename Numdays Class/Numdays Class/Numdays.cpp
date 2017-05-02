//  Numdays.cpp
//  Numdays Class

#include "Numdays.h"
#include <cmath>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////////////////
//Constructor, Destructor, Accessors and Mutators///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

//Constructor and Destructor
Numdays::Numdays( float hours, float numdays): hours(hours), numdays(numdays)
{}

Numdays::~Numdays() {
    //cout <<"Object has been destroyed." << endl;
}

//Accesors and Mutators
void Numdays::setHours(float h) {
    this->hours = h;
    this->numdays = this->hours/8;
}
void Numdays::setNumdays(float d) {
    this->numdays = d;
    this->hours = this->numdays * 8;
}

float Numdays::getHours() const{
    return this->hours;
}

float Numdays::getNumdays() const {
    return this->numdays;
}

//Copy Constructor
Numdays::Numdays (const Numdays &n) {
    setNumdays(n.getNumdays());
}

/////////////////////////////////////////////////////////////////////////////////////////////
//Overloaded Operators///////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

//Logical Operators
bool Numdays::operator==(const Numdays &tempNum) {
    bool flag = false;
    if(tempNum.getNumdays() == this->getNumdays()) {
        flag = true;
    }
    return flag;
}

bool Numdays::operator>(const Numdays &tempNum) {
    bool flag = false;
    if(tempNum.getNumdays() > this->getNumdays()) {
        flag = true;
    }
    return flag;
}

bool Numdays::operator<(const Numdays &tempNum) {
    bool flag = false;
    if(tempNum.getNumdays() < this->getNumdays()) {
        flag = true;
    }
    return flag;
}

//Assign Operator
Numdays & Numdays::operator=(const Numdays &tempNum) {
    this->numdays = tempNum.getNumdays();
    this->hours = tempNum.getHours();
    return *this;
}

//Math Operators
Numdays Numdays::operator + (const Numdays &tempNum) {
    float temp_hours = this->getHours() + tempNum.getHours();
    float temp_days = this->getNumdays() + tempNum.getNumdays();
    return Numdays (temp_hours, temp_days);
}

Numdays Numdays::operator - (const Numdays &tempNum) {
    float temp_hours = abs(this->getHours() - tempNum.getHours());
    float temp_days = abs(this->getNumdays() - tempNum.getNumdays());
    return Numdays (temp_hours, temp_days);
}

Numdays Numdays::operator * (const Numdays &tempNum) {
    float temp_hours = this->getHours() * tempNum.getHours();
    float temp_days = this->getNumdays() * tempNum.getNumdays();
    return Numdays (temp_hours, temp_days);
}

Numdays Numdays::operator / (const Numdays &tempNum) {
    float temp_hours = this->getHours() / tempNum.getHours();
    float temp_days = this->getNumdays() / tempNum.getNumdays();
    return Numdays (temp_hours, temp_days);
}

// Unary ++ and -- Operators
//Prefix
Numdays Numdays::operator ++ () {
    ++hours;
    this->setHours(hours);
    return *this;
}

Numdays Numdays::operator -- () {
    --hours;
    this->setHours(hours);
    return *this;
}
//Postfix
Numdays Numdays::operator++(int) {
    Numdays temp(hours, numdays) ;
    hours++;
    this->setHours(hours);
    return temp;
}

Numdays Numdays::operator--(int) {
    Numdays temp(hours, numdays) ;
    hours--;
    this->setHours(hours);
    return temp;
}

//Stream Operators
ostream &operator<<(ostream &output, const Numdays &tempNum) {
    output << "Number of hours: " << tempNum.getHours() << endl;
    output << "Number of days: " << tempNum.getNumdays() << endl;
    return output;
}

istream &operator>>(istream &input, Numdays &tempNum) {
    cout << "Enter the number of hours worked this shift: " << endl;
    input >> tempNum.hours;
    //tempNum.numdays = this->getNumdays();
    input >> tempNum.numdays;
    return input;
}
