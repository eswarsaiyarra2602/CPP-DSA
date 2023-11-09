#include<iostream>
using namespace std;
class Base{
    int x_;
    public:
    Base(int x) : x_(x) {
        cout<<"Base parameterized ctor\n";
    }
};
class Derived : public Base{
    int z_;
    public:
    Derived(int z ) :  z_(z) , Base(int z){         
        cout<<"Derived parameterized ctor"<<endl;
    }
};
int main()
{
    Derived obj(10);
}
//this code gives error if the ctor of base (parameterized ) is not explicitly called in derived , becuase it deletes the default ctor of base 
