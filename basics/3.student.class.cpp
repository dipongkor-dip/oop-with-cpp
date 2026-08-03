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
        cout << "Student Parameterized Constructor called" << endl;
        this->id = id;
        this->name = name;
        this->age = age;
    };

    // constructor: Copy constructor
    Student(const Student &srcobj)
    {
        cout << "Student Copy Constructor called" << endl;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->age = srcobj.age;
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

    // Student alo = sunny;
    // alternative
    Student alo(sunny);

    cout << sunny.name << " " << alo.name << endl;

    return 0;
}

/**
 * output ->
 * Student Parameterized Constructor called
 * Student Copy Constructor called
 * Sunny Sunny
 * Sunny Student Default Destructor called
 * Sunny Student Default Destructor called
 */