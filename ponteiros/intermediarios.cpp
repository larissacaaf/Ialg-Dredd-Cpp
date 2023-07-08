/*
Faça um programa que lê um vetor de números inteiros e depois escreve todos os números entre dois marcadores de limite na ordem inversa. Os limites não farão parte da saída.

Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo. Observe os exemplos a seguir.

Obs: os vetores devem ser alocados dinamicamente.

Entradas:

    Quantidade de elementos do vetor.
    Linha contendo os números inteiros do vetor (separados entre si por espaço).
    Linha contendo os dois números delimitadores (separados entre si por espaço).

Saídas:

    Números do vetor entre os delimitadores, na ordem inversa da leitura.

Exemplo de entrada:

6
9 2 3 4 5 6
2 6

Exemplo de saída:

5 4 3

Exemplo de entrada:

7
8 -1 2 4 5 0 3
5 -1

Exemplo de saída:

4 2
*/

#include <iostream>
using namespace std;

//preencher vetor
int *preencherVetor(int vet[], int tam){

    for(int i = 0; i < tam; i++){

        cin >> vet[i];
    }
    return vet;
}

int main(){

    //criar vetor alocado dinamicamente
    int tam;
    cin >> tam;

    int *numeros = new int [tam];
    numeros = preencherVetor(numeros, tam);

    //definir delimitadores
    int del1, del2;
    cin >> del1 >> del2;    

    //imprimir em ordem inversa
    bool imprimir = false;
    int inicio, fim;
    for(int i = 0; i < tam; i++){
       
        if((numeros[i] == del1 or numeros[i] == del2) and !imprimir){
           
            inicio = i+1;
            imprimir = true;
            
        }
    }
    for(int i = inicio; i < tam; i++){

        if(numeros[i] == del1 or numeros[i] == del2){

            fim = i-1;
        }
    }

    for(int i = fim; i >= inicio; i--){
        
        cout << numeros[i] << " ";
    }

    return 0;
}
