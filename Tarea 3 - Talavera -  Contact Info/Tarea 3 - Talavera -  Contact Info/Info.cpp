//
//  Info.cpp
//  Tarea 3 - Talavera -  Contact Info
//
//  Created by Rafael Pagan on 3/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>
#include "Info.h"

ContactInfo::ContactInfo(char *n, char *p){ // Allocate just enough memory for the name and phone number.
    name = new char[strlen(n) + 1];
    phone = new char[strlen(p) + 1];
    
    // Copy the name and phone number to the allocated memory.
    strcpy(name, n);
    strcpy(phone, p);
}

ContactInfo::~ContactInfo() {
    delete [] name;
    delete [] phone;
}


char* ContactInfo::getName() const {
    return name;
}

char* ContactInfo::getPhone() const {
    return phone;
}

void ContactInfo::setName(std::string n) const {
    n = *name;
}

void ContactInfo::setPhone(std::string p) const {
    p = *phone;
}

void ContactInfo::Display() const {
    std::cout << "\n--Contact Info--";
    std::cout << "Name: " << getName() << "\n";
    std::cout << "Phone: " << getPhone() << "\n";
}

ContactInfo::ContactInfo( const ContactInfo &aContactInfo) {
    setName( aContactInfo.getName() );
    setPhone( aContactInfo.getPhone() );
    std::cout << "Copied rectangle using the copy constructor.\n";
}
