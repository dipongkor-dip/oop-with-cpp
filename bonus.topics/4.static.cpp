#include <iostream>
using namespace std;

// normal function
class abc
{
public:
    int x, y;

    void print() const
    {
        // this
        cout << x << " " << y << endl;
    }
};

int main()
{
    abc obj1 = {1, 2};
    abc obj2 = {3, 5};

    obj1.print();
    obj2.print();

    return 0;
}

/**
 * abc Class // --- normal class
 *  |
 *  |
 *   ------------------- obj1(pointer) --------- this(pointer) ----- x = 1, y = 2
 *  |
 *  |
 *  -------------------- obj2(pointer) --------- this(pointer) ----- x = 3, y = 5
 */