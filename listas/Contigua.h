#include"Pessoa.h"

class Contigua
{
	public:
		Contigua();
		Contigua(int tam);
		
		void shiftEnd(int index);
		void insert(Pessoa p, int index);
				
		void shiftFront(int index);
		void remove(int index);
		
		void print();

	private:
		int tam;
		int quant;
		Pessoa* lista;
};
