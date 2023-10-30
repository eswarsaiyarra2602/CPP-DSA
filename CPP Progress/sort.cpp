#include<iostream>
#include<string>
#include<algorithm> //header required for sort 
using namespace std;
int compare( int i , int j)
{
    return (i>j);  
}
int main()
{
    int arr[6]={5,3,1,2,44,0};     
    sort(arr,arr+6,compare);   
    for(int i=0 ; i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
// this program is for desecnding order , for ascending order no need of
// compare function : sort(arr,arr+6);
