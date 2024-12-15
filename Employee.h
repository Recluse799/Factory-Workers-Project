// Employee Class definition - header file



#pragma once // only in header file, not implelmentation,  remember, can use #ifndef EMPLOYEE_H , 
//#define EMPLOYEE_H, #endif // EMPLOYEE_H for guaranteed commpatibility, no ambiguity no file dependency

#include <string>
#include <iostream>

using namespace std;

class Employee
{
public:
    Employee(const string& Nam, int EmployeeNum, const string& HireDate);
    /* constructor declared with initialization list, constructor definition cannot be included in the headerfile.*/


    //Pre-condition: gets employee variables
    //Post condition: hold employee name, number and hire date
    string getname()const;
    int getemployeeNumber()const;
    string gethireDate()const;



    void print() const;  //Pre-condition: acccepts employee test variables
    //Post condition: print employee name,number, and hire date

    protected:    // allows inherited to see, but not public
        string name;
        int employeeNumber;
        string hireDate;

    
};

