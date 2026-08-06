#include <iostream>
using namespace std;

// static data member
class abc
{
public:
    static int x, y;

    void print() const
    {
        // this
        // cout << x << " " << y << endl;
        cout << this->x << " " << this->y << endl;
    }
};

// static data member initialize
int abc::x;
int abc::y;

int main()
{
    // abc obj1 = {1, 2};
    // abc obj2 = {3, 5};
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print(); // 1 2

    abc obj2;
    obj2.x = 3;
    obj2.y = 5;

    obj1.print(); // 3 5
    obj2.print(); // 3 5

    return 0;
}