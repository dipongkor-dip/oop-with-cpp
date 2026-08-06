#include <bits/stdc++.h>

using namespace std;

class abc
{
    mutable int x; // mutable for const break
    int *y;
    const int z;

public:
    // abc()
    // {
    //     x = 0;
    //     y = new int(0);
    // }

    // old style
    // abc(int _x, int _y, int _z = 0)
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z; // given error because const but handle initialization list
    // }
    // alternative - initialization list
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {
        cout << "in init list after print" << endl;
    }

    int getX() const // that means any value can't modify
    {
        x = 20; // const ignore cause of mutable keyword
        return x;
    }

    void setX(int value)
    {
        x = value;
    }

    int getY() const // that means any pointer can't modify
    {
        // int f = 20;
        // y = &f; // cause fo const
        return *y;
    }

    void setY(int val)
    {
        *y = val;
    }

    int getZ() const
    {
        return z;
    }
};

void printABC(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main()
{
    abc a(1, 2, 3);

    // cout << a.getX() << endl;
    // cout << a.getY() << endl;

    printABC(a);

    return 0;
}