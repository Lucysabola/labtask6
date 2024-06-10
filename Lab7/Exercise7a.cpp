#include <iostream>
using namespace std;

void swapNumbers(double &varA,double &varB);
int main(){
    double varA=2;
    double varB=3;
    cout<<"varA before swap : "<<varA<<"\nvarB before swap : "<<varB<<endl;
    swapNumbers(varA,varB);
    cout<<"varA after swap : "<<varA<<"\nvarB after swap : "<<varB<<endl;
}
void swapNumbers(double &varA,double &varB){
    double varC=0;
    varC=varA;
    varA=varB;
    varB=varC;

}