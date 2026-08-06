#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. initialization can be done --------
    // const int x = 5;
    // x = 10;

    // int *p = &x;
    // *p = 10;

    // cout << x << endl;

    // 2. const without pointers ----------
    // int *a = new int;
    // *a = 2;

    // cout << *a << endl;
    // // delete a; // If not deleted, memory leak will occur

    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    // 2. const with pointers (const data, non-const pointer) -----------
    // const int *a = new int(5);
    // int const *a = new int(5); // same as up line
    // // *a = 2; not allow - can't change the content of pointer.

    // cout << *a << endl;
    // // delete a; // If not deleted, memory leak will occur

    // int b = 20;
    // a = &b; // allow - because pointer is non constant
    // cout << *a << endl;

    // 2. const with pointers (const pointer, non-const data) -----------
    // int *const a = new int(5);
    // *a = 20; // const changeable but pointer const
    // cout << *a << endl;

    // int b = 50;
    // a = &b; // not allow, pointer constant

    // 2. const with pointers (const pointer, const data) -----------
    const int *const a = new int(5);
    // *a = 20; // not allow
    cout << *a << endl;

    int b = 50;
    // a = &b; // not allow

    return 0;
}