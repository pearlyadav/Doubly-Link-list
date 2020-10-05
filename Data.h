#pragma once
#include <iostream>

using namespace std;

class Data
{
	string Name;			//name of the student
	unsigned int SN;		//student number
	string Program;			//The program the student is enrolled in

public:
	Data();										//Default Constructor
	Data(string, unsigned int, string);			//overloaded contrustor
	void Display();								//Display the data element information
	string getName();							//Returns the name of the data
};
