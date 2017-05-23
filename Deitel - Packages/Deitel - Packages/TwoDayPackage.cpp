#include "TwoDayPackage.h"
//Constructor
TwoDayPackage::TwoDayPackage( const string &TDP_sName,
                              const string &TDP_sAddress,
                              const string &TDP_sCity,
                              const string &TDP_sState,
                              int TDP_sZIP,
                              const string &TDP_rName,
                              const string &TDP_rAddress,
                              const string &TDP_rCity,
                              const string &TDP_rState,
                              int TDP_rZIP,
                              double TDP_w,
                              double TDP_cost,
                              double TDP_fee )
:Package ( TDP_sName,
           TDP_sAddress,
           TDP_sCity,
           TDP_sState,
           TDP_sZIP,
           TDP_rName,
           TDP_rAddress,
           TDP_rCity,
           TDP_rState,
           TDP_rZIP,
           TDP_w,
           TDP_cost) {
    
    setFlatFee(TDP_fee);
}
//Accessors & Mutators
void TwoDayPackage::setFlatFee(double fee) {
    flatFee = (fee < 0.0) ? 0.0 : fee;
}
double TwoDayPackage::getFlatFee() const {
    return flatFee;
}
double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + getFlatFee();
}
