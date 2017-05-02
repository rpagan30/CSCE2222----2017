//
//  Instructor.cpp
//  Clase 9 - Aggregation - Course, Textbook, Instructor
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Instructor.h"

void Instructor::set(string lname, string fname, string office) {
    
    lastName = lname;
    firstName = fname;
    officeNumber = office;
}

// print function
void Instructor::print() const {
    
    cout << "Last name: " << lastName << endl;
    cout << "First name: " << firstName << endl;
    cout << "Office number: " << officeNumber << endl;
}
