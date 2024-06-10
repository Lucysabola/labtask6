#include "CircleQuastion3.h"

using namespace shapes;

CircleQuastion3::CircleQuastion3(){
    radius=0;
}
CircleQuastion3::CircleQuastion3(double newRadius){
    radius=newRadius;
}
void CircleQuastion3::setRadius(double newRadius){
    radius=newRadius;
}
double CircleQuastion3::getRadius(){
    return radius;
}