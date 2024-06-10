#ifndef CIRCLEQUASTION3
#define CIRCLEQUASTION3
namespace shapes{
    
    class CircleQuastion3
    {
    private:
        /* data */
        double radius;
    public:
        CircleQuastion3();
        CircleQuastion3(double newRadius);
        void setRadius(double newRadius);
        double getRadius();
        
    };
};
#endif