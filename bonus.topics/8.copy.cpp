#include <iostream>
using namespace std;

// SHALLOW COPY issues
class abc
{
public:
    int x, *y;

    abc(int x, int y) : x(x), y(new int(y)) {}

    // default dump copy constructor: it does SHALLOW COPY
    abc(const abc &obj)
    {
        x = obj.x;
        y = obj.y;
    }

    // custom : DEEP COPY constructor
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     // y = obj.y;
    //     y = new int(*obj.y);
    // }

    void print() const
    {
        printf("X:%d\nPointer Y:%p\nContent of Y (*y): %d\n\n", x, y, *y);
    }

    // destructor
    ~abc()
    {
        delete y; // delete heap y
    }
};

int main()
{
    abc *a = new abc(1, 2);

    abc b = *a;

    delete a; // calling destructor

    b.print(); // dump constructor : already delete y ~ free(): double free detected in tcache 2

    return 0;
}