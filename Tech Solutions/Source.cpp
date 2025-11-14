#include <iostream>
using namespace std;
class Employee
{
    string* employeeName;
    int employeeId;
    double employeeSalary;
    static int employeeCount;
    const static string companyName;

public:
    Employee(string name = "", int id = 0, double salary = 0) : employeeId(id), employeeSalary(salary) // Parameterized constructor & default constructor
    {
        this->employeeName = new string(name);
        employeeCount++;
    }

    Employee(const Employee& old) // Copy constructor (deep copy)
    {
        this->employeeName = new string(*old.employeeName);
        this->employeeId = old.employeeId;
        this->employeeSalary = old.employeeSalary;
        employeeCount++;
    }

    static int getEmployeeCount() // Static function to get employee count
    {
        return employeeCount;
    }

    void setName(string name) // Setters
    {
        *employeeName = name;
    }
    void setSalaray(double salary)
    {
        this->employeeSalary = salary;
    }
    void setId(int id)
    {
        this->employeeId = id;
    }

    void display() const // Display function (const)
    {
        cout << "\n-----------------------------" << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Employee Name: " << *employeeName << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
        cout << "-----------------------------" << endl;
    }

    Employee returnCopy() const // Return copy of object
    {
        cout << "\nReturning object from a function!!!" << endl;
        Employee temp(*this);
        return temp;
    }

    void showData(const Employee& obj) // Show data by passing object
    {
        cout << "\nShowing Employee details using obj passed!!" << endl;
        obj.display();
    }

    ~Employee() // Destructor
    {
        delete employeeName;
        cout << "\nEmployee deleted!!" << endl;
        employeeCount--;
        cout << "Remaining Employees: " << employeeCount << endl;
    }
};

const string Employee::companyName = "Tech Solutions"; // Static members initialization
int Employee::employeeCount = 0;

int main()
{
    cout << "Total employees at start: " << Employee::getEmployeeCount() << endl;

    Employee E1("Umer Faryad", 18, 50000);
    Employee E2(E1);

    cout << "\nOriginal data!!" << endl;
    E1.display();
    E2.display();

    E2.setName("Daniyal");
    E2.setSalaray(80000);
    E2.setId(2);

    cout << "\nModified data!!" << endl;
    E1.display();
    E2.display();

    E1.showData(E1);

    Employee E3 = E1.returnCopy();
    E3.display();

    cout << "\nTotal employees at end: " << Employee::getEmployeeCount() << endl;

    return 0;
}
