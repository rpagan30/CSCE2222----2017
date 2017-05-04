//  main.cpp
//  function templates


#include <iostream>

using namespace std;

template <class Q, class T>
void printObject(Q object, T size) {
    for(int i = 0; i < size; i++) {
        cout << object[i] << endl;
    }
}

int main() {
    
    int size = 5;
    int num_array [5]= {0,1,2,3,4};
    char char_array [5] = {'a','b','c','d','e'};
    double double_array [5] = {5.2,6.4,7.6,8.4,9.9};
    
    printObject(num_array,size);
    printObject(char_array,size);
    printObject(double_array,size);
    
    
    return 0;
}
