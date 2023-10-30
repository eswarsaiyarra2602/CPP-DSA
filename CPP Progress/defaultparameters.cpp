#include<iostream>
#include<string>
using namespace std;
int add(int a=10 , int b=20)     //default parameters
{
    return (a+b);
}
int main()
{
    int x=5 , y=6 , z;
    z=add(x,y);
    cout<<"sum = "<<z<<endl;        
    z=add(x);
    cout<<"sum = "<<z<<endl; 
    z=add();
    cout<<"sum = "<<z<<endl;
    return 0;
}

//all parameters to the right of a parameter with default argument must have default argument
// default arguments cannot be re-defined
//all non-defaulted parameters needed in a call 
