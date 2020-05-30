A smart pointer is a class that wraps a 'raw' (or 'bare') C++ pointer, to manage the lifetime of the object being pointed to. There is no single smart pointer type, but all of them try to abstract a raw pointer in a practical way. Smart pointers should be preferred over raw pointers.


The problem with heap memory is that when you don’t need it you must deallocate itself. So mostly the programmers are too lazy in writing the code for deallocation of objects and that causes severe problem like memory leak which will cause the program to crash. 

In C++ 11, it introduces smart pointers that automatically manage memory and they will deallocate the object when they are not in use when the pointer is going out of scope automatically it’ll deallocate the memory.

[Smart Pointer - GFG](https://www.geeksforgeeks.org/smart-pointers-cpp/)

In essence, smart pointers are classes that are wrapped around raw pointers. By overloading the -> and * operators, smart pointer objects make sure that the memory to which their internal raw pointer refers to is properly deallocated.


C++11 has introduced three types of smart pointers, which are defined in the header of the standard library:

1.    The unique pointer std::unique_ptr is a smart pointer which exclusively owns a dynamically allocated resource on the heap. There must not be a second unique pointer to the same resource.

2.    The shared pointer std::shared_ptr points to a heap resource but does not explicitly own it. There may even be several shared pointers to the same resource, each of which will increase an internal reference count. As soon as this count reaches zero, the resource will automatically be deallocated.

3.    The weak pointer std::weak_ptr behaves similar to the shared pointer but does not increase the reference counter.

[Smart Pointers - CPP Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#rsmart-smart-pointers)

