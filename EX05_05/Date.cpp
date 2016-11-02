#include "Date.h"
#include <ctime>

Date::Date()
{
	//Calculates all the parts of the date using the time in seconds since January 1, 1970
	int seconds = time(0); 
	year = 1970 + (seconds / 31540000);
	int months = seconds % 31540000;
	month = months / 2628000;
	int days = months % 2628000;
	day = days / 86400;
}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::setDate(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

string Date::printDate() //Concatinates all three numbers into a date format
{
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}
