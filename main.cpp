#include<iostream>
#include"Soma.h"
#include"Multiplicacao.h"
#include"Subtracao.h"
#include"Divisao.h"
#include"Raiz.h"
#include"Equ_seg_grau.h"
#include"Distancia.h"

using namespace std;

int main(){

    Soma soma;
    Multiplicacao multi;
    Subtracao sub;
    Divisao div;
    Equ_seg_grau eq;
    Distancia dist;
    Raiz raiz;

    int res = -1;

    cout << "-----------------INICIO DO PROGRAMA------------------" << endl;
    cout << endl;

    while(res != 0){
        cout << "O que voce quer calcular dentre as opcoes abaixo: " << endl;
        cout << "1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Raiz\n6 - Distancia entre dois pontos" << endl;
        cout << "7 - Equacao do segundo grau\n0 - Sair\n(DIGITE SUA OPCAO AQUI): ";
        cin >> res;

        switch(res){
            case 1: 
                soma.calculo();
                break;
            case 2:
                sub.calculo();
                break;
            case 3:
                div.calculo();
                break;
            case 4:
                multi.calculo();
                break;
            case 5:
                raiz.calculo();
                break;
            case 6: 
                dist.calculo();
                break;
            case 7:
                eq.calculo();
                break;
            case 0:
                break;
            default:
                cout << "Essa opcao nao existe, tente novamente!" << endl;
                break;
        }
    }

    cout << endl;

    cout << "-------------------FIM DO PROGRAMA-------------------" << endl;

    return 0;
}