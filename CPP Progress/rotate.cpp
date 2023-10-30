#include<iostream>
#include<string>
using namespace std;
int main()
{
    int data[]={11,21,34,53,123};
    rotate(data,data+2, data+5);
    for(int i=0 ; i<5;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}
//roate desired set of elements - basically brings that set of elements to the begging of the array
