/*
(BACKES,2012) A multiplicação de dois números naturais pode ser feita através de somas sucessivas (por exemplo, 2*3=2+2+2). Crie uma função 
recursiva que calcule a multiplicação por somas sucessivas de dois números naturais.

Entradas:
Dois números naturais.

Saídas:
Resultado da multiplicação dos dois números.

Exemplo de Entrada:
3 5

Exemplo de Saída:
15
*/

#include <iostream>
using namespace std;

int somaRecursiva(int n, int P, int soma){

    if(n == 0){

        return soma;
    }
    else{

        n--;
        return somaRecursiva(n, P, soma + P);
    }
}

int main(){

    int n, P;
    cin >> n >> P;

    int soma = 0;

    cout << somaRecursiva(n, P, soma);

    return 0;
}