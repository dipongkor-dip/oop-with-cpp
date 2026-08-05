#include <bits/stdc++.h>
using namespace std;

int x = 10; // global variable

void fun()
{
    ::x = 1000;
}

int main()
{
    ::x = 100; // alternative // x = 100; global variable

    int x = 1;
    cout << x << endl; // 1

    cout << ::x << endl; // accessing global variable - 100

    {
        int x = 3;
        {
            int x = 5;
            cout << x << endl; // 5
        }
        cout << x << endl;   // 3
        cout << ::x << endl; // accessing global variable - 100
    }

    fun();
    cout << ::x << endl; // 1000
    return 0;
}