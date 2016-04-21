#include <iostream>

#include "Venue.h"
#include "Venue_From_User.h"
#include "Venue_From_XML.h"
#include "menu.h"
#include "Command_Processor.h"

using namespace std;

int main()
{
	//Venue* venues[999];
	//int nr_states = 0;

	cout << "This is the Level 0 Ticket Booth program!" << endl;

	Venue_From_XML ven;
	ven.Get_Venue_From_XML();
	// Venue** venues = fuckit.venues();



	// int nr_venues = fuckit.size();
	//int num_states = nr_venues;
	
	//cout << endl << "num of elem " << *fuckit.size() << endl;
	/*for (int i = 0; i < 3; ++i)
	{
		venues[i]->Display_All();
		//nr_venues++;
	}*/
	Command_Processor::Process_Commands(ven.venues(), ven.size());

	cout << "\nNormal Termination ";
	//cin.get();
	return 0;
}
