#pragma once
#include "tinyxml.h"

class Venue_From_XML
{
public:
	static Venue* Get_Venue_From_XML(string filename);

private:
	static Address* Get_Address(TiXmlNode* address_node);
	static Seat_Row* Get_Seats(TiXmlNode* seat_row_node);
	static Seat_Row* Get_Seat_Row(TiXmlNode* seat_row_node);
	static Seat* Get_Seat(TiXmlNode* seat_node);
};