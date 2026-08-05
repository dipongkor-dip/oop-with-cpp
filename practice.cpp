#include <bits/stdc++.h>
using namespace std;

class User
{
protected:
    string name;
    string email;
    int number;
    string password;
    bool status;

    User(string name, string email, int number, string password, bool status)
    {
        this->name = name;
        this->email = email;
        this->number = number;
        this->password = password;
        this->status = status;
    }

protected:
    void view_user()
    {
        cout << "User Name: " << name << " Email: " << email << " Number: " << number << endl;
    }

    void view_password()
    {
        cout << "Your Password: " << password << endl;
    }
};

class Customer : protected User
{
protected:
    string division;
    string address;

public:
    Customer(string name, string email, int number, string password, string division, string address) : User(name, email, number, password, false)
    {
        this->division = division;
        this->address = address;
    }

    // protected:
    void view_customer()
    {
        view_user();
        cout << "Name: " << name << " Email: " << email << " Division: " << division << " Address: " << address << " Number: " << number << endl;
    }
};

class Admin : private User
{
protected:
    string division;
    string address;

public:
    Admin(string name, string email, int number, string password, string division, string address) : User(name, email, number, password, false)
    {
        this->division = division;
        this->address = address;
    }
};

class Menu
{
    vector<Customer> customers;
    vector<Admin> admins;

public:
    void add_admin(string name, string email, int number, string password, string division, string address)
    {
        Admin ad = Admin(name, email, number, password, division, address);
        admins.push_back(ad);
    }

    void add_customer(string name, string email, int number, string password, string division, string address)
    {
        Customer cs = Customer(name, email, number, password, division, address);
        customers.push_back(cs);
    }

    void view_customers()
    {
        for (auto customer : customers)
        {
            customer.view_customer();
        }
    }
};

int main()
{
    Menu menu;

    menu.add_admin("ad1", "ad@gmail.com", 4234, "abAB12**", "rangpur", "bochagonj");

    menu.add_customer("customer1", "customer1@gmail.com", 4234, "abAB12**", "rangpur", "bochagonj");

    menu.view_customers();

    return 0;
}