#include<iostream>
#include"Rectangle.h"
using namespace std;

int main(){
    Rectangle rectangle;
    float length,width;
    cout<<"Enter the lenth of the rectangle"<<endl;
    cin>>length;
    rectangle.setLength(length);
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>width;
    rectangle.setWidth(width);

    cout<<"The area of the rectangle is"<<rectangle.calculateArea()<<endl;

}