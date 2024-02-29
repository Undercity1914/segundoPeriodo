#include"Pessoa.h"

class Nodo
{
    public:
        Nodo();
        Nodo(Pessoa item);

        Pessoa getItem();
        Nodo* getNext();

        void setItem(Pessoa item);
        void setNext(Nodo* next);

    private:
        Pessoa item;
        Nodo* next;
};