//	Header de la clase rectágunlo.
//  Rectangle.h
//  Clase 1 Lab
//

#ifndef RECT_H_
#define RECT_H_

#include <iostream>

using namespace std;

class Rect {
    
public:
    //static int objectCount;
    
    //static void getCount();
    
    Rect();
    ~Rect();
    float getBase() const;
    float getAltura() const;
    float getArea() const;
    void getDisplay() const;
    void setBase(float a);
    void setAltura(float b);
    void setRect(float a, float b);
    void setArea();
    
    //Operators
    Rect &operator=(const Rect &);
    bool operator >(const Rect &tempRectangle);
    bool operator <(const Rect &tempRectangle);
    bool operator ==(const Rect &);
    
    friend ostream &operator<<(ostream &, const Rect &tempRectangle);
    friend istream &operator>>(std::istream &, Rect &);
    
private:
    
    float base, altura, area;
};

#endif
