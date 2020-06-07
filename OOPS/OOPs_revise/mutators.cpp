//Mutators help us to change state of an object
//generally when there is invariance to the class , mutators allow to set invariance logic

#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        std::string _brand;
        
    // TODO: Declare getter and setter for brand
    public:
        void brand(char*);
        std::string brand() const;
        
};

// Define setters
void Car::brand(char* brand)
{
    Car::_brand = brand;
}

// Define getters
std::string Car::brand() const
{
    return _brand;
}

// Test in main()
int main() 
{
    Car car;
    char brand[] = "Peugeot";
    car.brand(brand);
    std::cout << car.brand() << "\n";   
}

//Problem statement:
// The mutator function for brand must accept a 
//C++ string as a parameter and convert that string 
//into a C-style string (a character array ending in null character)
// to set the value of brand.
