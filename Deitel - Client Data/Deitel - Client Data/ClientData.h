//
//  ClientData.hpp
//  Deitel - Client Data
//
//  Created by Rafael Pagan on 5/22/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef ClientData_h
#define ClientData_h

#include <string>
using namespace std;

class ClientData {
public:
    ClientData(int = 0, string = "", string = "", double = 0.0);
    
    void setAccountNumber(int);
    int getAccountNumber() const;
    
    void setLastName(string);
    string getLastName() const;
    
    void setFirstName(string);
    string getFirstName() const;
    
    void setBalance(double);
    double getBalance() const;
private:
    int accountNumber;
    char lastName[15];
    char firstName[10];
    double balance;
};

#endif /* ClientData_h */
