#include"Pessoa.h"

Pessoa::Pessoa()
{
	idade = 0;
	nome = "";
}

int Pessoa::getIdade()
{
	return this->idade;
}

string Pessoa::getNome()
{
	return this->nome;
}

void Pessoa::setIdade(int idade)
{
	this->idade = idade;
}

void Pessoa::setNome(string nome)
{
	this->nome = nome;
}

void Pessoa::fill()
{
	cout << "---------------------Preencimento------------------------\n" << endl;
	
	cout << "Nome: ";
	cin >> this->nome;
	cout << "Idade: ";
	cin >> this->idade;
	
	cout << "\n------------------------Fim de Preenchimento-----------------------\n" << endl;
}

void Pessoa::print()
{
	cout << "-------------------Apresentacao---------------------\n" << endl;
	
	cout << "Nome: " << this->nome << endl;
	cout << "Idade: " << this->idade << endl;
	
	cout << "\n----------------Fim de Apresentacao----------------------\n" << endl;
}

void Pessoa::copy(Pessoa outro)
{
	this->nome = outro.getNome();
	this->idade = outro.getIdade();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
