#ifndef SquareQuastion3_H
#define SquareQuastion3_H
#pragma once

namespace shapes{
    class SquareQuastion3{
        private:
        double sideLength;
        public:
        SquareQuastion3();
        SquareQuastion3(double newSideLength);
        void setSideLength(double newSideLengt);
        double getSideLength();

    };
        
};
#endif