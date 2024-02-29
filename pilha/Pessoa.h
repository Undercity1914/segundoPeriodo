#include<string>
#include<iostream>

using namespace std;

#pragma once
class Pessoa
{
public:
	Pessoa();

	string getNome();
	int getIdade();

	void setNome(string nome);
	void setIdade(int idade);

	void fill();
	void print();

	void copy(Pessoa outro);

private:
	string nome;
	int idade;
};

