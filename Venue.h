#pragma once
#include <string>
#include <iostream>
#include <cassert>
#include <iterator>
#include <map>
#include "Address.h"
#include "Seat.h"
#include "Seat_Row.h"
#include "Section.h"

class Venue
{
public:
    static const int MAX_SEAT_ROWS = 1000;
    static const int MAX_SECTIONS = 1000;

private:
    string venue_name;
    Address address;
    const Seat_Row* seat_rows[MAX_SEAT_ROWS];
    const Section* sections[MAX_SEAT_ROWS];
    int number_of_seat_rows;
    int number_of_sections;

public:
    Venue(const string& venue_name_, const Address address_);

    void Add_Seat_Row(const string& Row_Name, int Number_of_Seats);
    void Add_Section(const Section* section);
	int Capacity() const;
    void Display() const;
    void Display_All() const;
    int Number_of_Seat_Rows() const { return number_of_seat_rows; };

    const Seat_Row* Get_Seat_Row(string Row_Name) const;
    const Seat_Row* Get_Seat_Row(int index) const;
};