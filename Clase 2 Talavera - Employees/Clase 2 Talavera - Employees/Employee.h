//
//  Employee.hpp
//  Clase 2 Talavera - Employees
//
//  Created by Rafael Pagan on 3/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

/**
 Employee Class
 Write a class named Employee that has the following member variables:
 • name. A string that holds the employee’s name.
 • idNumber. An int variable that holds the employee’s ID number.
 • department. A string that holds the name of the department where the employee
 works.
 • position. A string that holds the employee’s job title.
 
 The class should have the following constructors:
 
 • A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name, employee’s ID number, department, and position.
 
 • A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name and ID number. The department and position fields should be assigned an empty string ("").
 
 • A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0 to the idNumber member variable.
 **/

class Employee {
 
private:
    
    string name;
    int idNumber;
    string department;
    string position;
    
public:
    
    Employee( string name ="", int idNumber = 0, string department = "", string position = "" );
    
    ~Employee();
    
    //gets
    string getName() const;
    int getIDNumber() const;
    string getDepartment() const;
    string getPosition() const;
    void DisplayEmployee() const;
    
    //sets
    void setName(string a);
    void setIDNumber(int b);
    void setDepartment(string c);
    void setPosition(string d);
    
    //copy constructor
    Employee(const Employee &aEmployee);
    
    
    
};

#endif /* Employee_hpp */
