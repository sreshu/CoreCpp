#include <iostream>

int main()
{
    int i = 1; 
    int j = 2; 
    int k = i + j; 
    int &&l = i + j; 

    std::cout << "k = " << k << ", l = " << l << std::endl;

    return 0; 
}


// Since C++11, there is a new type available called rvalue reference, which can be identified from the double ampersand && after a type name. With this operator, it is possible to store and even modify an rvalue, i.e. a temporary object which would otherwise be lost quickly. 

// The expression int &&l creates an rvalue reference, to which the address of the temporary object is assigned, that holds the result of the addition. So instead of first creating the rvalue i+j , then copying it and finally deleting it, we can now hold the temporary object in memory. This is much more efficient than the first approach,
