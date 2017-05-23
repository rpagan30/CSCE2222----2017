#include "OvernightPackage.h"

//Constructor
OvernightPackage::OvernightPackage(const string &ONP_sName,
                                   const string &ONP_sAddress,
                                   const string &ONP_sCity,
                                   const string &ONP_sState,
                                   int ONP_sZIP,
                                   const string &ONP_rName,
                                   const string &ONP_rAddress,
                                   const string &ONP_rCity,
                                   const string &ONP_rState,
                                   int ONP_rZIP,
                                   double ONP_w,
                                   double ONP_cost,
                                   double ONP_fee)
:Package(ONP_sName,
         ONP_sAddress,
         ONP_sCity,
         ONP_sState,
         ONP_sZIP,
         ONP_rName,
         ONP_rAddress,
         ONP_rCity,
         ONP_rState,
         ONP_rZIP,
         ONP_w,
         ONP_cost
) {
    setOvernightFeePerOunce(ONP_fee);
}
//Accesors & Mutators
void OvernightPackage::setOvernightFeePerOunce(double overnightFee) {
    overnightFeePerOunce = (overnightFee < 0.0) ? 0.0 : overnightFee;
}
double OvernightPackage::getOvernightFeePerOunce() const {
    return overnightFeePerOunce;
}
double OvernightPackage::calculateCost() const {
    return getWeight() * (getCostPerOunce() + getOvernightFeePerOunce());
}
