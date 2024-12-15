// Team Leader Class definition - header file & implementation

// TeamLeader.h
#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <string>
#include <iostream>
#include <iomanip> // for set precision, fixed and setw
#include "Employee.h"
#include "ProductionWorker.h"

using namespace std;


class TeamLeader : public ProductionWorker 
{
public:
    TeamLeader(const string& Nam, int EmployeeNum, const string& HireDate, int Shift,
        double HourlyPay, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours);

    //Pre condition: get requiredTrainingHours, validation

    int getrequiredTrainingHours()const  // validation Std library function to check if a character is a digit
    {
        {
            string emprequiredTrainingHours = to_string(requiredTrainingHours); // Convert int to string

            // Check if the string contains only digits
            for (char c : emprequiredTrainingHours)
            {
                if (!isdigit(c))
                {
                    cout << "Invalid employee number: contains non-digit characters" << endl;
                    return -1; // Return -1 or another sentinel value to indicate invalid number
                }
            }

            return requiredTrainingHours; // If valid, return the original shifte number
        }
    }

    //Postcondition: returns the annualSalary if valid

    int getattendedTrainingHours()const  // Preconditon: get annual Bonus, validation Std library function to 
        //check if a character is a digit
    {
        {
            string empattendedTrainingHours = to_string(attendedTrainingHours); // Convert int to string

            // Check if the string contains only digits
            for (char c : empattendedTrainingHours)
            {
                if (!isdigit(c))
                {
                    cout << "Invalid employee number: contains non-digit characters" << endl;
                    return -1; // Return -1 or another sentinel value to indicate invalid number
                }
            }

            return attendedTrainingHours; // If valid, return the original shifte number
        }
    }

    //Postcondition: returns the annualBonus if valid
    void print() const;  // if put override ensures base clas has a virtual print method in ProductionWorker

private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;
};
#endif // TEAMLEADER_H
