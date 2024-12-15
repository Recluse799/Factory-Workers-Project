// ShiftSupervisor Class definition - header file & implementation
// ShiftSupervisor.cpp


#ifndef SHIFTSUPERVISOR_H // different way to read once
#define SHIFTSUPERVISOR_H


#include <string>
#include <iostream>
#include <iomanip> // for set precision, fixed and setw
#include "ShiftSupervisor.h"
#include "Employee.h"

using namespace std;

class ShiftSupervisor : public Employee 
{

public:
    ShiftSupervisor(const string& Nam, int EmployeeNum, const string& HireDate, double AnnualSalary,
        double AnnualBonus) : Employee(Nam, EmployeeNum, HireDate), annualSalary(AnnualSalary),
        annualBonus(AnnualBonus) {}

    //Pre condition: get annualSalary, validation

    int getannualSalary()const  // validation Std library function to check if a character is a digit
    {
        {
            string empannualSalary = to_string(annualSalary); // Convert int to string

            // Check if the string contains only digits
            for (char c : empannualSalary)
            {
                if (!isdigit(c))
                {
                    cout << "Invalid employee number: contains non-digit characters" << endl;
                    return -1; // Return -1 or another sentinel value to indicate invalid number
                }
            }

            return annualSalary; // If valid, return the original shifte number
        }
    }

    //Postcondition: returns the annualSalary if valid

    int getannualBonus()const  // Preconditon: get annual Bonus, validation Std library function to 
        //check if a character is a digit
    {
        {
            string empannualBonus = to_string(annualBonus); // Convert int to string

            // Check if the string contains only digits
            for (char c : empannualBonus)
            {
                if (!isdigit(c))
                {
                    cout << "Invalid employee number: contains non-digit characters" << endl;
                    return -1; // Return -1 or another sentinel value to indicate invalid number
                }
            }

            return annualBonus; // If valid, return the original shifte number
        }
    }

    //Postcondition: returns the annualBonus if valid

    void print() const
    {
            Employee::print();
            cout << fixed << setprecision(2) << setw(8) << "Annual Salary: $" << annualSalary << "\n"
                 << "Annual Bonus: $" << annualBonus << "\n";
    }  //void print() const override; and void ShiftSupervisor::print() const {} used in header / cpp 

   

private:

    double annualSalary;
    double annualBonus;
    

};

#endif // SHIFTSUPERVISOR_H