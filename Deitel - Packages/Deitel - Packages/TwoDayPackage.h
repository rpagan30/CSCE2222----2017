#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package {
private:
    double flatFee;
public:
    //Constructor
    TwoDayPackage(const string &,
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
    void setFlatFee(double);
    double getFlatFee() const;
    double calculateCost() const;
};
#endif
