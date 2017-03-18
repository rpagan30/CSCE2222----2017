//
//  main.cpp
//  member pointers
//
//  Created by Rafael Pagan on 3/15/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>


using namespace std;

int main() {
   
    int x = 1;
    
    
    
    /*
     
    int *ptr;
    *ptr = contenido // si ya ptr esta inicializado
     
    */
    
    //int* ptr2;
    //ptr2 = ptr; //iguala direcciones
    //*ptr2 = *ptr; //iguala valores que hay en la memoria
    //*ptr2 = x; //valor de x asignado al espacio de memoria de ptr2
    //ptr2 = &x; //direccion de x se asigna a ptr2
    
    cout << &x << " reference " << ptr << endl;
    
    cout << *(&x) << " pointer reference" << endl;
    
    return 0;
}
