/*

Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.

Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho e descobra se os vetores são iguais ou não.

Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".

Observação: não haverá elementos repetidos em cada vetor.

Exemplo de Entrada:

5
1 2 3 4 5
5 4 3 2 1

Exemplo de Saída:

IGUAIS

Exemplo de Entrada:

5
1 2 3 6 5
5 4 3 2 1

Exemplo de Saída:

DIFERENTES

*/

#include <iostream>
using namespace std;

int main(){

    int tam;
    cin >> tam;

    int *vetor1 = new int[tam];
    int *vetor2 = new int[tam];

    for(int i = 0; i < tam; i++){
        
        cin >> vetor1[i];
    }

    for(int i = 0; i < tam; i++){
        
        cin >> vetor2[i];
    }

    int cont = 0;
    for(int i = 0; i < tam; i++){
        for(int j = tam-1; j >=0; j--){
            if(vetor1[i] == vetor2[j]){
                cont++;
            }
        }
    }
    
    if(cont == tam)
        cout << "IGUAIS";
    else
        cout << "DIFERENTES";

    delete [] vetor1;
    delete [] vetor2;

    return 0;
}
