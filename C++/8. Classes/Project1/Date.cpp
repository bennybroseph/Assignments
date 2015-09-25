#include "Date.h"

Date_Class::Date_Class(Date_Class::Date_Struct p_Date)
{
	this->Date.d = p_Date.d;
	this->Date.m = p_Date.m;
	this->Date.y = p_Date.y;
}

Date_Class::Date_Struct Date_Class::GetDate()
{
	return this->Date;
}

void Date_Class::SetDate(Date_Class::Date_Struct p_Date)
{
	this->Date = p_Date;
}

Date_Class::~Date_Class()
{
}
