#include<iostream>
#include"Multiplicacao.h"

using namespace std;

Multiplicacao :: Multiplicacao(){
    this->a = 0;
    this->b = 0;
}

void Multiplicacao :: getA(float a){
    this->a = a;
}

float Multiplicacao :: setA(){
    return a;
}

void Multiplicacao :: getB(float b){
    this->a = b;
}

float Multiplicacao :: setB(){
    return b;
}

void Multiplicacao :: calculo(){
    cout << endl;
    cout << "Qual o primeiro valor? ";
    cin >> this->a;
    cout << "Qual o segundo valor? ";
    cin >> this->b;
    cout << "A multiplicacao entre " << this->a << " e " << this->b << " e igual a " << this->a * this->b << "." << endl;
    cout << endl;
}