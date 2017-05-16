//
//  Automobile.cpp
//  Cars Class - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Automobile.h"

string Automobile::getMake() const {
    return make;
}
int Automobile::getModel() const {
    return model;
}
int Automobile::getMileage() const {
    return mileage;
}
double Automobile::getPrice() const {
    return price;
}
