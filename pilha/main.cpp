#include"Pilha.h"

int main()
{
	Pilha p;
	int ask = 0;
	do
	{
		cout << "[1]Inserir\n[2]Remover\n[3]Apresentar quantos elementos ja se tem\n[4]Apresentar itens\n[0]sair\n\n\n\tESCOLHA UMA DAS OPCOES ACIMA: ";
		cin >> ask;
		switch (ask)
		{
		case 1:
			p.insert();
			break;
		case 2:
			p.remove();
			break;
		case 3:
			p.getQuant();
			break;
		case 4:
			p.print();
			break;
		case 0:
			break;
		default:
			cout << "Não existe essa opcao. Por favor, tente novamente!" << endl;
			break;
		}
	} while (ask != 0);

	return 0;
}
