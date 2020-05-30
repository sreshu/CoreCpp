Resource Acquisition Is Initialization

The RAII is a widespread programming paradigm, that can be used to protect a resource such as a file stream, a network connection or a block of memory which need proper management.

In most programs of reasonable size, there will be many situations where a certain action at some point will necessitate a proper reaction at another point, such as:

1.    Allocating memory with new or malloc, which must be matched with a call to delete or free.

2.     Opening a file or network connection, which must be closed again after the content has been read or written.

3.    Protecting synchronization primitives such as atomic operations, memory barriers, monitors or critical sections, which must be released to allow other threads to obtain them.

General idea -

ACQUIRE Resource --> USE Resource --> RELEASE Resource

Problems with this seemingly simple pattern:

1.    The program might throw an exception during resource use and thus the point of release might never be reached.

2.    There might be several points where the resource could potentially be released, making it hard for a programmer to keep track of all eventualities.

3.    We might simply forget to release the resource again.


The overall goal is to have allocation and deallocation (e.g. with new and delete) disappear from the surface level of the code you write. 


RAII can be used to leverage - among others - the following advantages:

1.    Use class destructors to perform resource clean-up tasks such as proper memory deallocation when the RAII object gets out of scope
2.    Manage ownership and lifetime of dynamically allocated objects
3.    Implement encapsulation and information hiding due to resource acquisition and release being performed within the same object.


There are three major parts to an RAII class:

1.    A resource is allocated in the constructor of the RAII class
2.    The resource is deallocated in the destructor
3.    All instances of the RAII class are allocated on the stack to reliably control the lifetime via the object scope



