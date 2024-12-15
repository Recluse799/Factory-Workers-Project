// Employee - Class Implementation file
// Employee.cpp

               // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H

#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(const string& Nam, int EmployeeNum, const string& HireDate)
    : name(Nam), employeeNumber(EmployeeNum), hireDate(HireDate) {}


// Pre condition: get name, employee number, and hiredate 
  string Employee::getname() const { return name.empty() ? "No Name Provided" : name; } //validation
  int Employee::getemployeeNumber()const  // validation Std library function to check if a character is a digit
  {
      {
          string empNumStr = to_string(employeeNumber); // Convert int to string

          // Check if the string contains only digits
          for (char c : empNumStr) {
              if (!isdigit(c)) {
                  cout << "Invalid employee number: contains non-digit characters" << endl;
                  return -1; // Return -1 or another sentinel value to indicate invalid number
              }
          }

          return employeeNumber; // If valid, return the original employee number
      }
  }
  
  string Employee :: gethireDate()const { return hireDate;}    // Begins inline member functions, 
//Postcondition: returns the name,employee number, and hiredate if valid

/// Postcondition: r
 //Postcondition: r


void Employee::print() const 
{
    cout << "Name: " << name << "\n"
        << "Employee Number: " << employeeNumber << "\n"
        << "Hire Date: " << hireDate << "\n";
      
}
