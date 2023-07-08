/*

Faça um programa que leia um conjunto de números inteiros positivos até que seja lido o valor -1. Esses valores devem ser armazenados em um vetor com tamanho inicial igual a 2. Sempre que necessário o vetor deve aumentar de tamanho em 2 posições. Após a leitura de todos os valores, seu programa imprimir o valor do elemento do meio do vetor dividido por 2. Caso a quantidade de valores lidos seja par, seu programa deve calcular a média entre os elementos do meio.

Entradas:

    Valores inteiros positivos até que seja digitado o valor -1

Saídas:

    Elemento do meio dividido por 2 (ou média entre os elementos do meio).

Exemplo de Entrada:

4 2 19 7 8 -1

Exemplo de Saída:

9.5

Exemplo de Entrada:

7 4 6 9 -1

Exemplo de Saída:

5

*/

#include <iostream>
using namespace std;

int *redimensionar(int num[], int &tam){

    int *novo = new int[tam + 2];
    copy(num, num+tam, novo);
    delete [] num;
    tam += 2;
    num = novo;
    return num;
}

int main(){

    int tam = 2, cont = 0;
    int *numeros = new int [tam];
    int i = 0;
    bool parar = true;
    while(parar){

        cin >> numeros[i];
        cont++;
        if(cont == tam){
            
            numeros = redimensionar(numeros, tam);
        }

        if(numeros[i] == -1)

            parar = false;
        i++;
    }

    cont -= 1;

    if((cont) % 2 == 0)

        cout << (float) (numeros[cont / 2] + numeros [(cont / 2) - 1]) / 2;
    else

        cout << (float) (numeros[cont / 2]) / 2;


    return 0;
}
