#include <iostream>

void myFunction(int &&val)
{
    std::cout << "val = " << val << std::endl;
}

int main()
{
    myFunction(42);
    
    
//     we cannot pass an lvalue to myFunction, because an rvalue reference cannot bind to an lvalue.
    
    int i = 23;
    myFunction(i)
        
// here is a solution to this problem though: The function std::move converts an lvalue into an rvalue (actually, to be exact, into an xvalue, which we will not discuss here for the sake of clarity), which makes it possible to use the lvalue as an argument for the function: 
    
    int i = 23; 
    myFunction(std::move(i));

    return 0; 
}
