#include<iostream>
#include<math.h>
#include"Equ_seg_grau.h"

using namespace std;

Equ_seg_grau :: Equ_seg_grau(){
    this->a = 0;
    this->b = 0;
}

void Equ_seg_grau :: getA(float a){
    this->a = a;
}

float Equ_seg_grau :: setA(){
    return a;
}

void Equ_seg_grau :: getB(float b){
    this->a = b;
}

float Equ_seg_grau :: setB(){
    return b;
}

void Equ_seg_grau :: getC(float c){
    this->c = c;
}

float Equ_seg_grau :: setC(){
    return c;
}

void Equ_seg_grau :: calculo(){
    cout << endl;
    cout << "Qual o valor de A? ";
    cin >> this->a;
    cout << "Qual o valor de B? ";
    cin >> this->b;
    cout << "Qual o valor de C? ";
    cin >> this->c;

    float x1, x2;

    float delta = pow(b, 2) - (4*a*c);
    // cout << delta << endl;
    if(delta < 0)
        cout << "Essa equacao nao tem raiz real." << endl;
    else{
        cout << "Uma das raizes da funcao e igual a " << ((-b + pow(delta, 0.5))/(2*a));
        cout << " enquanto a outra e igual a " << ((-b - pow(delta, 0.5))/(2*a)) << endl;
    }
    cout << endl;
}