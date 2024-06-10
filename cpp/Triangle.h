#ifndef TRIANGLE_H
#define TRIANGLE_H
 namespace shapes{

class Triangle{
    private:
    double base;
    double height;

    public:
    Triangle( double newBase, double newHeight);
    ~Triangle();
    void setBase(double b);
    void setHeight(double h);
    double getBase() const;
    double getHeight() const;
};
 }
#endif