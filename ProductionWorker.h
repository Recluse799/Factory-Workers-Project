// Production Worker Class definition - header file

#pragma once // remember, can use #ifndef EMPLOYEE_H , #define EMPLOYEE_H, #endif // EMPLOYEE_H

#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;


class ProductionWorker : public Employee
{

public:
    ProductionWorker(const string& Nam, int EmployeeNum, const string& HireDate, int Shift, double HourlyPay)
        : Employee (Nam, EmployeeNum, HireDate), shift(Shift),hourlyPay(HourlyPay) // needs to be public terms
    {
         if (shift == 1 || shift == 2)  // Validation of shift value, Pre condition accept intstance variables
         {
             hourlyPay = (shift == 1) ? 20.25 : 25.50;
         }
         else
         {
             cout << "Invalid shift. Hourly pay cannot be determined" << "\n";
             hourlyPay = 0.0;
         }

         // Post conditon: assign values for print, or goes to default
    }

    void print() const
    {
        Employee::print();
        string shiftName = (shift == 1) ? "Day" : (shift == 2) ? "Night" : "Invalid";  //could use if-else,or switch
        cout << "Shift: " << shiftName << " shift" << "\n";
        cout << "Hourly Pay Rate: $" << hourlyPay << "\n";
    }

private:
    int shift;  // 1 for day shift and 2 for nighy shift
    double hourlyPay;  // hourly pay either day is 20.25 or night is 25.50
    
};

