#include <iostream>
#include <string>

using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayPersonInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ==========================================
// 1. Single Inheritance: Person -> Student
// ==========================================
class Student : public Person
{
protected:
    int studentId;

public:
    Student(string name, int age, int studentId) : Person(name, age)
    {
        this->studentId = studentId;
    }

    void study()
    {
        cout << name << " (Student ID: " << studentId << ") is studying." << endl;
    }
};

// ==========================================
// 2. Multilevel Inheritance: Person -> Student -> GraduateStudent
// ==========================================
class GraduateStudent : public Student
{
private:
    string researchTopic;

public:
    GraduateStudent(string name, int age, int studentId, string researchTopic)
        : Student(name, age, studentId)
    {
        this->researchTopic = researchTopic;
    }

    void research()
    {
        cout << name << " is doing research on: " << researchTopic << endl;
    }
};

// ==========================================
// 3. Hierarchical Inheritance: Person -> (Student and Teacher)
// ==========================================
class Teacher : public Person
{
protected:
    string subject;

public:
    Teacher(string name, int age, string subject) : Person(name, age)
    {
        this->subject = subject;
    }

    void teach()
    {
        cout << name << " is teaching " << subject << "." << endl;
    }
};

// ==========================================
// ৪. Multiple Inheritance: Speaker and Writer from Author
// ==========================================
class Speaker
{
protected:
    string speakingSkill;

public:
    Speaker(string skill)
    {
        this->speakingSkill = skill;
    }

    void speak()
    {
        cout << "Speaking ability: " << speakingSkill << endl;
    }
};

class Writer
{
protected:
    string writingStyle;

public:
    Writer(string style)
    {
        this->writingStyle = style;
    }

    void write()
    {
        cout << "Writing style: " << writingStyle << endl;
    }
};

// Multiple Inheritance: Teacher and Speaker, Writer -> 'Professor'
class Professor : public Teacher, public Speaker, public Writer
{
protected:
    string department;

public:
    Professor(string name, int age, string subject, string skill, string style, string department) : Teacher(name, age, subject), Speaker(skill), Writer(style)
    {
        this->department = department;
    }

    void professorWork()
    {
        cout << __FUNCTION__ << endl; // output: professorWork ~ that is function name
        cout << name << " is a Professor. ";
        teach();
        speak();
        write();
    }
};

// ==========================================
// ৫. Hybrid Inheritance: উপরের একাধিক ইনহেরিটেন্সের মিশ্রণ
// (যেমন এখানে Professor ক্লাসটিতে Multilevel, Hierarchical এবং Multiple সব এক হয়েছে)
// ==========================================

int main()
{
    cout << "--- 1. Single & Multilevel Inheritance ---" << endl;
    GraduateStudent gs("Sunny", 24, 101, "Artificial Intelligence");
    gs.displayPersonInfo();
    gs.study();
    gs.research();

    cout << "\n--- 2. Hierarchical Inheritance ---" << endl;
    Teacher t("Alo", 40, "Physics");
    t.displayPersonInfo();
    t.teach();

    cout << "\n--- 3. Multiple & Hybrid Inheritance ---" << endl;
    Professor pro("Dr. Alm", 55, "Organic Chemistry", "English Speaking", "Poetic & Philosophical", "Chemistry");
    pro.displayPersonInfo();
    pro.professorWork();

    return 0;
}