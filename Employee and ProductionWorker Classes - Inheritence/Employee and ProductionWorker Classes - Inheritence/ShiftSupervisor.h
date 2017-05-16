//
//  ShiftSupervisor.hpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef ShiftSupervisor_h
#define ShiftSupervisor_h

#include <stdio.h>
#include "ProductionWorker.h"


/*
 ShiftSupervisor Class
 In a particular factory a shift supervisor is a salaried employee who supervises a shift. In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift meets production goals. Design a ShiftSupervisor class that is derived from the Employee class you created in Programming Challenge 1. The ShiftSupervisor class should have a member variable that holds the annual salary and a member variable that holds the annual production bonus that a shift supervisor has earned. Write one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate the class by writing a program that uses a ShiftSupervisor object.
 */

class ShiftSupervisor : public ProductionWorker {
private:
    double annual_salary;
    double bonus;
    
public:
    //Default Constructor
    ShiftSupervisor () : ProductionWorker() {
        annual_salary = 70000;
        bonus = 3000;
    }
    //Constructor
    ShiftSupervisor(string SSV_name, string SSV_employee_number, string SSV_hire_date, int SSV_shift, double SSV_hourly_pay_rate, double SSV_annual_salary, double SSV_bonus)
    :
    ProductionWorker ( SSV_name, SSV_employee_number, SSV_hire_date, SSV_shift, SSV_hourly_pay_rate) {
        annual_salary = SSV_annual_salary;
        bonus = SSV_bonus;
    }
};
#endif /* ShiftSupervisor_h */
