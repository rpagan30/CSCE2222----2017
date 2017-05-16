//
//  main.cpp
//  Employee and ProductionWorker Classes - Inheritence
//
//  Created by Rafael Pagan on 5/9/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

int main() {

    ProductionWorker PW("Bob", "123134" , "5/5/2016", 1 , 40.5 );
    
    cout << "Production Worker Info" << endl;
    cout << "Name: " << PW.getName() << endl;
    cout << "ID Number: " << PW.getNum() << endl;
    cout << "Hire date: " << PW.getHireDate() << endl;
    cout << "Shift: " << PW.getShift() << endl;
    cout << "Hourly pay rate: $" << PW.getPayRate() << endl;
    
    
    ShiftSupervisor SSV("Rob", "123334" , "5/6/2016", 2 , 57.5, 100000, 6000);
    
    cout << "\nShift Supervisor Info" << endl;
    cout << "Name: " << SSV.getName() << endl;
    cout << "ID Number: " << SSV.getNum() << endl;
    cout << "Hire date: " << SSV.getHireDate() << endl;
    cout << "Shift: " << SSV.getShift() << endl;
    cout << "Hourly pay rate: $" << SSV.getPayRate() << endl;
    
    return 0;
}
