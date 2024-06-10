#ifndef Rectangle_H
#define Rectabgle_H
class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle();
    Rectangle(double newlength,double newWidth);
    void setLength(double newLength);
    void setWidth(double newWidth);
    double getLength();
    double getWidth();
    double calculateArea();

};
#endif