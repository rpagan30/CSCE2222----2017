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
    // Define a ContactInfo object with the following data:
   // Name: Kristen Lee Phone Number: 555-2021
     ContactInfo entry("Kristen Lee", "555-2021");
    
    // Display the object's data.
    cout << "Name: " << entry.getName() << endl;
    cout << "Phone Number: " << entry.getPhone() << endl;
    return 0;
    
    return 0;
}
