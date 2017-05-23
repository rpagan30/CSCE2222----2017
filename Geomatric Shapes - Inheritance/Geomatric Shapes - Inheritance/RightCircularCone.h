//
//  RightCircularCone.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef RightCircularCone_h
#define RightCircularCone_h

#include <stdio.h>
#include "Rect.h"

class RightCircularCone : public Rect {
private:
    double RCC_area; // lateral surface area
    double RCC_volume;
public:
    RightCircularCone(double RCC_radius, double RCC_height, double RCC_area, double RCC_volume);
    ~RightCircularCone();
    double getArea();
    double getVolume();
    void setAreaa();
    void setVolume();
};

#endif /* RightCircularCone_h */
