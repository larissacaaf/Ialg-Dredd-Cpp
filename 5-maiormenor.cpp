/*

Faça um programa que leia um vetor de números inteiros, encontre e escreva o maior e o menor elemento e suas respectivas posições.

Entradas:

    a quantidade de elementos do vetor
    cada elemento do vetor

Saídas:

    o maior valor do vetor
    o menor valor do vetor
    o índice do maior valor do vetor
    o índice do menor valor do vetor

É obrigatório que a leitura de todos os elementos do vetor seja feita antes do processamento dos elementos do vetor.

Exemplo de entrada:

4
2 5 7 3

Exemplo de saída:

7 2 2 0

*/

#include <iostream>

using namespace std;

int main(){

    int tamanho;
    cin >> tamanho; //quantidade de elementos

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){ // preenche o vetor

        cin >> vetor[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];
    int indiceMaior = 0;
    int indiceMenor= 0;

    for(int i = 0; i < tamanho; i++){

        if(vetor[i] > maior){

            maior = vetor[i];
            indiceMaior = i;
        }

        if(vetor[i] < menor){

            menor = vetor[i];
            indiceMenor = i;
        }
    }

    cout << maior << " " << menor << " " << indiceMaior << " " << indiceMenor;

    return 0;
}