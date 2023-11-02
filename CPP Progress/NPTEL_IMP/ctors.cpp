#include <iostream>
using namespace std;

class Fun {
public:
    int x, y;

    Fun() : x(0), y(0) {
        cout << "Default ctor\n";
    }

    Fun(int a, int b) : x(a), y(b) {
        cout << "2 arg ctor\n";
    }

    Fun(const Fun& a) : x(a.x), y(a.y) {
        cout << "Copy constructor\n";
    }

    Fun(Fun&& a) noexcept : x(0), y(0) {
        swap(x, a.x);
        swap(y, a.y);
        cout << "Move constructor\n";
    }

    Fun& operator=(const Fun &a) {  //if &a then copy ctor gets invoked!
        x = a.x;
        y = a.y;
        cout << "Copy assignment operator\n";
        return *this;
    }

    Fun& operator=(Fun&& a) noexcept {
        swap(x, a.x);
        swap(y, a.y);
        cout << "Move assignment operator\n";
        return *this;
    }

    Fun operator+(const Fun& a) {     // if not &a then copy constructor gets invoked.
        cout << "Operator overloading\n";
        return Fun(x + a.x, y + a.y);   //creates a temp object , 2 arg ctor is invoked
    }
};

int main() {
    Fun a(10, 20);
    Fun b(30, 40);

    Fun c = a+b;   //LINE1//no need of copy constructor , operator+ directly constructs the object
    return 0;
}


//LINE1 output is imp 
