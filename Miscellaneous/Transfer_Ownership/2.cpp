#include <iostream>
#include <memory>

void f(std::shared_ptr<MyClass> ptr)
{
    std::cout << "shared_ptr (ref_cnt= " << ptr.use_count() << ") " << &ptr;
    ptr->printVal();
}

int main()
{
    std::shared_ptr<MyClass> sharedPtr = std::make_shared<MyClass>(23);
    std::cout << "shared_ptr (ref_cnt= " << sharedPtr.use_count() << ") " << &sharedPtr;
    sharedPtr->printVal();

    f(sharedPtr);

    std::cout << "shared_ptr (ref_cnt= " << sharedPtr.use_count() << ") " << &sharedPtr;
    sharedPtr->printVal();

    return 0;
}


//In summary, move semantics are usually not needed when using shared pointers. 
//Shared pointers can be passed by value safely and the main thing to remember 
//is that with each pass, the internal reference counter is increased while the managed object stays the same. 



//Passing a unique_ptr as const is not useful as the function will not be able to do anything with it: 
//Unique pointers are all about proprietary ownership and as soon as the pointer is passed, the function will 
//assume ownership. But without the right to modify the pointer, the options are very limited.

//A shared_ptr can either be passed as const or non-const reference. The const should be used when you want
// to express that the function will only read from the pointer or it might create a local copy and share ownership. 
