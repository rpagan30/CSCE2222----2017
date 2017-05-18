//
//  Info.hpp
//  Tarea 3 - Talavera -  Contact Info
//
//  Created by Rafael Pagan on 3/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef INFO_H_
#define INFO_H_

#include <stdio.h>
#include <string> // Needed for strlen and strcpy
#include <iostream>
using namespace std;

// ContactInfo class declaration.
class ContactInfo {
private:
    
    char *name; // The name
    char *phone; // The phone number
    
public:
    
    // Constructor
    ContactInfo();
    ContactInfo(char *n, char *p);
    
    // Destructor
    ~ContactInfo();
    // Mutators
    char *getName() const;
    char *getPhone() const;
    void setName(std::string n) const;
    void setPhone(std::string p) const;
    void Display() const;
    // Copy Constructor
    
    ContactInfo(const ContactInfo &aContactInfo);
    
    //ContactInfo &operator = (const ContactInfo &);
    friend ostream &operator<<(ostream &, const ContactInfo &);
    friend istream &operator>>(istream &, ContactInfo &);
};

#endif /* Info_h */
