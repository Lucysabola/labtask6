#include "SquareQuastion3.h"
#include "CircleQuastion3.h"
#include "TriangleQuastion3.h"
#include "Area.h"

double Area::calculateAreaOfSquare(SquareQuastion3 s1){
    return s1.getSideLength()*s1.getSideLength();
};
double Area::calculateAreaOFCircle(CircleQuastion3 c1){
    return c1.getRadius()*c1.getRadius()*3.14159;
};
double Area::calculateAreaOfTriangle(TriangleQuastion3 t1){
    return 0.5*t1.getBase()*t1.getHeight();
}