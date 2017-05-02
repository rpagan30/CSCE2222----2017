//
//  Textbook.cpp
//  Clase 9 - Aggregation - Course, Textbook, Instructor
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Textbook.h"

// set function
void TextBook::set(string textTitle, string auth, string pub) {
    
    title = textTitle;
    author = auth;
    publisher = pub;
}

// print function

void TextBook::print() const {
    
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
}
