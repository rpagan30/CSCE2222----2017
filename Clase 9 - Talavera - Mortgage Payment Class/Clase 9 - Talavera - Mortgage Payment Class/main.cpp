//
//  main.cpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "LoanList.h"
using namespace std;

/**
 
 15. Mortgage Payment - p.807, Gaddis
 
 Design a class that will determine the monthly payment on a home mortgage. The monthly payment with 
 interest compounded monthly can be calculated as follows:
 
 Payment = (Loan * Rate * Term) / (Term - 1)
 
 where
 
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

int main() {
    LoanList LL;
    Loan L, M, N;
    //ContactInfo C("Rafael", "787-600-3684"), D;
    ContactInfo C("1", "2"), D;
  
    cout << "Contact Loan List" << endl;
    
    cin >> L;
    cout << L;
    LL += L;
    cin >> M;
    cout << M;
    LL += M;
    cin >> N;
    LL += N;
    
    cout << LL << endl;
    
    LL -= N;
    
    cout << "New Loan List: " << endl;
    
    cout << LL << endl;
    
    
    /*
    cout << "Contact Info Debug"<< endl;
    
    cout << "Contact C: " << C << endl;
    
    cout << "C.getName(): " << C.getName()<< endl;
    
    D = C;
    
    cout << "Contact D: " << D << endl;

    
    cout << "End." << endl;

    
    cout << "C.getName(): " << C.getName()<< endl;
     */

    return 0;
}
