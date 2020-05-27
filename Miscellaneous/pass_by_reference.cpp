#include <iostream>

void AddFour(int &val)
{
    val += 4;
}

int main()
{
    int val = 0;
    AddFour(val);
    val += 2;

    std::cout << "val = " << val << std::endl;
 
    return 0;
}

// the function can now modify the argument such that the changes also happen
// on the caller side. In addition to the possibility to directly exchange 
//information between function and caller, passing variables by reference is also 
//faster as no information needs to be copied, as well as more memory-efficient. 

// To pass a variable by reference, we simply declare the function parameters as 
// references using & rather than as normal variables. When the function is called, 
// val will become a reference to the argument. Since a reference to a variable is 
// treated exactly the same as the variable itself, any changes made to the reference 
// are passed through to the argument!

