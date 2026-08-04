#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    string name;
    int noOfTyres;
    string model;

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
};

class Car : private Vehicle
{
    // vehicle attributes are private
public:
    int noOfDoors;
    string transmissionType;

    Car(string v_name, string v_model, int v_noOfTyres, int c_noOfDoors, string c_transmissionType) : Vehicle(v_name, v_model, v_noOfTyres)
    {
        cout << "Inside Car constructor" << endl;
        this->noOfDoors = c_noOfDoors;
        this->transmissionType = c_transmissionType;
    }

    void startAC()
    {
        // cout << "AC has started of " << model << endl; model is inaccessible
    }

    void start_engine_by_car()
    {
        start_engine();
    }

    void stop_engine_by_car()
    {
        stop_engine();
    }
};

int main()
{
    Car car("Honda Car", "LXI", 4, 4, "Manual");

    // car.start_engine(); inaccessible
    car.start_engine_by_car();

    car.startAC();

    // car.start_engine(); inaccessible
    car.stop_engine_by_car();

    return 0;
}

/**
 * output->
 * Inside Vehicle constructor
 * Inside Car constructor
 * Engine is starting Honda Car LXI
 * AC has started of Honda Car
 * Engine is starting Honda Car LXI
 */