#pragma once
#include <iostream>
#include <string>
#include "Section.h"
#include "Venue.h"

class Venue_From_User
{
public:
	static Venue* Get_Venue_From_User();

private:
	static void Add_Seat_Rows(Venue* venue);
	static void Add_Sections(Venue* venue);
};
