#include<iostream>
#include"Divisao.h"

using namespace std;

Divisao :: Divisao(){
    this->a = 0;
    this->b = 0;
}

void Divisao :: getA(float a){
    this->a = a;
}

float Divisao :: setA(){
    return a;
}

void Divisao :: getB(float b){
    this->a = b;
}

float Divisao :: setB(){
    return b;
}

void Divisao :: calculo(){
    cout << endl;
    cout << "Qual o primeiro valor? ";
    cin >> this->a;
    cout << "Qual o segundo valor? ";
    cin >> this->b;
    cout << "A divisao entre " << this->a << " e " << this->b << " e igual a " << this->a / this->b << "." << endl;
    cout << endl;
}