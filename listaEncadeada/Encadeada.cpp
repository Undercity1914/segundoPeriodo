#include"Encadeada.h"

Encadeada::Encadeada()
{
    quant = 0;
    head = NULL;
}

void Encadeada::insert()
{
    Pessoa p;
    p.fill();
    Nodo* novo = new Nodo(p);
    novo->setNext(head);
    head = novo;
    quant++;
    novo->getItem().print();
}

void Encadeada::remove()
{
    head = head->getNext();
    quant--;
    Nodo* print = head->getNext();
    print->getItem().print();
}

void Encadeada::insert(int n)
{
    Pessoa p;
    p.fill();
    Nodo* anterior = this->getElement(n - 1);
    Nodo* novo = new Nodo(p);
    novo->setNext(anterior->getNext());
    anterior->setNext(novo);
    quant++; 
    novo->getItem().print();  
}

void Encadeada::remove(int n)
{
    Nodo* anterior = this->getElement(n - 1);
    Nodo* out = anterior->getNext();
    anterior->setNext(out->getNext());
    quant--;
    Nodo* print = anterior->getNext();
    print->getItem().print();
}

Nodo* Encadeada::getElement(int n)
{
    Nodo* p = head;
    int i = 1;
    while(1 < n and p->getNext() != NULL)
    {
        p = p->getNext();
        i++;
    }
    if(i == n)
        return p;
    else
        return NULL;
}