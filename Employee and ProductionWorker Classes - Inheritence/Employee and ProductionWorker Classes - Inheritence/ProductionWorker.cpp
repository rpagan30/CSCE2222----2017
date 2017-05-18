//
//  ProductionWorker.cpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "ProductionWorker.h"

//Constructor & Destructor
//Default Constructor
ProductionWorker::ProductionWorker () : Employee () {
    shift = 0;
    hourly_pay_rate = 0;
}

//Constructor
ProductionWorker::ProductionWorker(string PW_name, string PW_employee_number, string PW_hire_date, int PW_shift, double PW_hourly_pay_rate)
:
Employee( PW_name, PW_employee_number, PW_hire_date) {
    shift = PW_shift;
    hourly_pay_rate = PW_hourly_pay_rate;
}


ProductionWorker::~ProductionWorker() {}

int ProductionWorker::getShift() const {
    return this->shift;
}

double ProductionWorker::getPayRate() const {
    return this->hourly_pay_rate;
}
void ProductionWorker::setShift(int S) {
    this->shift = S;
}
void ProductionWorker::setPayRate(double PR) {
    this->hourly_pay_rate = PR;
}
