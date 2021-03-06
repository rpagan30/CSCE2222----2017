//
//  MortgagePayment.hpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef MortgagePayment_h
#define MortgagePayment_h

#include <stdio.h>
#include <iostream>

using namespace std;

/**
 
 15. Mortgage Payment - p.807, Gaddis
 
 Design a class that will determine the monthly payment on a home mortgage. The monthly payment with
 interest compounded monthly can be calculated as follows:
 
 Payment = (Loan * Rate * Term) / (Term - 1)
 
 where
 
 Term = [1 + (Rate/12)]^(12 * Years)
 
 Payment = the monthly payment
 Loan = the dollar amount of the loan Rate = the annual interest rate
 Years = the number of years of the loan
 
 The class should have:
 
 1) Member functions for setting the loan amount, interest rate, and number of years
 of the loan.
 
 2) It should also have member functions for returning the monthly payment amount and the
 total amount paid to the bank at the end of the loan period.
 
 3) Implement the class in a complete program.
 
 Input Validation: Do not accept negative numbers for any of the loan values.
 
 **/

class MortgagePayment {

private:
    
    double payment; //monthly payment
    double loan;    //dollar amount of the loan Rate = the annual interest rate
    double years;   //number of years of the loan
    double rate;
    double term;
    
public:
    //Constructor & Desctructor
    
    MortgagePayment( double payment, double loan, double years, double rate, double term);
    MortgagePayment();
    ~MortgagePayment();
    
    //Accessors
    double getPayment() const;
    double getLoan() const;
    double getYears() const;
    double getRate() const;
    double getTerm() const;
    
    //Mutators
    void setPayment();
    void setLoan();
    void setYears();
    void setRate();
    void setTerm();
    
    //Display
    void displayPayment() const;
    
    //Overloaded Operators
    MortgagePayment &operator = (const MortgagePayment &);
    friend ostream &operator<<(ostream &, const MortgagePayment &);
    friend istream &operator>>(istream &, MortgagePayment &);
};

#endif /* MortgagePayment_h */
