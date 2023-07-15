/*
Faça um programa que calcula o logaritmo na base 3 de uma potência de 3. Para tanto, divisões sucessivas deverão ser utilizadas. O programa deve conter um subprograma 
recursivo que recebe um número natural e retorna um número natural para fazer o cálculo do logaritmo.

O subprograma que faz o cálculo do logaritmo não pode conter nenhuma operação de leitura nem de escrita. Não é permitido o uso da biblioteca cmath.

Entradas:

    um número natural que é potência de 3.

Saídas:

    o logaritmo do número lido.

Exemplo de Entrada:

243

Exemplo de Saída:

5
*/

#include <iostream>
#include <cmath>
using namespace std;

int recursao(int num, int log){

    if(num == 1)

        return log;

    else{

        num = num / 3;
        log++;
        return recursao(num, log);
        
    }
}

int main(){

    int pot3, log = 0;
    cin >> pot3;

    log = recursao(pot3, log);

    cout << log;

    return 0;
}
