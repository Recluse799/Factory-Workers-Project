// Team Leader Class definition - header file & implementation
// 
// TeamLeader.cpp


#include "TeamLeader.h"
#include <string>
#include <iostream>
#include <iomanip> // for set precision, fixed and setw
#include "Employee.h"
#include "ProductionWorker.h"

using namespace std;

TeamLeader::TeamLeader(const string& Nam, int EmployeeNum, const string& HireDate, int Shift,
    double HourlyPay, double MonthlyBonus, int RequiredTrainingHours, int AttendedTrainingHours)
    : ProductionWorker(Nam, EmployeeNum, HireDate, Shift, HourlyPay), monthlyBonus(MonthlyBonus),
    requiredTrainingHours(RequiredTrainingHours), attendedTrainingHours(AttendedTrainingHours) {}

void TeamLeader::print() const 
{
    ProductionWorker::print();
    cout << "Monthly Bonus: $" << monthlyBonus << "\n"
        << "Required Training Hours: " << requiredTrainingHours << "\n"
        << "Attended Training Hours: " << attendedTrainingHours << "\n";
}


