# Pointers
# Aim:
To study and implement C++ pointers basics.

# Software Used:
Visual Studio Code.

# Theory:
A pointer in C++ is a variable that stores the memory address of another variable. Pointers are used for dynamic memory allocation, arrays, and functions.

# Syntax:
data_type *pointer_name;
```cpp

#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    int *ptr;

    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
```

# Algorithms:

 Displaying Pointer Information:
 
-Start.

-Declare an integer variable var and initialize it to 10.

-Declare an integer pointer ptr.

-Assign the address of var to ptr using the address-of operator &.

-Display the value of var.

-Display the address of var.

-Display the value stored in ptr (which is the address of var).

-Display the value pointed to by ptr using the dereference operator *.

-End.
