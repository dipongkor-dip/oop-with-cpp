#include <bits/stdc++.h>
using namespace std;
// runtime Polymorphism

class Shape
{
public:
    // void draw() // compile time bind = static bind
    virtual void draw() // run time processing = run time binding
    {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Rectangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *shape_pointer)
{
    shape_pointer->draw(); // draw is polymorphic
};

int main()
{
    Circle c;
    Rectangle r;

    // Shape *s = &c; // upcasting

    ShapeDrawing(&c); // compile time/static output: Generic drawing...  // runtime/dynamic output: Circle drawing...
    ShapeDrawing(&r); // compile time/static output: Generic drawing...  // runtime/dynamic output: Rectangle drawing...

    return 0;
}