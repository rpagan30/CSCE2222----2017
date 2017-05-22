//
//  main.cpp
//  Bins
//
//  Created by Rafael Pagan on 5/18/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Bin.h"
using namespace std;

const int MAX_BINS  = 30;

int main() {
    /*14. Inventory Bins
     Write a program that simulates inventory bins in a warehouse. Each bin holds a number of the same type of parts. The program should use a structure that keeps the following data:
     
     -Description of the part kept in the bin
     -Number of parts in the bin
     
     The program should have an array of 10 bins, 
     initialized with the following data:
     ...
     The program should have the following functions:
     
     -AddParts: a function that increases a specific bin’s part count by a specified number.
     -RemoveParts: a function that decreases a specific bin’s part count by a specified number.
     
     When the program runs, it should repeat a loop that performs the following steps: 
     
     The user should see a list of what each bin holds and how many parts are in each bin. The user can choose to either quit the program or select a bin. When a bin is selected, the user can either add parts to it or remove parts from it. The loop then repeats, showing the updated bin data on the screen.
     
     Input Validation: No bin can hold more than 30 parts, so don’t let the user add more than a bin can hold. Also, don’t accept negative values for the number of parts being added or removed.*/
    
    Bin B1("Valve", 10), B2("Bearing", 5), B3("Bushing", 15), B4("Coupling", 21), B5("Flange",7), B6("Gear", 5), B7("Gear Housing",5), B8("Vaccum Gripper", 25), B9("Cable", 18), B10("Rod", 12);
    
    Bin arr[MAX_BINS] = {B1, B2, B3, B4, B5, B6, B7, B8, B9, B10};
    int size = 10;
    bool run = 1;
    int option = 0;
    cout << "INVENTORY BINS" << endl << endl;
    while(run) {
        cout << "Choose a bin that you would like to modify or press '0' to end." << endl;
        cout << "Description | No. of Parts per bin" << endl;
        for(int i = 0; i < size; i++) {
            cout << i + 1 << ". " << arr[i].getDescription() << " | " << arr[i].getNoParts() << endl;
        }
        cin >> option;
        if(option > 0) {
            int option1;
            cout << "Do you wish to add or remove parts?" << endl;
            cout << "1. Add\n" << "2. Remove\n" << endl;
            cin >> option1;
            if(option1 == 1) {
                cout << "How many parts do you wish to add?" << endl;
                int add;
                cin >> add;
                arr[option - 1].addParts(add);
            }
            else if(option1 == 2) {
                cout << "How many parts do you wish to remove?" << endl;
                int remove;
                cin >> remove;
                arr[option - 1].removeParts(remove);
            }
            else {
                cout << "Not a valid option." << endl;
            }
        }
        else {
            run =0;
        }
    }
    
    cout << "END PROGRAM" << endl;
    
    return 0;
}
