//
//  main.cpp
//  Clase 3 - Talavera - Test Scores #1
//
//  Created by Rafael Pagan on 3/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//


// Test Scores #1
//1)Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores.
//2)SORT - Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
//3) AVERAGE - Another function should be called that calculates the average score.
//4) DISPLAY - The program should display the sorted list of scores and averages with appropriate headings.
//5) POINTERS - Use pointer notation rather than array notation whenever possible.
//Input Validation: Do not accept negative numbers for test scores.

#include <iostream>

using namespace std;

double *setptr(int no_of_tests) {
    
    double *arr = nullptr;
    
    arr = new double[no_of_tests];
    
    cout << "Enter the grade for" << endl;
    
    for(int count = 0; count < no_of_tests; count++)
    {
        cout << "Test #" << (count + 1) << ": " << endl;
        cin >> *(arr + count);
        
    }
    
    return arr;
}

double sort(double *array, int size) {
    
    double Max = 0;
    
   /*
    cout << "BEFORE SORTn\"" ;
    for( int i = 0; i < size; i++)
    {
        cout << i << "Array " << i + 1 << endl;
    }
   */
    
    for( int i = 0; i < size - 1; i++ )
    {
        for(int j = 0; j < size - 1; j++)
        {
            if( array[j] > array[j + 1])
            {
                Max = array[j];
                array[j] = array[j + 1];
                array[j + 1]=  Max;
            }
        }
    }
    
    return *array;
}

double getTotal(double total, double *tests, int no_of_tests) {
    
    for( int i = 0; i < no_of_tests - 1; i++)// Drop lowest score
    {
        total += *(tests + i);
    }
    
    return total;
}

double getAverage(int no_of_tests, double total) {
    double average;
    
    average = total / no_of_tests - 1;// Drop lowest score
    
    return average;
}

void display(double average, double *tests, int no_of_tests) {
    cout << "\n--Display Tests--" << endl;
    cout << "-For " << no_of_tests << " tests-" << endl;
    for( int i = 0; i < no_of_tests; i++) {
        cout <<  i + 1 << ") " << *(tests + i) << " ";
    }
    
    cout <<"\nAverage: " << average << "\n\n";
}
int main() {
    
    
    double *tests = nullptr, total = 0.0, average;
    
    int no_of_tests = 0;
    
    cout << "How many days of test do you wish to consider? " << endl;
    cin >> no_of_tests;
    
    tests = setptr(no_of_tests);
    *tests = sort(tests, no_of_tests);
    total = getTotal(total, tests, no_of_tests);
    average = getAverage(no_of_tests, total);
    display(average, tests, no_of_tests);
    
    delete [] tests;
    tests = nullptr;

    return 0;
}
