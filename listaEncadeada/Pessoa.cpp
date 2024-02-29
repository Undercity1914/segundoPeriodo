#include"Pessoa.h"
#include<iostream>

Pessoa::Pessoa()
{
    nome = "";
    idade = 0;
}

string Pessoa::getNome()
{
    return this->nome;
}

int Pessoa::getIdade()
{
    return this->idade;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::fill()
{
    cout << "----------------------Preenchimento-----------------------\n" << endl;

    cout << "Nome: ";
    cin >> this->nome;
    cout << "Idade: ";
    cin >> this->idade;

    cout << "\n------------------Fim de Preenchimento--------------------\n" << endl;
}

void Pessoa::print()
{
    cout << "------------------------Apresentacao--------------------------\n" << endl;

    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;

    cout << "\n-------------------Fim da Apresentacao----------------------\n" << endl;
}

void Pessoa::copy(Pessoa outro)
{
    this->nome = outro.getNome();
    this->idade = outro.getIdade();
}