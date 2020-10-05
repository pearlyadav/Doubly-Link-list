#include <iostream>
#include "Data.h"

//Safe empty state
Data::Data()
{
	Name = "Unknown";
	SN = 0;
	Program = "Not Enrolled";
}

Data::Data(string NameStr, unsigned int sNumber, string Prog) :
	Name(NameStr), SN(sNumber), Program(Prog) {};

void Data::Display()
{
	cout << Name.c_str() << ": (" << SN << ") - " << Program.c_str() << endl;
}

string Data::getName() { return Name; }
