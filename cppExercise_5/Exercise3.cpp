#include <iostream>
#include <string>

using namespace std;
int main()
{
    string data[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for(int i=0;i<sizeof(data)/sizeof(string);++i){
        if(data[i][0]=='B'){
            cout<<data[i]<<endl;
        }
    }
}