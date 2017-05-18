//
//  ShiftSupervisor.cpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "ShiftSupervisor.h"


//Default Constructor
ShiftSupervisor::ShiftSupervisor () : ProductionWorker() {
    annual_salary = 70000;
    bonus = 3000;
}

//Constructor
ShiftSupervisor::ShiftSupervisor(string SSV_name, string SSV_employee_number, string SSV_hire_date, int SSV_shift, double SSV_hourly_pay_rate, double SSV_annual_salary, double SSV_bonus)
:
ProductionWorker ( SSV_name, SSV_employee_number, SSV_hire_date, SSV_shift, SSV_hourly_pay_rate) {
    annual_salary = SSV_annual_salary;
    bonus = SSV_bonus;
}
