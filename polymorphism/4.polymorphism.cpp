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
    void draw()
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
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
    Shape *s = new Shape();
    s->draw(); // compile time: Generic drawing... // runtime: Generic drawing...

    // UPCASTING
    Shape *c = new Circle();
    c->draw(); // compile time: Generic drawing... // runtime: Circle drawing...

    Circle *c2 = new Circle();
    c2->draw(); // compile time: Circle drawing... // runtime: Circle drawing...

    // DOWNCASTING
    Shape *s2 = new Shape();
    Circle *s3 = (Circle *)s2;
    s3->draw(); // compile time: Circle drawing... // runtime: Generic drawing...

    return 0;
}