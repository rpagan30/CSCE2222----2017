//
//  main.cpp
//  Deitel - Packages
//
//  Created by Rafael Pagan on 5/22/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main() {
    
    /*
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
     */
    //Package
    Package P("Bob", "1500 Triangle St", "Lexington", "MA", 9334, "John", "1600 Canal St", "Boston", "MA", 9321, 34.41, 1.52);
    
    cout << "-Package Information-" << endl;
    cout << "Sender Name: " << P.getSenderName() << endl;
    cout << "Sender Address: " << P.getSenderAddress() << endl;
    cout << "Sender City: " << P.getSenderCity() << endl;
    cout << "Sender State: " << P.getSenderState() << endl;
    cout << "Sender ZIP Code: " << P.getSenderZIP() << endl;
    cout << "Recipient Name: " << P.getRecipientName() << endl;
    cout << "Recipient Address: " << P.getRecipientAddress() << endl;
    cout << "Sender City: " << P.getSenderCity() << endl;
    cout << "Recipient State: " <<  P.getRecipientState() << endl;
    cout << "Recipient ZIP Code: " << P.getRecipientZIP() << endl;
    cout << "Package weight: " << P.getWeight() << endl;
    cout << "Shipping Cost per Ounce: $" << P.getCostPerOunce() << endl << endl;
    
    //Overnight Package
    OvernightPackage ONP("Rob", "1500 Triangle St", "Lexington", "MA", 9334, "Ringo", "1600 Canal St", "Boston", "MA", 9321, 34.41, 1.51, 2.55);

    ONP.setSenderName("Rob");
    cout << "-Overnight Package Information-" << endl;
    cout << "Sender Name: " << ONP.getSenderName() << endl;
    cout << "Sender Address: " << ONP.getSenderAddress() << endl;
    cout << "Sender City: " << ONP.getSenderCity() << endl;
    cout << "Sender State: " << ONP.getSenderState() << endl;
    cout << "Sender ZIP Code: " << ONP.getSenderZIP() << endl;
    cout << "Recipient Name: " << ONP.getRecipientName() << endl;
    cout << "Recipient Address: " << ONP.getRecipientAddress() << endl;
    cout << "Sender City: " << ONP.getSenderCity() << endl;
    cout << "Recipient State: " <<  ONP.getRecipientState() << endl;
    cout << "Recipient ZIP Code: " << ONP.getRecipientZIP() << endl;
    cout << "Package weight: " << ONP.getWeight() << endl;
    cout << "Shipping Cost per Ounce: $" << ONP.getCostPerOunce() << endl;
    cout << "Overnight Fee per Ounce: $" << ONP.getOvernightFeePerOunce() << endl << endl;
    
    //Overnight Package
    TwoDayPackage TDP("Tod", "1500 Triangle St", "Lexington", "MA", 9334, "Star", "1600 Canal St", "Boston", "MA", 9321, 64.41, 2.55, 3.55);
    
    cout << "-Two Day Package Information-" << endl;
    cout << "Sender Name: " << TDP.getSenderName() << endl;
    cout << "Sender Address: " << TDP.getSenderAddress() << endl;
    cout << "Sender City: " << TDP.getSenderCity() << endl;
    cout << "Sender State: " << TDP.getSenderState() << endl;
    cout << "Sender ZIP Code: " << TDP.getSenderZIP() << endl;
    cout << "Recipient Name: " << TDP.getRecipientName() << endl;
    cout << "Recipient Address: " << TDP.getRecipientAddress() << endl;
    cout << "Sender City: " << TDP.getSenderCity() << endl;
    cout << "Recipient State: " <<  TDP.getRecipientState() << endl;
    cout << "Recipient ZIP Code: " << TDP.getRecipientZIP() << endl;
    cout << "Package weight: " << TDP.getWeight() << endl;
    cout << "Shipping Cost per Ounce: $" << TDP.getCostPerOunce() << endl;
    cout << "Flat Fee per Ounce: $" << TDP.getFlatFee() << endl << endl;
    
    return 0;
    
    
                         

}
