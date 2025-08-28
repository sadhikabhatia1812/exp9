Aim:
To understand the concept of pointers, their usage in accessing variables and arrays, and to explore pointer arithmetic such as pointer incrementing in C++.

Theory:
Pointers are variables that store the memory addresses of other variables. They play a crucial role in dynamic memory management, arrays, and function arguments.

Pointer Declaration and Initialization:
A pointer is declared by specifying the type it points to, followed by an asterisk *. For example, int* aptr; declares a pointer to an integer.
Initialization involves assigning the address of a variable to the pointer using the address-of operator &.

Dereferencing Pointers:
Dereferencing (*pointer) accesses or modifies the value stored at the memory location the pointer points to.

Pointer Arithmetic:
When pointers are incremented (ptr++), they move to the next memory location corresponding to the size of the type they point to. For example, incrementing an int* moves the pointer to the next integer in memory (usually 4 bytes ahead).

Pointers and Arrays:
The name of an array acts like a pointer to its first element. Pointer arithmetic can be used to traverse arrays.

Algorithm:

Declare an integer variable and initialize it.

Declare a pointer and assign it the address of the variable.

Print the address of the variable, the pointer value, and the dereferenced pointer.

Increment the pointer and observe the change in address.

Modify the variable value using the dereferenced pointer.

Declare an array of integers.

Use a pointer to traverse the array by incrementing the pointer.

Print each element by dereferencing the pointer.

Conclusion:
Pointers store memory addresses and allow direct access and modification of variables. Pointer arithmetic enables efficient traversal of arrays by moving through memory locations based on data type size. Using pointers is fundamental in C++ for dynamic memory management, array manipulation, and optimizing performance.


