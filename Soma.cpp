#include"Soma.h"
#include<iostream>

using namespace std;

Soma :: Soma(){
    this->a = 0;
    this->b = 0;
}

void Soma :: getA(float a){
    this->a = a;
}

float Soma :: setA(){
    return a;
}

void Soma :: getB(float b){
    this->a = b;
}

float Soma :: setB(){
    return b;
}

void Soma :: calculo(){
    cout << endl;
    cout << "Qual o primeiro valor? ";
    cin >> this->a;
    cout << "Qual o segundo valor? ";
    cin >> this->b;
    cout << "A soma entre " << this->a << " e " << this->b << " e igual a " << this->a + this->b << "." << endl;
    cout << endl;
}