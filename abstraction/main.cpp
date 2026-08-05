#include <bits/stdc++.h>
#include "bird.h"

using namespace std;

void birdDoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}

int main()
{
    Bird *sp = new sparrow();

    // sp->eat();
    // sp->fly();
    // sp->eat();
    // sp->fly();
    // alternative
    birdDoesSomething(sp);

    // Bird *brd = Bird(); // not create object of Bird

    return 0;
}

/**
 *  c++ interface or abstract not create object
 */