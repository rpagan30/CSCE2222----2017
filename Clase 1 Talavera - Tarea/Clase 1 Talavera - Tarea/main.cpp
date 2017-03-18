//
//  main.cpp
//  Clase 1 Talavera - Tarea
//
//  Created by Rafael Pagan on 3/8/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Moon.h"

using namespace std;

int main() {
    
    double const ew = 5.972 * pow(10,24) ; //5.972 × 10^24 kg
    
    Moon myMoon;
    
    //Display initialized moon.
    
    myMoon.DisplayMoon();
    
    //Set actual moon weight
    
    myMoon.setMoonWeight(ew);
    
    myMoon.DisplayMoon();
   
        
    return 0;
}
