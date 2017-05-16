//
//  MortgagePayment.cpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 4/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "MortgagePayment.h"
#include <cmath>
#include <iostream>

using namespace std;

//Constructor & Desctructor
MortgagePayment::MortgagePayment( double payment, double loan, double years, double rate, double term) : payment(payment), loan(loan), years(years), rate(rate), term(term) {}

MortgagePayment::MortgagePayment() {
    this->payment=1;
    this->loan=1;
    this->years=1;
}
MortgagePayment::~MortgagePayment() {}

//Accessors
double MortgagePayment::getPayment() const {
    return payment;
}
double MortgagePayment::getLoan() const {
    return loan;
}
double MortgagePayment::getYears() const {
    return years;
}

double MortgagePayment::getRate() const {
    return rate;
}

double MortgagePayment::getTerm() const {
    return term;
}

//Mutators
void MortgagePayment::setPayment() {
    payment = (loan * (rate/12) * term) / (term - 1);
}
void MortgagePayment::setLoan() {
    
    cout << "Enter the loan amount in dollars:" << endl;
    cin >> this->loan;
}
void MortgagePayment::setYears() {
    cout << "Enter of years of the loan:" << endl;
    cin >> this->years;
}
void MortgagePayment::setRate() {
    cout << "Enter annual interest rate of the loan:" << endl;
    cin >> this->rate;
}
void MortgagePayment::setTerm() {
    term = pow((1 + (rate/12)), (12 * years));
}

void MortgagePayment::displayPayment() {
    
    this->setTerm();
    this->setPayment();
    cout << "--Loan Summary--" << endl;
    cout << "Loan amount: $" << this->loan << endl;
    cout << "Years of the loan: " << this->years << endl;
    cout << "Annual interest rate: " << this->rate << endl;
    cout << "Term: " << this->term << endl;
    cout << "Total Monthly Payment: $" << this->payment << endl;
}
