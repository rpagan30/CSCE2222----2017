//
//  main.cpp
//  Clase 1 Talavera
//
//  Created by Rafael Pagan on 3/7/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Circulo.h"

using namespace std;

void intro() //Intro Function
{
    
    cout << "--- PROGRAM START ---" << endl;
    
    for( int i =1; i<25 ; i++)
    {
        cout << "." ;
    }
    
    cout << "\nThis program creates a circle object and asks the user for its values." << endl;
    
    for( int i =1; i<25 ; i++)
    {
        cout << "." ;
    }
    
}

double validate() { //Only takes values that are greater than zero for validation.
    
    double v = 0;
    
    while( v <= 0 ) {
        cin >> v ;
        
        if( v > 0 ) {
            cout << "Value accepted." << endl;
        }
        else {
            cout << "ERROR: Base value must be equal or greater than 0. Enter a new value." <<  endl;
        }
    }
    
    
    return v;
}

void prompt() { //Displays instructions for the user.
    cout << "INSTRUCTIONS:" << "\nPlease set positive values for the new circle. First enter the value for the CenterX and press return. Next enter the value for the CenterY and press return. Similarly, then set the value for the Radius and then return." << endl;
}


int main() {
    
    //Main Variables
    Circ C1;
    
    //Main Instructions
    intro();
    C1.DisplayCirc();
    prompt();
    C1.setCirc(validate(), validate(), validate());
    C1.DisplayCirc();
    //Copy Constructor
    Circ C2(C1);
    C2.DisplayCirc();
    
    
    
    
    cout << "END." << endl;
    return 0;
    
    //Objects are destroyed.
}
