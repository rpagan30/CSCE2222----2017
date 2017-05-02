//
//  RoomDimension.hpp
//  Carpet Calculator
//
//  Created by Rafael Pagan on 4/27/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension {
    
private:
    FeetInches width;
    FeetInches length;
    FeetInches area;
    
public:
    
    RoomDimension(FeetInches width = 1, FeetInches length = 1, FeetInches area = 1);
    RoomDimension();
    ~RoomDimension();
    FeetInches getWidth() const;
    FeetInches getLength() const;
    FeetInches getArea() const;
    void setWidth(int w);
    void setLength(int l);
    void setArea();
    
    // Overloaded operator functions
    RoomDimension operator + (const RoomDimension &);
    RoomDimension operator - (const RoomDimension &);
    
    bool operator > ( RoomDimension &);
    bool operator < ( RoomDimension &);
    RoomDimension &operator = (const RoomDimension &);
    bool operator == ( RoomDimension &);
    
    // Friends
    friend ostream &operator << (ostream &, const RoomDimension &temp);
    friend istream &operator >> (std::istream &, RoomDimension &);

};

#endif /* RoomDimension_h */
