#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string name;
    string model;
    int noOfTyres;

public:
    Vehicle(string v_name, string v_model, int v_noOfTyres)
    {
        cout << "Inside Vehicle constructor" << endl;
        this->name = v_name;
        this->model = v_model;
        this->noOfTyres = v_noOfTyres;
    }

    void start_engine()
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stoping " << name << " " << model << endl;
    }

    ~Vehicle()
    {
        cout << "Vehicle destructor" << endl;
    }
};

class Car : public Vehicle
{
protected:
    int noOfDoors;
    string transmissionType;

public:
    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "Inside Car constructor" << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAC()
    {
        cout << "AC has started of " << model << endl;
    }

    ~Car()
    {
        cout << "Car destructor" << endl;
    }
};

class Bike : public Vehicle
{
protected:
    string handlebar;
    string suspensionType;

public:
    Bike(string v_name, string v_model, int v_noOfTyres, string handlebar, string suspensionType) : Vehicle(v_name, v_model, v_noOfTyres)
    {
        cout << "Inside Bike constructor" << endl;
        this->handlebar = handlebar;
        this->suspensionType = suspensionType;
    }

    void racing()
    {
        cout << "Racing Bike " << model << endl;
    }

    ~Bike()
    {
        cout << "Bike destructor" << endl;
    }
};

int main()
{
    Car car("Toyota", "XYZ-model", 4, 2, "Manual");

    car.start_engine();
    car.startAC();
    car.stop_engine();

    Bike bike("Honda", "f75", 2, "U", "dual");

    bike.start_engine();
    bike.racing();
    bike.stop_engine();

    return 0;
}

/**
 * output->
 * Inside Vehicle constructor
 * Inside Car constructor
 * Engine is starting Toyota XYZ-model
 * AC has started of XYZ-model
 * Engine is stoping Toyota XYZ-model
 * Inside Vehicle constructor
 * Inside Bike constructor
 * Engine is starting Honda f75
 * Racing Bike f75
 * Engine is stoping Honda f75
 * Bike destructor
 * Vehicle destructor
 * Car destructor
 * Vehicle destructor
 */