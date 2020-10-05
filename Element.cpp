#include <iostream>
#include "Element.h"

Element::Element(Data data) {
	ElementData = data;
	pPrev = pNext = nullptr;
}

Element* Element::PushFront(Element* element) {
	Element* tmp = this;
	element->pPrev = nullptr;
	element->pNext = this;
	if(tmp!=nullptr)
		tmp->pPrev = nullptr;
	tmp = element;
	return tmp;
}
Element* Element::PopFront() {
	Element* tmp = this, *del;
	if(tmp==nullptr)
		return tmp;
	else if(tmp->pNext == nullptr){
		tmp = nullptr;
		delete(tmp);
		return nullptr;
	}
	else{
		cout<<"hja";
		del = tmp;
		tmp = tmp->pNext;
		tmp->pPrev = nullptr;
		free(del);
		return tmp;
	}
}
bool Element::PushBack(Element* element) {
	element->pNext = nullptr;
	Element* tmp = this;
	if(tmp==nullptr) {
		tmp->pPrev = nullptr;
		tmp = element;
		return true;
	}
	while(tmp->pNext != nullptr)
		tmp = tmp->pNext;
	tmp->pNext = element;
	element->pPrev = tmp;
	return true;
}
Element* Element::PopBack() {
	Element* tmp = this, *del;
	if(tmp==nullptr)
		return tmp;
	else if(tmp->pNext == nullptr){
		tmp = nullptr;
		delete(tmp);
	}
	del = tmp;
	while(del->pNext != nullptr)
		del = del->pNext;
	del->pPrev->pNext = nullptr;
	// delete(del);
	return tmp;
}

bool Element::addElement(string s, Element* element) {
	Element* tmp = this;
	while(tmp->pNext){
		if(s == tmp->ElementData.getName()){
			element->pNext = tmp->pNext;
			element->pPrev = tmp;
			tmp->pNext = element;
			return true;
		}
		tmp = tmp->pNext;
	}
	return false;
}
Element* Element::removeElement(string s) {
	Element* tmp = this;
	Element* del = nullptr;
	while(tmp->pNext){
		if(s == tmp->ElementData.getName()){
			del = tmp;
			break;
		}
		tmp = tmp->pNext;
	}
	tmp = this;
	if(del!=nullptr){
		if(tmp==del)
			tmp = del->pNext;
		else if(del->pNext != nullptr)
			del->pNext->pPrev = del->pPrev;
		else if(del->pPrev != nullptr)
			del->pPrev->pNext = del->pNext;
		delete(del);
	}
	return tmp;	
}

void Element::DisplayList() {
	Element* tmp = this;
	while(tmp != nullptr){
		tmp->ElementData.Display();
		tmp = tmp->pNext;
	}
}