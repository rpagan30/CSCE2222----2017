//
//  Loan.hpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 5/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef LOAN_H
#define LOAN_H

#include <stdio.h>
#include <string>
#include "MortgagePayment.h"
#include "ContactInfo.h"

using namespace std;

class Loan {
    
private:
    string loan_no;
    MortgagePayment finances;
    ContactInfo contact;
    
public:
    //Constructors & Destructor
    
    Loan() ;
    Loan(string loan_no, MortgagePayment finances, ContactInfo contact);
    ~Loan();
    //Accessors
    string getLoanNo() const;
    MortgagePayment getFinances() const;
    ContactInfo getContact() const;
    
    //Mutators
    void setLoanNo();
    void setFinances();
    void setContact();
    
    //Display info
    void displayLoan() const;
    
    //Overloaded operators
    Loan &operator = (const Loan &);
    friend ostream &operator<<(ostream &, const Loan &);
    friend istream &operator>>(istream &, Loan &);
};

#endif /* Loan_h */
