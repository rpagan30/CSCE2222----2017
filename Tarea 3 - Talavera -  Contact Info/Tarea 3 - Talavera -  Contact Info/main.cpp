//
//  main.cpp
//  Tarea 3 - Talavera -  Contact Info
//
//  Created by Rafael Pagan on 3/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Info.h"
using namespace std;

int main() {
    
    ContactInfo C1;
    string Name = "";
    string Phone ="";
    
    
    cout << "Please enter your name and phone number" << endl;
    cout << "Name: ";
    cin >> C1.setName(Name);
    cout << "Phone Number: ";
    cin >> C1.setPhone(Phone);
    cout << endl;
    
    cout << C1.Display()<<endl;
    
    
    return 0;
}
