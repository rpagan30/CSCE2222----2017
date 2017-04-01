//
//  main.cpp
//  Clase 6 - Talavera - Interger List
//
//  Created by Rafael Pagan on 3/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "IntegerList.h"
#include <fstream>

int Average (int total, int no_of_int) {
    
    return (total / no_of_int) ;
}

int Compare (int a, int b) {
    
    if (a > b) {
        return 1;
    }
    else {
        return -1;
    }
}

int *Sort (int no_of_int, int *arr ) {
    
    
    return arr;
}


using namespace std;

int main() {
    
    // This program demonstrates the IntegerList class.
    
    
    const int SIZE = 20;
    IntegerList numbers(SIZE);
    int val, x;
    ifstream ifile;
    ofstream ofile;
    int avg = 0;
    
    // Store 9s in the list and display an asterisk
    // each time a 9 is successfully stored.
    for (x = 0; x < SIZE; x++)
    {
        numbers.setElement(x, 9);
        cout << "* ";
    }
    cout << endl;
    
    // Display the 9s and store them in a file.
    int sum = 0;
    ofile.open("Integer_List.txt");
    
    for (x = 0; x < SIZE; x++)
    {
        val = numbers.getElement(x);
        cout << val << " ";
        ofile << val << " ";
        sum += val;
    }
    cout << endl;
    
    //Get Average
    avg = Average(sum, SIZE);
    
    // Attempt to store a value outside the list's bounds.
    numbers.setElement(50, 9);
    
    // Will this message display?
    cout << "Element 50 successfully set." << endl;
    ofile << "Element 50 succesfully set." << endl;
    ofile << "Average: " << avg << endl;
    
    ofile.close();
    
    
    
    return 0;
}
