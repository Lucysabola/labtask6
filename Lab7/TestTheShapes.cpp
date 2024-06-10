#include <iostream>
#include "Area.h"
using namespace std;
using namespace shapes;
int main(){
    double userSideLength;
    double userRadius;
    double userBase;
    double userHeight;


    for(int i=0;i<1;){
    //user input
    int checkUserOption;
    cout<<"\n\n1. calculate the area of square\n2. calculate the area of circle\n3. calculate area of triangle\n4. quite\n";
    cin>>checkUserOption;
        if(checkUserOption==1){
            //create square object
            SquareQuastion3 squareObjct1;
            //prompt user for input
            cout<<"Enter side length"<<endl;
            cin>>userSideLength;
            //set square to users input
            squareObjct1.setSideLength(userSideLength);
            //create area object
            Area areaObject;
            
            cout<<"The area of the Square is :"<<areaObject.calculateAreaOfSquare(squareObjct1)<<endl;
            continue;

        }
        else if(checkUserOption==2){
            //create circle object
            CircleQuastion3 circleObject1;
            //prompt user for input
            cout<<"Enter radius "<<endl;
            cin>>userRadius;
            //set circle to users input
            circleObject1.setRadius(userRadius);
            //create area object
            Area circleAreaObject;
            cout<<"The area of the square is : "<<circleAreaObject.calculateAreaOFCircle(circleObject1)<<endl;
            continue;         
        }
        else if(checkUserOption==3){
            //create triangle object
            TriangleQuastion3 triangleObject1;
            //prompt the user for input
            cout<<"Enter base\n";
            cin>>userBase;
            cout<<"Enter height\n";
            cin>>userHeight;
            //set triangle base
            triangleObject1.setBase(userHeight);
            //set triangle heigth
            triangleObject1.setHeight(userHeight);
            //create area object
            Area triangleAreaObject;
            cout<<"The area of the triangle is : "<<triangleAreaObject.calculateAreaOfTriangle(triangleObject1)<<endl;
            continue;
        }
        else if(checkUserOption==4){
            return 0;
        }
        else{
            cout<<"invalid input,try again"<<endl;
            continue;
        }
    }
}