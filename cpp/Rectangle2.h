 #ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle2{
    private:
    float length;
    float width;

    public:
    Rectangle2(float width,float length);
    ~Rectangle2();
    void setLength(float l);
    void setWidth(float w);
    float getLength()const;
    float getWidth()const;
    float calculateArea();
};
#endif