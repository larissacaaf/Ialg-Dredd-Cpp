/*
Uma forma de realizar a ordenação é pesquisando o menor valor presente no vetor e colocá-lo em seu devido lugar. Diante dessa ideia, 
implemente o algoritmo Selection Sort, considerando que vetor corresponde ao vetor a ser ordenado e tamanho do vetor é o número de 
elementos do vetor:

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
6.2  4.8  1.1  -2.1  7.4

Saida

-2.1  4.8  1.1  6.2  7.4
-2.1  1.1  4.8  6.2  7.4
-2.1  1.1  4.8  6.2  7.4
-2.1  1.1  4.8  6.2  7.4
-2.1  1.1  4.8  6.2  7.4
*/

#include <iostream>
using namespace std;

void selectionSort(float vet[], int tam){
 
    for(int i = 0; i < tam - 1; i++){

        int menor = i;
        for(int j = i + 1; j < tam; j++){

            if(vet[j] < vet[menor]){

                menor = j;
            }
        }
        
        float aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    
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