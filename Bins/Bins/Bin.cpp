//
//  Bin.cpp
//  Bins
//
//  Created by Rafael Pagan on 5/18/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Bin.h"
#include <iostream>
#include <cmath>
using namespace std;

Bin::Bin() {
    this->description = "";
    this->no_parts = 0;
}
Bin::Bin(char* description, int no_parts) {
    this->description = description;
    this->no_parts = no_parts;
}
Bin::~Bin() {}
char* Bin::getDescription() const {
    return this->description;
}
int Bin::getNoParts() const {
    return this->no_parts;
}
void Bin::setDescription(char* d) {
    this->description = d;
}
void Bin::setNoParts(int np) {
    this->no_parts = np;
}
int Bin::validation(int value) {
    if(value < 0) {
        cout << "ERROR: Value must be positive." << endl;
        value = abs(value);
        cout << "Using " << value << " instead." << endl;
    }
    return value;
}
int Bin::binSizeCheck(int value) {
    while(value > 30 || value < 0) {
        if(value > 30) {
            cout << "ERROR: Bin full. Each bin may only fit 30 parts." << endl << endl;
            cout << "Currently there are " << this-> no_parts << " in this bin." << endl;
            cout << "Please enter a number that is between " << 30 - this->no_parts << " and 0." << endl;
            cin >> value;
        }
        else if(value < 0) {
            cout << "ERROR: Bin size must be a positive number." << endl << endl;
            cout << "Currently there are " << this-> no_parts << " in this bin." << endl;
            cout << "Please enter a number that is between " << 30 - this->no_parts << " and 0." << endl;
            cin >> value;
        }
    }
    return value;
}
void Bin::addParts(int add) {
    add = validation(add);
    int sum = binSizeCheck(this->getNoParts() + add);
    this->setNoParts(sum);
    cout << add << " " << this->description << " (s) added." << endl << endl;
}
void Bin::removeParts(int remove) {
    remove = validation(remove);
    int sum = binSizeCheck(this->getNoParts() - remove);
    this->setNoParts(sum);
    cout << remove << " " << description << " (s) removed." << endl << endl;
}
