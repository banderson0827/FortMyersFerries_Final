// FortMyersFerries_Backend.cpp : This file contains the 'main' function. Program execution begins and ends there.




#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <sqlite3.h>
#include "Observer.h"
#include "Ferry.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "FerryData.h"
#include "DatabaseConnection.h"
#include "CurrentFerriesDisplay.h"





int main()
{
	DatabaseConnection DB;
	FerryData *ferryData = new FerryData;
	CurrentFerriesDisplay *currentFerriesDisplay = new CurrentFerriesDisplay(*ferryData);
	const char* dir = R"(C:\FerryDB\FERRIES.db)";

	DB.createDB(dir);
	DB.createTable(dir);
	//DB.deleteData(dir); // use prior to insert
	//DB.insertData(dir); // uncomment the deleteData above to avoid duplicates
	//DB.updateData(dir);
	//DB.selectData(dir);

	//Re-organize and delete the manual setting of data below
	//Ferry ferry1 = new Ferry(150.00, 180, "01/15/2023", "4:30 PM", 67, 125);
	//Ferry ferry2 = new Ferry(135.00, 140, "01/17/2023", "12:45 PM", 32, 125);
	//std::list<Ferry> availableFerries;
	//availableFerries.push_back(ferry1);
	//availableFerries.push_back(ferry2);
	//ferryData.setFerries(availableFerries);
	//End test harness

	/*std::cout << "If you would like to purchase a ticket to one of the listed Ferries, please enter the number of the Ferry now: " << '\t';
	int inputSelection = std::cin;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file