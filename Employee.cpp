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

/*// ProductionWorker.h
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift;
    double hourly_pay_rate;

public:
    ProductionWorker(const std::string &name, int employee_number, const std::string &hire_date, int shift, double hourly_pay_rate);

    void print() const override;
};

#endif // PRODUCTIONWORKER_H

// ProductionWorker.cpp
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(const std::string &name, int employee_number, const std::string &hire_date, int shift, double hourly_pay_rate)
    : Employee(name, employee_number, hire_date), shift(shift), hourly_pay_rate(hourly_pay_rate) {}

void ProductionWorker::print() const {
    Employee::print();
    std::string shift_name = (shift == 1) ? "Day" : "Night";
    std::cout << "Shift: " << shift_name << "\n"
              << "Hourly Pay Rate: $" << hourly_pay_rate << "\n";
}
// ShiftSupervisor.h
#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annual_salary;
    double annual_bonus;

public:
    ShiftSupervisor(const std::string &name, int employee_number, const std::string &hire_date, double annual_salary, double annual_bonus);

    void print() const override;
};

#endif // SHIFTSUPERVISOR_H

// ShiftSupervisor.cpp
#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(const std::string &name, int employee_number, const std::string &hire_date, double annual_salary, double annual_bonus)
    : Employee(name, employee_number, hire_date), annual_salary(annual_salary), annual_bonus(annual_bonus) {}

void ShiftSupervisor::print() const {
    Employee::print();
    std::cout << "Annual Salary: $" << annual_salary << "\n"
              << "Annual Bonus: $" << annual_bonus << "\n";
}

// TeamLeader.h
#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthly_bonus;
    int required_training_hours;
    int attended_training_hours;

public:
    TeamLeader(const std::string &name, int employee_number, const std::string &hire_date, int shift, double hourly_pay_rate, double monthly_bonus, int required_training_hours, int attended_training_hours);

    void print() const override;
};
#endif // TEAMLEADER_H

// TeamLeader.cpp
#include "TeamLeader.h"

TeamLeader::TeamLeader(const std::string &name, int employee_number, const std::string &hire_date, int shift, double hourly_pay_rate, double monthly_bonus, int required_training_hours, int attended_training_hours)
    : ProductionWorker(name, employee_number, hire_date, shift, hourly_pay_rate), monthly_bonus(monthly_bonus), required_training_hours(required_training_hours), attended_training_hours(attended_training_hours) {}

void TeamLeader::print() const {
    ProductionWorker::print();
    std::cout << "Monthly Bonus: $" << monthly_bonus << "\n"
              << "Required Training Hours: " << required_training_hours << "\n"
              << "Attended Training Hours: " << attended_training_hours << "\n";
}
string Employee::getname() const {
    // Check if the name is empty
    if (name.empty()) {
        return "No Name Provided";
    }

    // Check if the name contains any digits
    for (char c : name) {
        if (isdigit(c)) { // Standard library function to check if a character is a digit
            return "Invalid Name (contains numbers)";
        }
    }

    // If both checks pass, return the name
    return name;
}
#include <regex>

string Employee::gethireDate() const {
    // Define a regular expression for the MM/DD/YYYY format
    std::regex datePattern(R"(\d{2}/\d{2}/\d{4})");

    if (!std::regex_match(hireDate, datePattern)) {
        return "Invalid hire date format";
    }

    return hireDate; // Return the valid date
}
Regex Explanation:
\d{2}: Matches exactly two digits for the month and day.
/: Matches the slash character.
\d{4}: Matches exactly four digits for the year.

*/