#include <bits/stdc++.h>
using namespace std;
// runtime Polymorphism

/**
 * final keyword : the final specifier is used in two main contexts : with classes and with virtual member functions.
 * Prevents Class Inheritance: When you declare a class as final, it means that no other class can inherit from it.
 * Preventing Virtual Function Overriding:
 * The final specifier can also be used with virtual functions to prevent them from being overridden in derived classes.
 */

class Shape
// class Shape final // that means no other class can inherit from it.
{
public:
    virtual void draw()
    // virtual void draw() final // virtual function overiding not allow
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