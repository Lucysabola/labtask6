#include "TriangleQuastion3.h"
using namespace shapes;
TriangleQuastion3::TriangleQuastion3(){
    base=0;
    heigth=0;
}
TriangleQuastion3::TriangleQuastion3(double newBase,double newHeight){
    base=newBase;
    heigth=newHeight;
}
void TriangleQuastion3::setBase(double newBase){
    base=newBase;
}
void TriangleQuastion3::setHeight(double newHeight){
    heigth=newHeight;
}
double TriangleQuastion3::getBase(){
    return base;
}
double TriangleQuastion3::getHeight(){
    return heigth;
}