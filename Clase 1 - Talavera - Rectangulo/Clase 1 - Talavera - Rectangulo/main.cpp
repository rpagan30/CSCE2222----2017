//	Main de la clase rectángulo.
//  main.cpp
//  Clase 1 Lab
//  Programa para clase que hace rectángulos
//
// Aquí van las instrucciones generales o el "flowchart" del programa para la clase de rectángulo.
//

#include <iostream>


using namespace std ;

#include "Rect.h"



int main()
{
    Rect miPrimerRect;
    
    cout << "Estos son los parámetros de rectángulo inicial: " << endl ;
    
    
    miPrimerRect.getDisplay();
    miPrimerRect.setAltura(2);
    miPrimerRect.setBase(4);
    miPrimerRect.setArea();
    
    
    
    cout << "Estos son los parámetros de segundo rectángulo : " << endl ;
    
    miPrimerRect.getDisplay();
    
    cout << "Fin." << endl;
    
    /////Overloading Operators
    
    Rect R1, R2;
    R2.setBase(2);
    R2.setAltura(4);
    
    cout << "entre el Alto y la Base del rectángulo #1: "<<endl;
    cin >> R1;
    cout << "entre el Alto y la Base del rectángulo #2: "<<endl;
    cin >> R2;
    
    
    
    
    return 0;
    
    //objetos son destruidos
}
