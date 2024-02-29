#include "Pilha.h"

Pilha::Pilha()
{
	quant = 0;
	head = NULL;
}

void Pilha::insert()
{
	Pessoa p;
	p.fill();
	Nodo* novo = new Nodo(p);
	novo->setNext(head);
	head = novo;
	quant++;
}

void Pilha::remove()
{
	head = head->getNext();
	quant--;
}
void Pilha::getQuant()
{
	cout << "Quantidade: " << quant << endl;
	cout << endl;
}

void Pilha::print()
{
	Nodo* p = head;
	int i = 0;
	while (i < quant)
	{
		if (p->getNext() != NULL)
		{
			p->getItem().print();
			i++;
			p = p->getNext();
		}
		else
		{
			p->getItem().print();
			i++;
		}
	}
}