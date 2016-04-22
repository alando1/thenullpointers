#include <iostream>

#include "Venue.h"
#include "Venue_From_User.h"
#include "Venue_From_XML.h"
#include "menu.h"
#include "Command_Processor.h"

using namespace std;

int main()
{

	//alan sucks peni
	cout << "This is the Level 1 Ticket Booth program!" << endl;

	Venue_From_XML ven;
	ven.Get_Venue_From_XML();
	
	Command_Processor::Process_Commands(ven.venues(), ven.size());

	cout << "\nNormal Termination ";
	//cin.get();
	return 0;
}
