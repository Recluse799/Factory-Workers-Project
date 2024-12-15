// Production Worker Class definition - header file & implementation

#pragma once // remember, can use #ifndef EMPLOYEE_H , #define EMPLOYEE_H, #endif // EMPLOYEE_H

#include <string>
#include <iostream>
#include <iomanip> // for set precision, fixed and setw
#include "Employee.h"

using namespace std;


class ProductionWorker : public Employee
{

public:

    // Pre condition: get production worker parametes and validate
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

         // Begins inline member functions, 
         
         // Post conditon: assign values for print, and send to print, or goes to default
    }

        //Pre condition: get shift number, validation
        
        int getshift()const  // validation Std library function to check if a character is a digit
  {
      {
          string empshift = to_string(shift); // Convert int to string

          // Check if the string contains only digits
          for (char c : empshift) 
          {
              if (!isdigit(c)) 
              {
                  cout << "Invalid employee number: contains non-digit characters" << endl;
                  return -1; // Return -1 or another sentinel value to indicate invalid number
              }
          }

          return shift; // If valid, return the original shifte number
      }
  }
  
//Postcondition: returns the name,employee number, and hiredate if valid


   void print() const  // virtual void print() const
        /// Postcondition: accepts parameters to print
        //Postcondition: r
    {       
        Employee::print();
        
        string shiftName = (shift == 1) ? "Day" : (shift == 2) ? "Night" : "Invalid";  //could use if-else,or switch
        cout << "Shift: " << shiftName << " shift" << "\n";
        cout << fixed << setprecision(2) << setw(8) << "Hourly Pay Rate: $" << hourlyPay << "\n";
         
    }

protected:
    int shift;  // 1 for day shift and 2 for nighy shift
    double hourlyPay;  // hourly pay either day is 20.25 or night is 25.50
    
};

