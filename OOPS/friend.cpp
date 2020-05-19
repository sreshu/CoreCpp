#include <iostream>
using namespace std;

void test();

class Bus {
    public :
        void print();
};

class Truck {
    private :
        int x;

    protected :
        int y;

    public :
        int z;

    // can declare a class as friend class
    // friend class Bus;

    friend void Bus :: print();
    friend void test();
};

void Bus :: print() {
    Truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
}

//Using friend fn able to access other class private properties
 void test() {
     //Access truck private
    Truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
 }


int main() {
    Bus b;
    b.print();
    test();
    
}