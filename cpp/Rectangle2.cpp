#include "Rectangle2.h"

Rectangle2::Rectangle2(float width, float length){
  length = 0.0f;
  width = 0.0f;
}
Rectangle2::~Rectangle2(){}
void Rectangle2::setLength(float l){
    l= length;
}
void Rectangle2::setWidth(float w){
    w= width;
}
float Rectangle2::getLength()const{
    return length;
}
float Rectangle2::getWidth()const{
    return width;
}
float Rectangle2::calculateArea(){
    return width*length;
}