#include<iostream>
#include<string>
using namespace std;
class fun{
  string msg="Hello World!";
  public:
  void greet(){ cout<<msg<<endl;}
};
int main()
{
  fun myObj1;  
   myObj1.greet();
}
