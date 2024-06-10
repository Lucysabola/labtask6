#ifndef TRIANGLEQUASTION3
#define TRIANGLEQUASTION3
#pragma once
namespace shapes{
    class TriangleQuastion3{
        private:
        double base;
        double heigth;
        public:
        TriangleQuastion3();
        TriangleQuastion3(double newBase,double newHeight);
        void setBase(double newBase);
        void setHeight(double newHeight);
        double getBase();
        double getHeight();
    };
};
#endif