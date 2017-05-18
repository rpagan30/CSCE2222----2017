//
//  Loan.cpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 5/4/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Loan.h"
#include "ContactInfo.h"
#include "MortgagePayment.h"
#include <iostream>

//Constructors & Destructor

Loan::Loan() : contact() , finances() {
    loan_no = "";
}

Loan::Loan(string loan_no, MortgagePayment finances, ContactInfo contact): loan_no(loan_no), finances(finances), contact(contact) {}

Loan::~Loan() {}
//Accessors
string Loan::getLoanNo() const {
    return loan_no;
}

MortgagePayment Loan::getFinances() const {
    return finances;
}
ContactInfo Loan::getContact() const {
    return contact;
}

//Mutators
void Loan::setLoanNo() {
    cout << "Enter the loan number: " << endl;
    cin >> this->loan_no;
}
void Loan::setFinances() {
    this->finances.setLoan();
    this->finances.setYears();
    this->finances.setRate();
    this->finances.setTerm();
}
void Loan::setContact() {
    cout << "Enter contact info." << endl;
    cout << "Name: " << endl;
    cin >> this->contact.getName();
    cout << "Phone: " << endl;
    cin >> this->contact.getPhone();
}
void Loan::displayLoan() const {
    this->finances.displayPayment();
}

Loan & Loan::operator=(const Loan &temp) {
    this->loan_no = temp.getLoanNo();
    this->finances = temp.getFinances();
    this-> contact = temp.getContact();
    return *this;
}

ostream &operator << (ostream &output, const Loan &temp) {
    output << "Loan Number: " << temp.getLoanNo() << endl;
    temp.displayLoan();
    return output;
}

istream &operator >> (istream &input, Loan &temp) {
    cout << "Please enter the loan number." << endl;
    input >> temp.loan_no;
    cout << "Please enter the contact info." << endl;
    input >> temp.contact;
    cout << "Enter the loan information." << endl;
    input >> temp.finances;
    return input;
}


