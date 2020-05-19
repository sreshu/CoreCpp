// 
//               A
//              / \ 
//             B   C          HYBRID INHERITANCE  / VIRTUAL INHERITANCE
//             \   /
//               D
// 

#include <iostream>
using namespace std;

class Vehicle {
    private :
        int maxSpeed;

    protected :
        int numTyres;

    public :
        string color;

    Vehicle() {
        cout << "Vehicle's default constructor" <<endl;

    }

    void print() {
        cout << "Vehicle" << endl;
    }

    Vehicle(int z) {
        cout << "Vehicle's Parametrized constructor" << endl;
        maxSpeed = z;
    }

    ~Vehicle() {
        cout << "Vehicle's Destructor" << endl;
    }

};

class Car : virtual public Vehicle {   // Added virtual to ensure only one copy of A is inherited by D , Bus(D) will directly call Vehicle(A)
    public :
        int numGears;

        Car() {
            cout << "Car's default constructor"<<endl;
        }

        ~Car(){
            cout <<"Car's Destructor"<<endl;
        }

        void print(){
            cout <<"NumTyres :"<< numTyres << endl;
            cout <<"Color : "<< color << endl;
            cout << "Num gears :" << numGears << endl;
        }
};

class Truck : virtual public Vehicle {
    public :
        Truck(){
            cout <<"Truck's constructor" <<endl;
        }
};

class Bus : public Car, public Truck{
    public :
        Bus() {
            cout << "Bus's constructor " << endl;
        }

        // void print(){
        //     cout << "Bus" << endl;
        // }
};

int main(){
    Bus b;

    //b.print(); --> Creates ambiguity

    b.Truck :: print();
}