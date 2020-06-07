// This example demonstrates the privacy levels
// between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : protected Vehicle {
public:
    bool kickstand = true;
    void Wheels(int w)
    {
        wheels = w;
    }
};

class Scooter : private Vehicle {
public:
    bool electric = false;
    void Wheels(int w)
    {
        wheels = w;
    }
};

int main() 
{
    Car car;
    car.wheels = 4;
    Bicycle bicycle;  //We had commented it as not able to access the private and protected
    bicycle.Wheels(2);
    //bicycle.wheels = 2;
    Scooter scooter;
    //scooter.wheels = 1;
    scooter.Wheels(1);
};
