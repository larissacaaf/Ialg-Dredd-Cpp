/*
Uma forma de realizar a ordenação é pesquisando o menor valor presente no vetor e colocá-lo em seu devido lugar. Caso a ordenação 
desejada seja decrescente, o maior valor deve ser pesquisado e colocado em seu devido lugar, no início do vetor. O algoritmo Selection Sort 
apresentado abaixo organiza os elementos em ordem crescente. Faça as alterações necessárias para que a implementação do método organize os 
elementos em ordem decrescente. Considere que vetor corresponde ao vetor a ser ordenado e tamanho do vetor é o número de elementos do vetor:

    Para cada indice do vetor iniciando em 0 até tamanho do vetor - 1 faça
        Fixe o menor indice
        Para cada j de indice +1 até tamanho do vetor faça
            Se vetor[j] for menor do que vetor[menor] então
                menor recebe j 
            Fim-Se
        Fim-Para
        Troque o conteúdo de vetor[menor] com vetor[indice] 
    Fim-Para

A cada percorrimento realizado, o estado do vetor deverá ser escrito, facilitando assim a análise da execução do algoritmo.

Entradas:

    Tamanho do vetor (um inteiro)
    Elementos do vetor (valores reais) sem ordenação

Saídas:

    Cada passo da ordenação. Ou seja, os valores do vetor a cada percorrimento completo realizado.

Exemplo de Entrada

5
6.3 2.2 -1.0 7.2 8.1

Saida

8.1 2.2 -1 7.2 6.3 
8.1 7.2 -1 2.2 6.3 
8.1 7.2 6.3 2.2 -1 
8.1 7.2 6.3 2.2 -1 
8.1 7.2 6.3 2.2 -1
*/

#include <iostream>
using namespace std;

void selectionSort(float vet[], int tam){
 
    for(int i = 0; i < tam - 1; i++){

        int maior = i;
        for(int j = i + 1; j < tam; j++){

            if(vet[j] > vet[maior]){

                maior = j;
            }
        }
        
        float aux = vet[i];
        vet[i] = vet[maior];
        vet[maior] = aux;
    
        for(int i = 0; i < tam; i++){

            cout << vet[i] << " ";
        }
        cout << endl;
    }
}

int main(){

    int tamVetor;
    cin >> tamVetor;

    float vetor[tamVetor];
    for(int i = 0; i < tamVetor; i++){

        cin >> vetor[i];
    }

    selectionSort(vetor, tamVetor);

    return 0;
}