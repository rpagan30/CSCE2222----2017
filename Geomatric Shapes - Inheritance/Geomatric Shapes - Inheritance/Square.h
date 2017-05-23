//
//  Square.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Square_h
#define Square_h

#include <stdio.h>
#include "Rect.h"

class Square : public Rect {
private:
    
public:
    Square(double SQ_length, double SQ_width, double SQ_area);
    ~Square();
};

#endif /* Square_h */
