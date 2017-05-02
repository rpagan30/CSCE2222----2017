//
//  Instructor.hpp
//  Clase 9 - Aggregation - Course, Textbook, Instructor
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Instructor {
    
private:
    string lastName;
    string firstName;
    string officeNumber;
    
public:
    // The default constructor stores empty strings // in the string objects.
    Instructor() {
        
        set("", "", "");
    }
    
    // Constructor
    Instructor(string lname, string fname, string office) {
        
        set(lname, fname, office);
    }
    
    // set function
    void set(string lname, string fname, string office);
    
    // print function
    void print() const ;
    
};

#endif /* Instructor_h */
