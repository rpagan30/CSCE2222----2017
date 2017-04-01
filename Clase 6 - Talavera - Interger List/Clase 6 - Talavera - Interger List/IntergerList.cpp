//
//  Interger.cpp
//  Clase 6 - Talavera - Interger List
//
//  Created by Rafael Pagan on 3/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
// Implementation file for the IntegerList class.
#include "IntegerList.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

//***********************************************************
//The constructor sets each element to zero. *
//***********************************************************

IntegerList::IntegerList(int size) {
    
    list = new int[size];
    numElements = size;
    
    for (int ndx = 0; ndx < size; ndx++) {
        
        list[ndx] = 0;
    }
}

//***********************************************************
//The destructor releases allocated memory. *
//***********************************************************

IntegerList::~IntegerList() {
    
    delete [] list;
}

//*************************************************************
//isValid member function. *
//This private member function returns true if the argument *
// is a valid subscript, or false otherwise. *
//*************************************************************

bool IntegerList::isValid(int element) const {
    bool status;
    if (element < 0 || element >= numElements) {
        status = false;
        
    }
    else {
        status = true;
    }
    return status;
}

//************************************************************
// setElement member function. * // Stores a value in a specific element of the list. If an *
// invalid subscript is passed, the program aborts. *
//************************************************************
void IntegerList::setElement(int element, int value) {
    
    if (isValid(element)) {
        list[element] = value;
    }
    else {
        cout << "Error: Invalid subscript" << endl;
        
        exit(EXIT_FAILURE);
    }
}
//***********************************************************
// getElement member function. *
// Returns the value stored at the specified element. *
// If an invalid subscript is passed, the program aborts. *
//***********************************************************

int IntegerList::getElement(int element) const {
    
    if (isValid(element)) {
        
        return list[element];
    }
    else {
        cout << "Error: Invalid subscript" << endl;
        exit(EXIT_FAILURE);
    }
}

void IntegerList::getValues() {
    
    int value;
    
    for ( int i = 0; i < getNumElements(); i++) {
        cout << "Dato[" << i << "]=";
        cin >> value;
        setElement(i, value);
    }
}

void IntegerList::getValues(string fileName) {
    
    int temp;
    
    ifstream ifile;
    ifile.open(fileName);
    
    for( int i = 0; i < getNumElements(); i++)
    {
        temp = 0;
        ifile >> temp;
        setElement(i, temp);
    }
    
    ifile.close();
    
}

int IntegerList::getAverage() {
    
    int total = 0;
    for( int i = 0; i < getNumElements(); i++) {
        
        total += list[i];
    }
    
    
    return total / getNumElements();
}
