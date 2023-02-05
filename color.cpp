// Written by Dylan Celius

#include "color.h"

Color::Color(float newr, float newg, float newb, float newa) : r(newr), g(newg), b(newb), a(newa) {}

float Color::getColorR(bool eightBit = false) {
    if (eightBit) return r * 255;
    else return r;
}
float Color::getColorG(bool eightBit = false) {
    if (eightBit) return g * 255;
    else return g;
}
float Color::getColorB(bool eightBit = false) {
    if (eightBit) return b * 255;
    else return b;
}
float Color::getColorA(bool eightBit = false) {
    if (eightBit) return a * 255;
    else return a;
}

void Color::setColor(float newr, float newg, float newb, float newa) {
    if (r != newr) r = newr;
    if (g != newg) g = newg;
    if (b != newb) b = newb;
    if (a != newa) a = newa;
}

void Color::print() {
    std::cout << "(" << r << ", " << g << ", " << b << ", " << a << ")" << std::endl; 
}