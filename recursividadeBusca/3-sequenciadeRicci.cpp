/*
A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da 
sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.

Sabendo-se que a sequência de Fibonacci é definida por:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da 
referida série.

Entrada:
Os valores iniciais da série de Ricci ( F(0) e F(1) );
Os número de termos dessa sequência a serem impressos.

Saída:
Os n termos dessa sequência.

Exemplo de entrada:
5 8
6

Exemplo de saída:
5 8 13 21 34 55
*/

#include <iostream>
using namespace std;

void Ricci(int n, int F0, int F1){

    n--;
    cout << F0 << " ";
    if(n == 0){

        return;
    }
    else{
       
        return Ricci(n, F1, F0 + F1);
    }
}

int main(){

    int F0, F1;
    cin >> F0 >> F1;

    int n;
    cin >> n;

    Ricci(n, F0, F1);

    return 0;
}