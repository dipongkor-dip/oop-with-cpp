#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;

    // constructor: Default constructor
    Student()
    {
        cout << "Student Default Constructor called" << endl;
    };

    // Behaviour / Methods / Functions
    void study()
    {
        cout << this->name << " Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    // destructor : Default destructor
    ~Student()
    {
        cout << this->name << " Student Default Destructor called" << endl;
    }
};

// main function memory management following stack - LIFO - Last In Fast Out
int main()
{
    Student sunny;

    sunny.id = 1;
    sunny.name = "Sunny";
    sunny.age = 12;

    sunny.study();

    Student alo;

    alo.id = 2;
    alo.name = "Alo";
    alo.age = 23;

    alo.sleep();

    return 0;
}

/**
 * output ->
 * Student Default Constructor called
 * Sunny Studying
 * Student Default Constructor called
 * Alo Sleeping
 * Alo Student Default Destructor called
 * Sunny Student Default Destructor called
 *
 *
 * ধ্বংস হওয়ার সময় (Destructor): যখন main() ফাংশন শেষ হয় (return 0;),
 * তখন স্ট্যাকের নিয়ম অনুযায়ী যেটা সবার ওপরে ছিল, সেটা সবার আগে ধ্বংস হবে।
 * এখানে alo সবার শেষে ঢুকেছিল বিধায় ডেসট্রাক্টর কল করার সময় alo সবার আগে ডিলিট হয় এবং এরপর sunny ডিলিট হয়।
 * 
 * 
 * file run: 
 * 
 */