//
//  Info.cpp
//  Tarea 3 - Talavera -  Contact Info
//
//  Created by Rafael Pagan on 3/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>
#include "ContactInfo.h"
using namespace std;

ContactInfo::ContactInfo(){ // Allocate just enough memory for the name and phone number.
    name = new char[20];
    phone = new char[20];
    
    // Copy the name and phone number to the allocated memory.
    strcpy(name, "");
    strcpy(phone, "");
}

ContactInfo::ContactInfo(char *n, char *p){ // Allocate just enough memory for the name and phone number.
    name = new char[strlen(n) + 1];
    phone = new char[strlen(p) + 1];
    
    // Copy the name and phone number to the allocated memory.
    strcpy(name, n);
    strcpy(phone, p);
}

//Rect::Rect(float base, float altura, float area): base(base), altura(altura), area(area)
//{}

ContactInfo::~ContactInfo() {
    //cout << "*this = " << *this << endl;
    //delete [] name;
    //delete [] phone;
}


char* ContactInfo::getName() const {
    return name;
}

char* ContactInfo::getPhone() const {
    return phone;
}

void ContactInfo::setName(string n) const {
    n = *name;
}

void ContactInfo::setPhone(string p) const {
    p = *phone;
}

void ContactInfo::Display() const {
    cout << "\n--Contact Info--";
    cout << "Name: " << getName() << "\n";
    cout << "Phone: " << getPhone() << "\n";
}

ContactInfo::ContactInfo( const ContactInfo &aContactInfo) {

    //Allocate memory.
    name = new char[strlen( aContactInfo.getName() ) + 1];
    phone = new char[strlen(aContactInfo.getPhone()) + 1];
    
    //Store values in temporary variables to convert from string to *char.
    string temp_name = aContactInfo.getName();
    string temp_phone = aContactInfo.getPhone();

    // Copy the name and phone number to the allocated memory.
    strcpy(name, temp_name.c_str());
    //cout << "HELLO" << endl;
    //cout << "name: " << name << endl;
    strcpy(phone, temp_phone.c_str());
}

//Overloaded operators

//Assign Operator
/*
ContactInfo & ContactInfo::operator=(const ContactInfo &temp) {
    this->name = temp.getName();
    this->phone = temp.getPhone();
    //Copy Constructor
    ContactInfo *this(temp);
    
    return *this;
}
*/

//Stream Operators
ostream &operator << (ostream &output, const ContactInfo &temp) {
    cout << "\n--Contact Info--";
    cout << "Name: " << endl;
    output << temp.name << endl;
    cout << "Phone: " << endl;
    output << temp.phone << endl;
    return output;
}

istream &operator >> (istream &input, ContactInfo &temp) {
    cout << "Enter contact name." << endl;
    input >> temp.name;
    cout << "Enter contact phone number." << endl;
    input >> temp.phone;
    return input;
}
