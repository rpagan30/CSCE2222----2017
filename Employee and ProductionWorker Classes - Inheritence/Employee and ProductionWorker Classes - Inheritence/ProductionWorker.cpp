//
//  ProductionWorker.cpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "ProductionWorker.h"

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
