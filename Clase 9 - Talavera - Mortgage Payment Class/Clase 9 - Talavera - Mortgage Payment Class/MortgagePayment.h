//
//  MortgagePayment.hpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef MortgagePayment_hpp
#define MortgagePayment_hpp

#include <stdio.h>


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
    
    double Payment; //monthly payment
    double Loan;    //dollar amount of the loan Rate = the annual interest rate
    double Years;   //number of years of the loan
    
public:
    
    
    
};

#endif /* MortgagePayment_hpp */
