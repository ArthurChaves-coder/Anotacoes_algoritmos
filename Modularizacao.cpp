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

// segue abaixo as anotações do util.h

void popularVetor(int vetor[], int tamanho){
   // rotina para popular o vetor com numeros aleatorios
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
    }
}

void exibirVetor(int vetor[], int tamanho){
    // rotina para mostrar vetor com numeros aleatorios
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << "\n";
    }
}

int calcularPares(int vetor[], int tamanho){ // com retorno
    int contaPares = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 == 0){
            contaPares++;
        }
    }
    
    return contaPares;
}
