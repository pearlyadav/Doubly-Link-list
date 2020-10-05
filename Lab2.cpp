#include <iostream>
#include "Data.h"
#include "Element.h"

using namespace std;

int main()
{
	Element* pList = new Element(Data("Elliott", 12345, "CompSci"));
	cout<<"\tElliot\n";
	pList->DisplayList();

	//Push Front Test
	Element newE(Data("John", 23456, "Engineering"));
	pList = pList->PushFront(&newE);
	cout<<"\tJohn, Elliot\n";
	pList->DisplayList();

	//Push Back Test
	Element newE2(Data("Jane", 23456, "Law"));
	pList->PushBack(&newE2);
	cout<<"\tJohn, Elliot, Jane\n";
	pList->DisplayList();

	//Insert an element Test
	Element newE3(Data("Mickey Mouse", 555, "Disney University"));
	pList->addElement("John", &newE3);
	cout<<"\t\n";
	pList->DisplayList();

	Element newE4(Data("Danald Duck", 777, "Disney University"));
	pList->addElement("Elliott", &newE4);
	cout<<"\t\n";
	pList->DisplayList();

	cout<<"Insertion All done\n\n\n";

	//Pop Front Test
	// pList = pList->PopFront();
	// pList->DisplayList();

	//Pop Back Test
	pList = pList->PopBack();
	// cout<<"\t\n";
	// pList->DisplayList();

	//Remove Test
	// pList = pList->removeElement("Elliott");
	cout<<"\t\n";
	pList->DisplayList();
	   
	return 1;
}