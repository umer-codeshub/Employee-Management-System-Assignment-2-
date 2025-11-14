Employee Management System in C++
This C++ program demonstrates key OOP concepts using an Employee class. Features include:
Parameterized and Default Constructor: Create objects with default or specific values.
Dynamic Memory Allocation: Employee names are stored on the heap using new.
Deep Copy Constructor: Ensures copied objects have separate memory for names.

Static Members:
employeeCount keeps track of total employees.
companyName is constant across all objects.
Const Functions: Functions like display() and returnCopy() do not modify object state.
Destructor: Properly deletes dynamically allocated memory and updates employee count.
Object Passing: Functions can accept objects by reference to display data.
Object Returning: Functions can return objects, demonstrating copy behavior.
Setters and Display Functions: Update and view employee data.

How It Works:
Initially displays total employees.
Creates Employee objects and shows deep copy functionality.
Modifies one object and shows independent object states.
Demonstrates passing objects to functions and returning objects from functions.
Displays employee count updates during object creation and destruction.

Example Output Highlights:
Original and modified employee data
Total employees before and after object deletion
Demonstrates memory safety via deep copy and destructor
