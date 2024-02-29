#include "Nodo.h"

Nodo::Nodo()
{
	next = NULL;
}

Nodo::Nodo(Pessoa item)
{
	this->item = item;
	next = NULL;
}

Pessoa Nodo::getItem()
{
	return this->item;
}

Nodo* Nodo::getNext()
{
	return this->next;
}

void Nodo::setItem(Pessoa item)
{
	this->item = item;
}

void Nodo::setNext(Nodo* next)
{
	this->next = next;
}

