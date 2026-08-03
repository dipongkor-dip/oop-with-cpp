#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // attributes
    int id;
    string name;
    int age;

private:
    float *gpa;
    string division;

public:
    // constructor: Parameterized constructor
    Student(int id, string name, int age, float gpa, string division)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gpa = new float(gpa);
        this->division = division;
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
        delete this->gpa;
    }

private:
    void result()
    {
        cout << this->name << "Student Result: " << this->gpa << endl;
    }
};

int main()
{
    Student sunny(1, "Sunny", 12, 3.50, "first division");

    cout << sunny.name << endl;
    cout << sunny.age << endl;
    // cout << sunny.division << endl;

    sunny.study();

    // sunny.result();

    return 0;
}
