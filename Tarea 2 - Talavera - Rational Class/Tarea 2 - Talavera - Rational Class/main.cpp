//
//  main.cpp
//  Tarea 2 - Talavera - Rational Class
//
//  Created by Rafael Pagan on 3/14/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Rational.h"

int GDC(int a, int b);

using namespace std ;

int main() {

    Rational F1, F2;
    
    F1.setNum(1);
    F1.setDem(2);
    
    F2.setNum(1);
    F2.setDem(4);
    
    //Math
    F1.Add(F2);
    F1.Subtract(F2);
    F1.Multiply(F2);
    F1.Divide(F2);
    F1.GCD(F2);
    //Display
    F1.DisplayFract(F1);
    F1.DisplayFloat(F1);
    //Copy Constructor
    Rational F3(F2);
    
    cout << "\n--COPIED FRACTION--" << endl;
    F3.DisplayFract(F2);

    return 0;
}


