//
//  ProductionWorker.hpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef ProductionWorker_h
#define ProductionWorker_h

#include <stdio.h>
#include "Employee.h"
#include <string>

class ProductionWorker : public Employee {
private:
    int shift;
    double hourly_pay_rate;
    
public:
    //Constructor & Destructor
    //Default Constructor
    ProductionWorker () : Employee () {
        shift = 0;
        hourly_pay_rate = 0;
    }

    //Constructor
    ProductionWorker(string PW_name, string PW_employee_number, string PW_hire_date, int PW_shift, double PW_hourly_pay_rate)
    :
    Employee( PW_name, PW_employee_number, PW_hire_date) {
        shift = PW_shift;
        hourly_pay_rate = PW_hourly_pay_rate;
    }
    
    ~ProductionWorker();
    
    //Accessors & Mutators
    int getShift() const;
    double getPayRate() const;
    void setShift(int S);
    void setPayRate(double PR);
    
};
#endif /* ProductionWorker_h */
