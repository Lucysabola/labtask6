#include "Rectangle.h"
Rectangle::Rectangle(){
    length=0;
    width=0;
}
Rectangle::Rectangle(double newLength,double newWidth){
    length=newLength;
    width=newWidth;
}
void Rectangle::setLength(double newLength){
    length=newLength;  
}
void Rectangle::setWidth(double newWidth){
    width=newWidth;
}
double Rectangle::getLength(){
    return length;
}
double Rectangle::getWidth(){
    return width;
}
double Rectangle::calculateArea(){
    return length*width;
}