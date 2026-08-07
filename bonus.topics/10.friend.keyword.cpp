#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int val) : x(val) {};

    int getX() const { return x; }

    void setX(int val) { x = val; }

    friend class B;
    friend void func_print(const A &);
};

class B
{
public:
    void print(const A &a)
    {
        // cout << a.getX() << endl; // working
        cout << a.x << endl; // direct access x - using friend
    }
};

void func_print(const A &a)
{
    cout << a.x << endl; // direct access x - using friend
}

int main()
{
    A a(5);
    B b;

    b.print(a);

    func_print(a);

    return 0;
}

// real world (not recommended)