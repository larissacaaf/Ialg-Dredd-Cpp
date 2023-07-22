/*
Implemente uma variação do algoritmo Insertion Sort de modo que os elementos do vetor sejam ordenados em ordem decrescente. Assim, a cada
passo deve-se comparar se o elemento em uma determinada posição i é maior que os elementos posicionados entre i-1 e 0.

Entradas:

Tamanho do vetor que será ordenado.
Elementos do vetor que serão ordenados (inteiros).
Saídas:

Os elementos do vetor a cada troca de valor.
Exemplo de Entrada:

5
1 2 3 4 5
Exemplo de Saída:

2 1 3 4 5 
3 2 1 4 5 
4 3 2 1 5 
5 4 3 2 1
*/

#include <iostream>
using namespace std;

void InsertionSort(int vet[], int tam){

   int pivo, j;
    for(int i = 1; i < tam; i++){

        pivo = vet[i];
        j = i - 1;
        while((j >= 0) and pivo > vet[j]){

            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = pivo;
        for(int k = 0; k < tam; k++){

        cout << vet[k] << " ";
        }
        cout << endl;
    }
}

int main(){

    int tam;
    cin >> tam;

    int vetor[tam];

    for(int i = 0; i < tam; i++){

        cin >> vetor[i];
    }

    InsertionSort(vetor, tam);
}