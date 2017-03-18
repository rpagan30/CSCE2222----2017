//
//  Circulo.hpp
//  Clase 1 Talavera
//
//  Created by Rafael Pagan on 3/7/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef CIRCULO_H_
#define CIRCULO_H_

class Circ {

private:
    
    double centerX;
    double centerY;
    double radius;
    double area;
    
public:
    
    
    Circ( double centerX = 1.0, double centerY = 1.0, double area = 1.0 );

    ~Circ();
    double getCenterX() const;
    double getCenterY() const;
    double getRadius() const;
    double getArea() const;
    void setCenterX(double a);
    void setCenterY(double b);
    void setRadius(double c);
    void setArea();
    void setCirc(double d, double e, double f);
    void DisplayCirc() const ;
    
    //copy constructor
    Circ(const Circ &aCirc);
    
};


#endif /* Circulo_h */
