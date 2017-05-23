#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage : public Package {
private:
    double overnightFeePerOunce;
    
public:
    //Constructor
    OvernightPackage(const string &,
                     const string &,
                     const string &,
                     const string &,
                     int,
                     const string &,
                     const string &,
                     const string &,
                     const string &,
                     int,
                     double,
                     double,
                     double);
    //Accessors & Mutators
    void setOvernightFeePerOunce(double);
    double getOvernightFeePerOunce() const;
    double calculateCost() const;
};
#endif
