// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
//#include "ShiftSupervisor.h"
//#include "TeamLeader.h"

using namespace std;

int main() {

    cout << "=== Employee ===\n";
    Employee worker ("Immanuel Braxton", 7799, "10/28/2024");
    worker.print(); 


    cout << "=== Production Worker ===\n";
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    worker1.print();

    cout << "\n=== Production Worker ===\n";
    //ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);
    //worker2.print();

    cout << "\n=== Shift Supervisor ===\n";
    //ShiftSupervisor supervisor("Elmer Velasquez", 100325, "1/17/2024", 70000.00, 1000.00);
    //supervisor.print();

    cout << "\n=== Team Leader ===\n";
   // TeamLeader team_leader("Mike Rogers", 64327, "2/7/2024", 2, 25.50, 150.00, 20, 10);
    //team_leader.print();

    return 0;
}