#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    int *age;

    // constructor: Parameterized constructor
    Student(int id, string name, int age)
    {
        this->id = id;
        this->name = name;
        this->age = new int(age);
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

    // destructor
    ~Student()
    {
        cout << "Student Default Destructor called" << endl;
        delete this->age;
    }
};

int main()
{
    // stack
    // Student sunny(1, "Sunny", 12);

    // Dynamic allocation, or Student pointer
    Student *sunny = new Student(2, "alo", 23);

    cout << sunny->name << endl;

    delete sunny;

    return 0;
}

/**
 * output ->
 * Sunny Studying
 * alo Sleeping
 * alo Student Default Destructor called
 * Sunny Student Default Destructor called
 *
 *
 * Dynamic memory allocation time using destructor
 */