//
//  Employee.cpp
//  Clase 2 Talavera - Employees
//
//  Created by Rafael Pagan on 3/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Employee.h"


/**
 
Write appropriate mutator functions that store values in these member variables and accessor functions that return the values in these member variables. 
 **/

Employee::Employee( string name, int idNumber, string department, string position ): name(name), idNumber(idNumber), department(department), position(position)
{}

Employee::~Employee() {
    
    cout << "Employee object destroyed." << endl;
}

//Get name
string Employee::getName() const {
    
    return name;
}

//Get ID number
int Employee::getIDNumber() const {
    
    return idNumber;
}

//Get department
string Employee::getDepartment() const {
    
    return department;
}

//Get position
string Employee::getPosition() const {
    
    return position;
}

//Display employee
void Employee::DisplayEmployee() const {
    cout <<"\n";
    cout <<"----------------------------"<< endl;
    cout << "Name: " << getName() << endl;
    cout << "ID Number: " << getIDNumber() << endl;
    cout << "Department: " << getDepartment() << endl;
    cout << "Position: " << getPosition() << endl;
    cout <<"----------------------------";
    cout <<"\n";
}

//Set name
void Employee::setName(string a) {
    
    name = a;
}

//Set ID number
void Employee::setIDNumber(int b) {
    
    idNumber = b;
}

//Set department
void Employee::setDepartment(string c) {
    
    department = c;
}

//Set position
void Employee::setPosition(string d) {
    
    position = d;
}

//Copy constructor
Employee::Employee( const Employee &aEmployee) {
    
    setName( aEmployee.getName() );
    setIDNumber( aEmployee.getIDNumber() );
    setDepartment( aEmployee.getDepartment() );
    setPosition( aEmployee.getPosition() );
}

