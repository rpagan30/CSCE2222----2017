//
//  main.cpp
//  Maximum Templates
/*
 Minimum/Maximum Templates
 Write templates for the two functions minimum and maximum. The minimum function should accept two arguments and return the value of the argument that is the lesser of the two. The maximum function should accept two arguments and return the value of the argument that is the greater of the two. Design a simple driver program that demonstrates the templates with various data types.
 */
#include <iostream>
#include <cmath>

template <class T>
T minimum ( T Val1, T Val2) {
    if( Val1 > Val2) {
        return Val2;
    }else {
        return Val1;
    }
}

template <class T>
T maximum ( T Val1, T Val2) {
    if( Val1 < Val2) {
        return Val2;
    }else {
        return Val1;
    }
}

template <class T>
T AbsVal(T Val1) {
    return abs(Val1);
}

using namespace std;

int main() {

    int a = -1, b = 5, e;
    double c = -4.5, d = 3.3, f;

    cout << "Min" << endl;
    e = minimum(a,b);
    cout << e << endl;
    f = minimum(c,d);
    cout << f << endl;
    cout << "Max" << endl;
    e = maximum(a,b);
    cout << e << endl;
    f = maximum(c,d);
    cout << f << endl;
    cout << "AbsVal" << endl;
    e = AbsVal(c);
    cout << e << endl;
    f = AbsVal(a);
    cout << f << endl;
    
    
    return 0;
}
