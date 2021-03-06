
#ifndef FEETINCHES_H 
#define FEETINCHES_H
#include <iostream> 

using namespace std;

class FeetInches; // Forward Declaration
// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

// The FeetInches class holds distances or measurements // expressed in feet and inches.
class FeetInches {
    
private:
    // To hold a number of feet // To hold a number of inches
    int feet;
    int inches;
    void simplify(); // Defined in FeetInches.cpp
    
public:
    // Constructor
    FeetInches(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        simplify();
    }
    
    // Mutator functions
    void setFeet(int f) {
        feet = f;
    }
    void setInches(int i) {
        inches = i;
        simplify();
    }
    
    // Accessor functions
    int getFeet() const {
        return feet;
    }
    int getInches() const {
        return inches;
    }
    
    // Overloaded operator functions
    FeetInches operator + (const FeetInches &);
    FeetInches operator - (const FeetInches &);
    FeetInches operator ++ ();
    FeetInches operator ++ (int);
    bool operator > (const FeetInches &);
    bool operator < (const FeetInches &);
    bool operator == (const FeetInches &);
    
    // Friends
    friend ostream &operator << (ostream &, const FeetInches &temp);
    friend istream &operator >> (std::istream &, FeetInches &);

};

#endif
