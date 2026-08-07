#include <iostream>
using namespace std;

class Box
{
    int width;
    Box(int w) : width(w) {}

public:
    int getWidth() const
    {
        return width;
    }

    void setWidth(int val)
    {
        width = val;
    }

    friend class BoxFactory;
};

class BoxFactory
{
    int count;

public:
    Box getABox(int w)
    {
        ++count;
        return Box(w);
    }
};

int main()
{
    BoxFactory boxFac;

    Box b = boxFac.getABox(5);

    cout << b.getWidth() << endl;

    return 0;
}

/**
 * Can constructor be made private?
 * ans: yes
 *
 *
 * Singleton class - Reading
 *
 * constructors c++ microsoft - Reading article
 */