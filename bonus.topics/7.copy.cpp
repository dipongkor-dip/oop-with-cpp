#include <iostream>
using namespace std;

// SHALLOW COPY vs DEEP COPY
class abc
{
public:
    int x, *y;

    abc(int x, int y) : x(x), y(new int(y)) {}

    // default dump copy constructor: it does SHALLOW COPY
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    // custom : DEEP COPY constructor
    abc(const abc &obj)
    {
        x = obj.x;
        // y = obj.y;
        y = new int(*obj.y);
    }

    void print() const
    {
        printf("X:%d\nPointer Y:%p\nContent of Y (*y): %d\n\n", x, y, *y);
    }
};

int main()
{
    abc a(1, 2);
    a.print(); // 1 2

    abc b = a; // copy construct calling
    b.print(); // 1 2

    *b.y = 20;
    b.print(); // 1 20

    a.print(); // dump copy: x = 1, y = 20 // deep copy: x = 1, y = 2

    return 0;
}