
// Implementation file for the FeetInches class
#include <cstdlib> // Needed for abs()
#include "FeetInches.h"

//**************************************************************
// Definition of member function simplify. This function       *
// checks for values in the inches member greater than         *
// twelve or less than zero. If such a value is found,         *
// the bers in feet and inches are adjusted to conform      *
// to a standard feet & inches expression. For example,        *
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and   *
// 5 feet −2 inches would be adjusted to 4 feet 10 inches.     *
//**************************************************************


void FeetInches::simplify() {
    if (inches >= 12) {
        feet += (inches / 12);
        inches = inches % 12;
    }
    else if (inches < 0) {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

//**********************************************
// Overloaded binary + and - operators. *
//**********************************************


FeetInches FeetInches::operator + (const FeetInches &right) {
    FeetInches temp;
    
    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();
    return temp;
}

FeetInches FeetInches::operator - (const FeetInches &right) {
    FeetInches temp;
    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();
    return temp;
}

//**********************************************
// Overloaded >, < and == operators. *
//**********************************************

bool FeetInches::operator>(const FeetInches &tempFeetInches) {
    bool flag = false;
    if( this-> feet > tempFeetInches.feet) {
        flag = true;
    }
    return flag;
}

bool FeetInches::operator<(const FeetInches &tempFeetInches) {
    bool flag = false;
    if( this-> feet < tempFeetInches.feet) {
        flag = true;
    }
    return flag;
}

bool FeetInches::operator==(const FeetInches &tempFeetInches) {
    bool flag = false;
    if( this-> feet == tempFeetInches.feet) {
        flag = true;
    }
    return flag;
}

//Stream Operators
ostream &operator << (ostream &output, const FeetInches &temp) {
    output << "Number of feet: " << temp.getFeet() << endl;
    output << "Number of inches: " << temp.getInches() << endl;
    return output;
}

istream &operator >> (istream &input, FeetInches &temp) {
    cout << "Enter the number of feet: " << endl;
    input >> temp.feet;
    cout << "Enter the number of inches: " << endl;
    input >> temp.inches;
    temp.simplify();
    return input;
}



