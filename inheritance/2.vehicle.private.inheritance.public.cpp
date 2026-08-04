#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string name;
    int noOfTyres;

private:
    string model;

public:
    Vehicle(string v_name, string v_model, int v_noOfTyres)
    {
        cout << "Inside Vehicle constructor" << endl;
        this->name = v_name;
        this->model = v_model;
        this->noOfTyres = v_noOfTyres;
    }

    string getModel()
    {
        return model;
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

class Car : public Vehicle
{
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
        cout << "AC has started of " << getModel() << endl;
    }
};

int main()
{
    Car car("Honda Car", "LXI", 4, 4, "Manual");

    car.start_engine();

    car.startAC();

    car.start_engine();

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