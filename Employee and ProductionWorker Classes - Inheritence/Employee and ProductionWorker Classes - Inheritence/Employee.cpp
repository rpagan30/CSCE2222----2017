//
//  Employee.cpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Employee.h"
Employee::Employee() {
    name = "";
    number = "";
    hire_date = "";
}

Employee::Employee(string emp_name, string emp_number, string emp_hire_date) {
    this->name = emp_name;
    this->number = emp_number;
    this->hire_date = emp_hire_date;
}


Employee::~Employee() {}

string Employee::getName() const {
    return this->name;
}
string Employee::getNum() const {
    return this->number;
}
string Employee::getHireDate() const {
    return this->hire_date;
}

void Employee::setName(string N) {
    this->name = N;
}
void Employee::setNum(string EN) {
    this->number = EN;
}
void Employee::setHireDate(string HD) {
    this->hire_date = HD;
}
