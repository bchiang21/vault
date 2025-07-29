This is a learning session on memory addresses, pointers and variables.
& is really refering to the address of a variable.

🧠 Concepts You’ll Need
Pointers: A pointer is a variable that stores the memory address of another variable. 
For example, if you have an int, you can create a pointer that points to it.

Dereferencing:
Dereferencing a pointer means accessing the value that the pointer is pointing to. 
In C, this is done with the * operator.

Function Parameters with Pointers:
When a function takes a pointer as a parameter, it can modify the original value 
at that memory location.

💡 Think About This
You’re writing a function that: Receives a pointer to an int as input.

Then uses that pointer to change the actual value stored in the original int variable to 42.

Ask yourself: What is the syntax for declaring a function that takes a pointer?

How do you assign a value to the location that the pointer is pointing to?


🔍 Explanation:
int *nbr means the function takes a pointer to an integer.
*nbr = 42; sets the value at that address to 42.
In main, ft_ft(&x); passes the address of x to the function, allowing it to modify x directly.