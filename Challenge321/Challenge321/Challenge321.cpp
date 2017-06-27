// Challenge321.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string time;
	std::map <std::string, std::string> hours_and_minutes_ones;
	std::map <std::string, std::string> minutes_tens;
	std::map <std::string, std::string> minutes_ones;
	//std::map <std::string, std::string> special_cases;

	hours_and_minutes_ones["01"] = "one ";
	hours_and_minutes_ones["02"] = "two ";
	hours_and_minutes_ones["03"] = "three ";
	hours_and_minutes_ones["04"] = "four ";
	hours_and_minutes_ones["05"] = "five ";
	hours_and_minutes_ones["06"] = "six ";
	hours_and_minutes_ones["07"] = "seven ";
	hours_and_minutes_ones["08"] = "eight ";
	hours_and_minutes_ones["09"] = "nine ";
	hours_and_minutes_ones["10"] = "ten ";
	hours_and_minutes_ones["11"] = "eleven ";
	hours_and_minutes_ones["12"] = "twelve ";

	minutes_tens["0"] = "oh ";
	minutes_tens["1"] = "";
	minutes_tens["2"] = "twenty ";
	minutes_tens["3"] = "thirty ";
	minutes_tens["4"] = "fourty ";
	minutes_tens["5"] = "fifty ";

	std::cout << "Please enter the 24 hour time in the format hh:mm: ";
	std::cin >> time;
	std::string hour = time.substr(0,2);
	std::string m_ten = time.substr(3,1);
	std::string m_one = "0" + time.substr(4,1);
	std::cout << "\nYour time is " << hours_and_minutes_ones[hour];
	if (m_ten != "1") {
		 std::cout << minutes_tens[m_ten] << hours_and_minutes_ones[m_one];
	}
	else {

	}


	return 0;
}

