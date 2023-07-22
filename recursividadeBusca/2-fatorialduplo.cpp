/*
O fatorial duplo de um número n denotado por n!! é dado pelo produto dos números de 1 até n que tenham a mesma paridade de n. Por exemplo o 
fatorial duplo de 9 é dado por 9*7*5*3*1=945, já o fatorial duplo de 8 é 8*6*4*2=384 e o fatorial duplo de 0 é 1.

Faça um programa que receba um número inteiro positivo n e utilizando uma função recursiva calcule seu fatorial duplo.

Entradas:
Número inteiro positivo n.

Saídas:
Fatorial duplo do número n.

Exemplo de Entrada:
5

Exemplo de Saída:
15
*/

#include <iostream>
using namespace std;

int fatorialDuplo(int n){

    if(n == 1)
        return 1;

    else if(n == 0)
        return 1;
    
    else{

        return n * (fatorialDuplo(n - 2));
    }
}

int main(){

    int n;
    int fatorial;
    cin >> n;

    fatorial = fatorialDuplo(n);
    cout << fatorial;

    return 0;
}