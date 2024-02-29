#include"Nodo.h"

#pragma once
class Pilha
{
public:
	Pilha();

	void insert();
	void remove();

	void getQuant();

	void print();

private:
	int quant;
	Nodo* head;
};

