class MyInt
{
    int *_p; // pointer to heap data
public:
    MyInt(int *p = NULL) { _p = p; }
    ~MyInt() 
    { 
        std::cout << "resource " << *_p << " deallocated" << std::endl;
        delete _p; 
    }
    int &operator*() { return *_p; } // // overload dereferencing operator
};


//Here, the constructor of class MyInt takes a pointer to a memory resource. 
//When the destructor of a MyInt object is called, the resource is deleted from memory 
//- which makes MyInt an RAII memory management class. Also, the * operator is overloaded
//which enables us to dereference MyInt objects in the same manner as with raw pointers.
