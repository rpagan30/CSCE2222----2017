//
//  Course.cpp
//  Clase 9 - Aggregation - Course, Textbook, Instructor
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Course.h"

// print function
void Course::print() const {
    
    cout << "Course name: " << courseName << endl << endl; cout << "Instructor Information:\n";
    instructor.print();
    
    cout << "\nTextbook Information:\n";
    textbook.print();
    
    cout << endl;
}
