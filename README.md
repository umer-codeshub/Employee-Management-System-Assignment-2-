Summary of the Program

The program defines a class named Employee that stores three attributes dynamically, these are name, id and salary. A static counter keeps track of how many Employee objects currently exist, while a constant string stores the company name for all employees.

The constructor allocates new memory for all three attributes. The copy constructor demonstrates both deep and shallow behaviour together. The name and id are copied using deep copy which means new memory is created for them. The salary pointer is copied as it is which means both objects share the same salary value in memory, so changing it from one object affects the other.

The class has setters to update values, a display function to print details, a function that returns a copy of the current object, and a function that shows details of any passed Employee object. The destructor deletes dynamically allocated memory and updates the employee counter.

In the main function, different objects are created to demonstrate deep and shallow copy effects. The program also shows the returned object from a function and creates a dynamic employee using new.

Overall, the program explains constructors, destructors, static members, deep copy, shallow copy, and dynamic memory allocation in one compact example.
