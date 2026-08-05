#include <bits/stdc++.h>
using namespace std;

// Operator Overloading Polymorphism
class Complex
{
public:
    int real;
    int imaginary;

    Complex()
    {
        // real = -1;
        // imaginary = -1;
        // alternative
        real = imaginary = -1;
    }

    // Complex(int r, int i)
    // {
    //     real = r;      // this->real = r;
    //     imaginary = i; // this->imaginary = i;
    // }
    // alternative
    Complex(int r, int i) : real(r), imaginary(i) {}

    /**
     * syntax ----
     * Re_type operator <operator name>(args){
     *      working area
     * }
     */
    Complex operator+(const Complex &B)
    {
        // this -> A instance
        Complex temp;
        temp.real = this->real + B.real;
        temp.imaginary = this->imaginary + B.imaginary;
        return temp;
    }
    Complex operator-(const Complex &B)
    {
        // this -> A instance
        Complex temp;
        temp.real = real - B.real;
        temp.imaginary = imaginary - B.imaginary;
        return temp;
    }
    bool operator==(const Complex &B)
    {
        return real == B.real & imaginary == B.imaginary;
    }

    void print()
    {
        // cout << "[" << real << " + i" << imaginary << "]" << endl;
        // alternative
        printf("[%d + i%d]\n", real, imaginary);
    }
};

int main()
{
    Complex A(2, 5);
    A.print();

    Complex B(2, 3);
    B.print();

    Complex summation = A + B;

    Complex subtraction = A - B;

    summation.print();   // [4 + i8]
    subtraction.print(); // [0 + i2]

    bool isEqual = A == B;

    cout << isEqual << endl;

    return 0;
}

/**
 * operator কি Function-এর নাম?
 * একভাবে বলতে গেলে হ্যাঁ, কিন্তু এটি সাধারণ Function Name নয়।
 * এটি C++-এর একটি Special Function Name।
 * examples:
 * operator+
 * operator-
 * operator*
 * operator/
 * operator==
 * operator[]
 * operator()
 * operator<<
 * operator>>
 * operator=
 * এগুলো সব C++ এর নির্দিষ্ট Syntax।
 *
 * মনে রাখার সহজ নিয়ম
 * operator হলো একটি Keyword, আর এর পরে যে Symbol (+, -, *, [] ইত্যাদি) লিখবে,
 * সেটিই বলে দেয় কোন Operator-এর আচরণ (behavior) Overload করা হচ্ছে।
 *
 *
 *
 */