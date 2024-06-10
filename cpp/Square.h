#ifndef SQUARE_H
#define SQUARE_H

class Square{
    private:
    double sideLength;

    public:
    Square (double newsideLength);
    ~Square();
    void setsideLength(double s);
    double getsideLength() const;

};
#endif