#include <bits/stdc++.h>
using namespace std;

/**
 * Function Call Overhead - inline keyword
 * An inline function is a regular function that is defined by the inline keyword.
 * Used with small sized functions. So that executables are small(handled automatically by compiler optimisation levels)
 */

inline void numberShow(int num)
{
    cout << num << endl;
}

int main()
{
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    return 0;
}

/**
 * compiler working:
 *
 * remove numberShow function and execute direct under main function
 *
 * int main()
 {
    cout << num << endl;
    cout << num << endl;
    cout << num << endl;
    cout << num << endl;
    cout << num << endl;
    return 0;
 }
 *
 *
 */