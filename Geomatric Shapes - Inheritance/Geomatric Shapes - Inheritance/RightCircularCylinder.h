//
//  RightCircularCylinder.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef RightCircularCylinder_h
#define RightCircularCylinder_h

#include <stdio.h>
#include "RightCircularCone.h"

class RightCircularCylinder : public RightCircularCone {
private:
    double RCCY_area;
    double RCCY_volume;
public:
    RightCircularCylinder(double RCCY_radius, double RCCY_height, double RCCY_area, double RCCY_volume);
    ~RightCircularCylinder();
    double getArea() const;
    double getVolume() const;
    
    void setArea();
    void setVolume();
};

#endif /* RightCircularCylinder_h */
