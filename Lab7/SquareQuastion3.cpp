#include "SquareQuastion3.h"

using namespace shapes;
SquareQuastion3::SquareQuastion3(){
    sideLength=0;
}
SquareQuastion3::SquareQuastion3(double newSideLength){
    sideLength=newSideLength;
}
void SquareQuastion3::setSideLength(double newSideLength){
    sideLength=newSideLength;
}
double SquareQuastion3::getSideLength(){
    return sideLength;
}