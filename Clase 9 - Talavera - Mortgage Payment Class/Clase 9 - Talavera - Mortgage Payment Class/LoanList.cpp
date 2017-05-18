//
//  LoanList.cpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 5/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>
#include "LoanList.h"
using namespace std;


LoanList::LoanList() {
    this->size = 0;
}


LoanList::LoanList(const LoanList &temp) : size(temp.size) {
    for(int i = 0; i < getSize(); i++){
        *(ln + i) = *(temp.ln + i);
    }
}

LoanList::~LoanList() {}

bool LoanList::isFull() const {
    return(this->size == MAX_LN);
}

bool LoanList::isEmpty() const {
    return(this->size == 0);
}

int LoanList::getSize() const {
    return (this->size);
}

int LoanList::subscriptLoan(const Loan &tempLoan) const{
    int subscript = -1;
    for(int i = 0; i < this->getSize(); i++) {
        if(ln[i].getLoanNo() == tempLoan.getLoanNo()) {
            subscript = i;
            i = size;
        }
    }
    return subscript;
}

void LoanList::operator+=(const Loan &temp) {
    if(!isFull()) {
        cout << "Adding loan to list." << endl;
        *(ln + size) = temp;
        this->size++;
    }
    else{
        cout << "Array is full or repeated loan number." << endl;
    }
}

void LoanList::operator-=(const Loan &temp){
    int subscript;
    if(!isEmpty()){
        cout << "Removing loan from list." << endl;
        subscript = subscriptLoan(temp);
        for(int i = subscript; i < getSize() - 1; i++) {
            *(ln + i) = *(ln + (i + 1));
        }
        size--;
    }
    else {
        cout << "Invalid loan number" << endl;
    }
}

ostream &operator<<(ostream &output, const LoanList &tempLoanList){
    int i;
    for(i = 0; i < tempLoanList.getSize(); i++) {
        cout << "Loan[" << i + 1 << "]: " << endl;
        output<<tempLoanList. ln[i];
    }
    cout << endl;
    return output;
}
