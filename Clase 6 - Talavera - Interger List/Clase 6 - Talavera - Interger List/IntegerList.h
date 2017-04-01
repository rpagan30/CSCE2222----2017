//
//  Interger.hpp
//  Clase 6 - Talavera - Interger List
//
//  Created by Rafael Pagan on 3/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef INTEGERLIST_H_
#define INTEGERLIST_H_

#include <stdio.h>
#include <string>


// Specification file for the IntegerList class.
class IntegerList {
    
private:
    
    int *list;
    int numElements;
    bool isValid(int e) const;
    
public:
    IntegerList(int a);
    ~IntegerList();
    void setElement(int b , int c); // Sets an element to a value.
    int getElement(int d) const; // Returns an element.
    void getValues();
    void getValues(std::string fileName);
    int getNumElements();
    void DisplayValues() const;
    int *SortElements(int *arr);
    int getAverage();
  
};

#endif /* Interger_h_ */
