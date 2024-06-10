#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    cout<<"Enter the length of the Rectangle"<<endl;
    double userLength;
    cin>>userLength;
    cout<<"Enter the width of the Rectangle\n";
    double userWidth;
    cin>>userWidth;
    Rectangle r1;

    r1.setLength(userLength);
    r1.setWidth(userWidth);
    cout<<"The area of the Rectangle of length "<<r1.getLength()<<" and width "<<r1.getWidth()<<" is "<<r1.calculateArea()<<endl;

    
    cout<<"Enter the length of the Rectangle"<<endl;
    double userLength2;
    cin>>userLength2;
    cout<<"Enter the width of the Rectangle\n";
    double userWidth2;
    cin>>userWidth2;
    Rectangle r2(userLength2,userWidth2);
    cout<<"The area of the Rectangle of length "<<r2.getLength()<<" and width "<<r2.getWidth()<<" is "<<r2.calculateArea()<<endl;

    return 0;
}