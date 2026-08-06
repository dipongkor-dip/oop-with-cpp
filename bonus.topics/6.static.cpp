#include <bits/stdc++.h>
using namespace std;

// static member function
class abc
{
public:
    int x, y;
    abc() : x(0), y(0) {}

    static void print()
    {
        // not "this"
        // cout << this->x << " " << this->y << endl; //  this keyword not have for static
        printf("I am in Static %s\n", __FUNCTION__);
    }
};

int main()
{
    abc obj1;
    abc::print();

    abc obj2;
    abc::print();

    return 0;
}