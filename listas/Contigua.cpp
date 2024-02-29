#include"Contigua.h"

Contigua::Contigua()
{
	tam = 0;
	quant = 0;
}

Contigua::Contigua(int tam)
{
	this->tam = tam;
	quant = 0;
	lista = new Pessoa[tam];
}

void Contigua::shiftEnd(int index)
{
	for(int i = quant;i > index;i--)
		lista[i].copy(lista[i - 1]);	
}

void Contigua::insert(Pessoa p, int index)
{
	if(quant < tam)
	{
		shiftEnd(index);
		lista[index] = p;
		quant++;
	}
	else
		cout << "Lista cheia." << endl;
}

void Contigua::shiftFront(int index)
{
	for(int i = index; i < quant; i++)
		lista[i].copy(lista[i + 1]);
}

void Contigua::remove(int index)
{
	if(quant != 0)
	{
		shiftFront(index);
		quant--;
	}
	else
		cout << "Lista vazia." << endl;
}



















