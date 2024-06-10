
#ifndef Area_H
#define Area_H
#include "SquareQuastion3.h"
#include "CircleQuastion3.h"
#include "TriangleQuastion3.h"
#pragma once
using namespace shapes;

class Area{
    public:
    static double calculateAreaOfSquare(SquareQuastion3 t1);
    static double calculateAreaOfTriangle(TriangleQuastion3 t1);
    static double calculateAreaOFCircle(CircleQuastion3 c1);

};
#endif