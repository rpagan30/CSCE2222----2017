//
//  main.cpp
//  Tarea 2 - Talavera - Rational Class
//
//  Created by Rafael Pagan on 3/14/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>

using namespace std ;

#include "Rational.h"

int main() {

    Rational F1, F2, F4;
    
    F1.setNum(1);
    F1.setDen(2);
    
    F2.setNum(1);
    F2.setDen(4);
    
    //Operaciones usando funciones.
    cout << "WITH FUNCTIONS:" << endl;

    //Math
    F1.Add(F2);
    F1.Subtract(F2);
    F1.Multiply(F2);
    F1.Divide(F2);
    //Display
    F1.DisplayFract();
    F1.DisplayFloat();
    //Copy Constructor
    Rational F3(F2);
    cout << "\n--COPIED FRACTION--" << endl;
    F3.DisplayFract();
    cout << endl;
    //Uso de operadores.
    cout << "WITH OPERATORS:" << endl;
    cout << "SUM: \n" << F1 << "+ " << F2;
    F3 = F1 + F2;
    cout <<"= " << F3 << endl;
    cout << "SUBCTRACTION: \n" << F1 << "- " << F2;
    F3 = F1 - F2;
    cout <<"= " << F3 << endl;
    cout << "MUTIPLICATION: \n" << F1 << "* " << F2;
    F3 = F1 * F2;
    cout <<"= " << F3 << endl;
    cout << "DIVISION:\n" << F1 << "/ " << F2;
    F3 = F1 / F2;
    cout <<"= " << F3 << endl;

    return 0;
}


