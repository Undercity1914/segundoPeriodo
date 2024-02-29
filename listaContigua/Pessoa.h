#include<string>
#include<iostream>

using namespace std;

class Pessoa
{
	public:
		Pessoa();
		
		int getIdade();
		string getNome();
		
		void setIdade(int idade);
		void setNome(string nome);
		
		void fill();
		void print();
		
		void copy(Pessoa outro);
	
	private:
		int idade;
		string nome;
};
