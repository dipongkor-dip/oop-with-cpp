#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    // all attributes private ~ perfect encapsulation
    int id;
    string name;
    int age;
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

    void setGPA(float value)
    {
        // layer of authentication
        *this->gpa = value;
    }

    float getGPA()
    {
        return *this->gpa;
    }

    void setAge(int value)
    {
        this->age = value;
    }

    int getAge()
    {
        return this->age;
    }

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

    // cout << sunny.age << endl; access denied

    float gpa = sunny.getGPA();
    cout << gpa << endl;

    sunny.setGPA(3.90);

    float u_gpa = sunny.getGPA();
    cout << u_gpa << endl;

    float age = sunny.getAge();
    cout << age << endl;

    sunny.setAge(15);

    float u_age = sunny.getAge();
    cout << u_age << endl;

    // sunny.result();

    return 0;
}
