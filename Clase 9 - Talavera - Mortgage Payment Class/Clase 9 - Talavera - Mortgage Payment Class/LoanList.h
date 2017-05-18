//
//  LoanList.hpp
//  Clase 9 - Talavera - Mortgage Payment Class
//
//  Created by Rafael Pagan on 5/16/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef LOANLIST_H
#define LOANLIST_H

#include <stdio.h>
#include "Loan.h"

const int MAX_LN = 5;

class LoanList {
private:
    Loan ln[MAX_LN];
    int size;
    friend ostream &operator<<(ostream &, const LoanList &);
    friend istream &operator>>(istream &, LoanList &);
public:
    LoanList();
    LoanList(const LoanList &);
    ~LoanList();
    bool isFull() const;
    bool isEmpty() const;
    int getSize() const;
    int subscriptLoan(const Loan &tempLoan) const;
    
    //Overloaded Operators
    void operator+=(const Loan&); //add loan
    void operator-=(const Loan&); //delete loan
};



#endif /* LoanList_h */
