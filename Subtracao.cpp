#include<iostream>
#include"Subtracao.h"

using namespace std;

Subtracao :: Subtracao(){
    this->a = 0;
    this->b = 0;
}

void Subtracao :: getA(float a){
    this->a = a;
}

float Subtracao :: setA(){
    return a;
}

void Subtracao :: getB(float b){
    this->a = b;
}

float Subtracao :: setB(){
    return b;
}

void Subtracao :: calculo(){
    cout << endl;
    cout << "Qual o primeiro valor? ";
    cin >> this->a;
    cout << "Qual o segundo valor? ";
    cin >> this->b;
    cout << "A subtracao entre " << this->a << " e " << this->b << " e igual a " << this->a - this->b << "." << endl;
    cout << endl;
}