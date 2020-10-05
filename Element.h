#pragma once
#include "Data.h"

class Element
{
	Data ElementData;	//Data Object containing the student name, number and registered program
	Element* pPrev;		//pointer to the previous element
	Element* pNext;		//pointer to the next element in the list

public:
	Element(Data);						//Default constructor

	//Push & Pop Functions
	Element* PushFront(Element*);		//Push a new element onto the front of the list
	Element* PopFront();				//Pop an element off the front of the list
	bool PushBack(Element*);			//Push a new element onto the back of the list
	Element* PopBack();					//Pop an element off the back of the list

	//Add & Remove
	bool addElement(string, Element *);		//Add an element into the list
	Element* removeElement(string);			//Remove an element from the list

	void DisplayList();				//Recurse through the list and display all the data
};
