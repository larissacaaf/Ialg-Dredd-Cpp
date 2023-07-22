/*
Faça um programa que recebe um vetor V de N elementos e determina, de forma recursiva, o menor elemento do vetor. Podemos usar a seguinte 
ideia:

O menor elemento de um vetor de uma única posição é o seu único elemento.
O menor elemento de um vetor de mais de uma posição é o menor entre o primeiro elemento e o menor do restante do vetor.

Entradas:
Tamanho N do vetor.
Elementos do vetor.

Saídas
Menor elemento do vetor.
Exemplos de Entradas e Saídas:

Entradas:
4
2 4 3 1

Saídas:
1
*/
#include <iostream>
using namespace std;

void menorElemento(int &menor, int vet[], int N, int i){


    if(N == i)

        return;
    
    else{
        
        if(vet[i] < menor){

            menor = i;
        }
    }
    i++;
    return menorElemento(menor, vet, N, i);
}

int main(){

    int N;
    cin >> N;
    
    int vetor[N];

    for(int i = 0; i < N; i++){

        cin >> vetor[N];
    }
    
    int i = 0;
    int menor = vetor[0];

    if(N == 1)
        cout << menor;
    
    else{

        menorElemento(menor, vetor, N, i);
        cout << menor;
    }

    return 0;
}