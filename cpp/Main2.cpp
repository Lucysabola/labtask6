#include <iostream>
#include "Rectangle2.h"
using namespace std;

int main() {
    float width, length;
    Rectangle2 rect = Rectangle2(width,length);
   //Rectangle2 rect;
    cout<<"Enter Width";
    cin>>width;
    rect.setWidth(width);
    cout<<"Enter Length";
    cin>>length;
    rect.setLength(length);    
    cout<<"The area of the Rectangle is \n" <<rect.calculateArea();
}