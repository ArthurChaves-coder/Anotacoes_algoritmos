#include<iostream>
#include<string>
#include<ctime>
#define TAM 10

using namespace std;

#include "util.h"

int main(){
    int vetor[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);

    // int qtdPares = calcularPares(vetor, TAM); // serve para guardar em uma variavel
    // ulil.h para fazer as operações

    cout << "a quantidade de pares no vetor e de " << calcularPares(vetor, TAM) << "\n"; // apenas para mostrar na tela. sem salvar na variavel

    return 1;
}
