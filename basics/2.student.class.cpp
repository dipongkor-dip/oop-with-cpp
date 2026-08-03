#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;

    // constructor: Parameterized constructor
    Student(int id, string name, int age)
    {
        this->id = id;
        this->name = name;
        this->age = age;
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

int main()
{
    Student sunny(1, "Sunny", 12);

    sunny.study();

    Student alo(2, "alo", 23);

    alo.sleep();

    return 0;
}

/**
 * output ->
 * Sunny Studying
 * alo Sleeping
 * alo Student Default Destructor called
 * Sunny Student Default Destructor called
 */