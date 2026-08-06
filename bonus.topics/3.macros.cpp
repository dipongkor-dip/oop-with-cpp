#include <iostream>
using namespace std;

#define PI 3.14159265
#define MAXX(x, y) (x > y ? x : y)

/**
 * in c++, macros are preprocessor directives that allow you to define constants, functions,
 * or code snippets that can be used throughout your code. They are typically defined using the
 * #define directive and are evaluated by the preprocessor before the code is compiled.
 */

float circleArea(float r)
{
    return PI * r * r;
}

float circlePerimeter(float r)
{
    return 2 * PI * r;
}

void func(){
    int x = 3, y = 5;
    cout << MAXX(x, y) << endl;
}

int main()
{
    cout << circleArea(5) << endl;
    cout << circlePerimeter(5) << endl;

    func();
    return 0;
}