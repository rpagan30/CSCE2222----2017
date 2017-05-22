//
//  Bin.h
//  Bins
//
//  Created by Rafael Pagan on 5/18/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef BIN_H
#define BIN_H

#include <stdio.h>
#include <string>

class Bin {
private:
    char* description;
    int no_parts;
public:
    
    Bin();
    Bin(char* description, int no_parts);
    ~Bin();
    char* getDescription() const;
    int getNoParts() const;
    void setDescription(char* d);
    void setNoParts(int np);
    int validation(int value);
    int binSizeCheck(int value);
    void addParts(int add);
    void removeParts(int remove);
};

#endif /* Bin_h */
