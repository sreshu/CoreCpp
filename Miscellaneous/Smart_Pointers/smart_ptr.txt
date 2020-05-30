A smart pointer is a class that wraps a 'raw' (or 'bare') C++ pointer, to manage the lifetime of the object being pointed to. There is no single smart pointer type, but all of them try to abstract a raw pointer in a practical way. Smart pointers should be preferred over raw pointers.


The problem with heap memory is that when you don’t need it you must deallocate itself. So mostly the programmers are too lazy in writing the code for deallocation of objects and that causes severe problem like memory leak which will cause the program to crash. 

In C++ 11, it introduces smart pointers that automatically manage memory and they will deallocate the object when they are not in use when the pointer is going out of scope automatically it’ll deallocate the memory.

[Smart Pointer - GFG](https://www.geeksforgeeks.org/smart-pointers-cpp/)
