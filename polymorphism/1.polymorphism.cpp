#include <bits/stdc++.h>

using namespace std;

// function overloading polymorphism
class Add
{
public:
    int sum(int x, int y)
    {
        cout << "int function" << endl;
        return x + y;
    }

    int sum(int x, int y, int z)
    {
        cout << "3int function" << endl;
        return x + y + z;
    }

    double sum(double x, double y)
    {
        cout << "double function" << endl;
        return x + y;
    }

    float sum(float x, float y)
    {
        cout << "float function" << endl;
        return x + y;
    }
};

int main()
{
    Add add;

    // function overloading polymorphism
    cout << add.sum(3, 5) << endl;

    cout << add.sum(3.4, 5.8) << endl;

    cout << add.sum(3.4, 5.8, 8.5) << endl;

    // float ফাংশন কল করার জন্য সংখ্যার শেষে 'f' ব্যবহার করতে হবে
    cout << add.sum(5.0f, 3.0f) << endl;

    return 0;
}