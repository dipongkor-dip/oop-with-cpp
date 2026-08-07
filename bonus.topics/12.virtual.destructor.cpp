#include <iostream>
using namespace std;

/**
 * Can we make virtual dtor?
 * ans: yes
 *
 * it is really important to handle proper destruction of Derived Classes.
 */

class Base
{
public:
    Base()
    {
        cout << "Base constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base
{
    int *a;

public:
    Derived()
    {
        a = new int[100];
        cout << "Derived constructor" << endl;
    }
    ~Derived()
    {
        delete[] a;
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    Base *b = new Derived();

    delete b;

    return 0;
}
