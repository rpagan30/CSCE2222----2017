//	Funciones de la clase rectágunlo.
//  Rect.cpp
//  Clase 1 Lab
//

#include <iostream>


using namespace std;
#include "Rect.h"

/////Overloading operators////

  //void Rect::getCount() {
     //cout << objectCount << endl;
//}

Rect & Rect::operator=(const Rect &tempRectangle) {
    this->base = tempRectangle.getBase();
    this->altura = tempRectangle.getAltura();
    return *this;
}

ostream &operator<<(ostream &output, const Rect &tempRectangle) {
    output << "Base: " << tempRectangle.getBase() << endl;
    output << "Altura: " << tempRectangle.getAltura() << endl;
    output << "Area: " << tempRectangle.getArea() << endl;
    return output;
}///end operator

istream &operator>>(istream &input, Rect &tempRectangle) {
    cout << "Entra el valor de la base: " << endl;
    input >> tempRectangle.base;
    cout << "Entra el valor de la altura: " << endl;
    input >> tempRectangle.altura;
    cout << "Entra el valor de el Area: " <<endl;
    input >> tempRectangle.area;
    return input;
}

bool Rect::operator==(const Rect &tempRectangle) {
    bool flag = false;
    if(tempRectangle.getArea() == this-> getArea()) {
        flag = true;
    }
    return flag;
}

bool Rect::operator>(const Rect &tempRectangle) {
    bool flag = false;
    if (this->getArea() > tempRectangle.getArea()) {
        flag = true;
    }
    return flag;
}

Rect::Rect() {
    
    this->base=1.0;
    this->altura=1.0;
    this->area=1.0;
}

Rect::~Rect() {
    
    cout << "Destruccion de un rectángulo" << endl;
}

float Rect::getBase() const {
    
    return base;
}

float Rect::getAltura() const {
    
    return altura;
}

float Rect::getArea() const {
    
    return area;
}

void Rect::getDisplay() const {
    
    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area: " << area << endl ;
}


void Rect::setBase(float b) {
    
    base = b;
}

void Rect::setAltura(float a) {
    
    altura = a;
}

void Rect::setRect(float a, float b) {
    
    setBase(a);
    setAltura(b);
}

void Rect::setArea() {
    
    area = getBase() * getAltura() ;
}

