//
//  Employee.hpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

#include <stdio.h>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string number;
    string hire_date;
public:
    //Default Constructor
    Employee() {
        name = "";
        number = "";
        hire_date = "";
    }
    //Constructor
    Employee(string emp_name, string emp_number, string emp_hire_date) {
        name = emp_name;
        number = emp_number;
        hire_date = emp_hire_date;
    }
    ~Employee();

    string getName() const;
    string getNum() const;
    string getHireDate() const;
    
    void setName(string N);
    void setNum(string EN);
    void getHireDate(string HD);
};

#endif /* Employee_h */
