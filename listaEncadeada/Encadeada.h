#include"Nodo.h"

class Encadeada
{
    public:
        Encadeada();

        void insert();
        void remove();

        void insert(int n);
        void remove(int n);

        Nodo* getElement(int n);

    private:
        int quant;
        Nodo* head;
};