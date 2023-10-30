//replace - from algorithm library
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int data[]={11,12,23,45,50};
    replace(data,data+5,23,0);
    for(int i=0 ; i<5;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}
//it replace the occurence of the element with our desired element
