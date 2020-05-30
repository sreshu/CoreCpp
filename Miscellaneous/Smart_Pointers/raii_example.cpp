#include <iostream>

int main()
{
    double den[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    for (size_t I = 0; I < 5; ++i)
    {
        // allocate the resource on the stack
        MyInt en(new int(i));

        // use the resource
        std::cout << *en << "/" << den[i] << " = " << *en / den[i] << std::endl;
    }

    return 0;
}

//The part new int(i) creates a new block of memory on the heap and initializes it with the value of i. 
//The returned result is the address of the block of memory. 


// The part MyInt en(…)calls the constructor of class MyInt, passing the address of a valid memory block as a parameter. 
