#include<iostream>
#include"Raiz.h"
#include<math.h>

using namespace std;

Raiz :: Raiz(){
    this->a = 0;
    this->b = 0;
}

void Raiz :: getA(float a){
    this->a = a;
}

float Raiz :: setA(){
    return a;
}

void Raiz :: getB(float b){
    this->a = b;
}

float Raiz :: setB(){
    return b;
}

void Raiz :: calculo(){
    cout << endl;
    cout << "Qual o indice da raiz? ";
    cin >> this->a;
    cout << "Qual o radicando da raiz? ";
    cin >> this->b;

    cout << "O resultado da raiz de indice " << a << " e radicando " << b << " e igual a " << pow(b, (1/a)) << "." << endl;
    cout << endl;
}