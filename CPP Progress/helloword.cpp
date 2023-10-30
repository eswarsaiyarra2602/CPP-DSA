#include<iostream>
#include<string>
using namespace std;
class fun{
  string msg;
  public:
  fun():msg("Hello World!"){}
  void greet(){ cout<<msg<<endl;}
};
int main()
{
  fun myObj1;  
   myObj1.greet();
}
