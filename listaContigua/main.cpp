#include"Contigua.h"

int main()
{
	Pessoa p;
	p.fill();
	p.print();	

	Contigua c(10);
	
	c.insert(p, 0);
	
	

	return 0;
}
