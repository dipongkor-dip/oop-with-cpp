#include <iostream>
using namespace std;
/**
 * Constructor cannot be virtual,
 * because when constructor of a class is executed ther is not virtual talbe in the memory,
 * means no virtual pointer defined yet.
 * So, the constructor should always be not-virtual.
 */

class Base
{
public:
    // virtual Base() // not working
    Base()
    {
        cout << "Base constructor" << endl;
    }
    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    Base *b = new Derived();

    delete b;

    return 0;
}

/**
 * Can we make virtual ctor?
 * ans: no
 *
 *
 */