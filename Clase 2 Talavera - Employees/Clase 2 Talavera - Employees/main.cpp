//
//  main.cpp
//  Clase 2 Talavera - Employees
//
//  Created by Rafael Pagan on 3/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    /**
     
     Once you have written the class, write a separate program that creates three Employee objects to hold the following data.
     
     Name >> ID Number >> Department >> Position
     
     Susan Meyers >> 47899 >> Accounting >> Vice President
     
     Mark Jones >> 39119 >> IT >> Programmer
     
     Joy Rogers >> 81774 >> Manufacturing >> Engineer
     
     The program should store this data in the three objects and then display the data for each employee on the screen.
     **/
    
    //Añadir pointers dinámico para los strings. Sección 9.6.
    
    Employee E1, E2, E3;
    int num_of_emp = 3;
    string *Name = nullptr ;
    string *Department = nullptr;
    string *Position = nullptr;
    
    Name = new string[num_of_emp];
    Department = new string[num_of_emp];
    Position = new string[num_of_emp];
    
    
    E1.setName("Susan Meyers");
    E1.setIDNumber(39119);
    E1.setDepartment("Accounting");
    E1.setPosition("Vice President");
    
    E2.setName("Mark Jones");
    E2.setIDNumber(47899);
    E2.setDepartment("IT");
    E2.setPosition("Programmer");
    
    E3.setName("Joy Rogers");
    E3.setIDNumber(81774);
    E3.setDepartment("Manufacturing");
    E3.setPosition("Engineer");
    
    E1.DisplayEmployee();
    E2.DisplayEmployee();
    E3.DisplayEmployee();
    
    delete [] Name;
    delete [] Department;
    delete [] Position;
    
    Name = nullptr;
    Department = nullptr;
    Position = nullptr;
    
    
    
    
    
    return 0;
}
