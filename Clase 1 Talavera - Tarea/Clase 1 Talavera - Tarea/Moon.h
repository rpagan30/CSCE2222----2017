//
//  Moon.hpp
//  Clase 1 Talavera - Tarea
//
//  Created by Rafael Pagan on 3/8/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef MOON_H_
#define MOON_H_

class Moon {
    
private:
    
    double moonWeight;
    double earthWeight;
    
public:
    
    Moon();
    ~Moon();
    double getMoonWeight() const;
    double getEarthWeight() const;
    //void setEarthWeight(double a); REMOVED BECAUSE EARTHWEIGHT IS A GLOBAL CONSTANT
    void setMoonWeight(double ew);
    void DisplayMoon() const ;


};


#endif /* Moon_h */
