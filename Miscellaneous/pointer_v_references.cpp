#include <iostream>

void AddFour(int &val)
{
    val += 4;
}

void AddSix(int *val)
{
    *val += 6; 
}

int main()
{
    int val = 0;
    AddFour(val);
    AddSix(&val);

    std::cout << "val = " << val << std::endl;
 
    return 0;
}

// Pointers can be declared without initialization. This means we can pass an uninitialized 
// pointer to a function who then internally performs the initialization for us.

// Pointers can be reassigned to another memory block on the heap.

// References are usually easier to use (depending on the expertise level of the programmer).
//  Sometimes however, if a third-party function is used without properly looking at the 
//  parameter definition, it might go unnoticed 
