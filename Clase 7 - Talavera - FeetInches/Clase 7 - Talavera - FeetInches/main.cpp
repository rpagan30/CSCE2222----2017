
// This program demonstrates the << and >> operators,
// overloaded to work with the FeetInches class.
#include <iostream>

using namespace std;

#include "FeetInches.h"

int main() {
    FeetInches N, M, L; // Define two objects.
    
    // Get a distance for the first object.
    cout << "Enter a distance in feet and inches.\n";
    cin >> N;
    
    // Get a distance for the second object.
    cout << "Enter another distance in feet and inches.\n";

    cin >> M;
    
    // Display the values in the objects.
    cout << "The values you entered are:\n";
    cout << N;
    cout <<"and" <<endl;
    cout << M << endl;
    
    return 0;
}
