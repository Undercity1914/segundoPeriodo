#include<iostream>
#include<math.h>
#include"Distancia.h"

using namespace std;

Distancia :: Distancia(){
    this->x1 = 0;
    this->x2 = 0;
    this->y1 = 0;
    this->y2 = 0;
}

void Distancia :: getA(float x1){
    this->x1 = x1;
}

float Distancia :: setA(){
    return x1;
}

void Distancia :: getB(float x2){
    this->x2 = x2;
}

float Distancia :: setB(){
    return x2;
}

void Distancia :: getC(float y1){
    this->y1 = y1;
}

float Distancia :: setC(){
    return y1;
}

void Distancia :: getD(float y2){
    this->y2 = y2;
}

float Distancia :: setD(){
    return y2;
}

void Distancia :: calculo(){
    cout << endl;
    cout << "Digite o valor de x1: ";
    cin >> this->x1;
    cout << "Digite o valor de y1: ";
    cin >> this->y1;
    cout << "Digite o valor de x2: ";
    cin >> this->x2;
    cout << "Digite o valor de y2: ";
    cin >> this->y2;

    float dist = sqrt(pow((x1-x2), 2) + pow((y1 - y2), 2));

    cout << "A distancia entre o ponto (" << this->x1 << ", " << this->y1 << ") e o ponto (" << this->x2 << ", " << this->y2;
    cout << ") e igual a " << dist << "." << endl;
    cout << endl;
}