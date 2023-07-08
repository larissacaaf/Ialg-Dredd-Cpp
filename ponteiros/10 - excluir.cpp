/* Faça um programa que receba o tamanho N de um vetor e o preencha. Encontre o segundo menor e o segundo maior elementos, reduza o vetor em duas posições e preencha o novo vetor com os demais elementos, excluindo os dois elementos identificados. Imprima o novo vetor.

Entradas:

    int n - Tamanho do vetor.
    float vet[n] - Vetor que será preenchido.

Saídas:

    Novo vetor, retirando o segundo menor e segundo maior elementos (float).


Exemplos de Entradas e Saídas:

Entradas:
4
3
1
6
5

Saídas:
1
6*/

#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    float *vet = new float[n];
    
    //preencher vetor
    for(int i = 0; i < n; i++){

        cin >> vet[i];
    }

    int segundoMaior;
    int segundoMenor;
    for (int i = 0; i < n; i++){

        int contMaior = 0;
        int contMenor = 0;
        for (int j = 0; j < n; j++){

            if (vet[i] > vet[j])
                contMaior++;
            if (vet[i] < vet[j])
                contMenor++;
        }
    
        if (contMaior == (n - 2))
            segundoMaior = i;
    
        if (contMenor == (n - 2))
            segundoMenor = i;
    }

    int tamNovo = n-2;
    float *novo = new float[tamNovo];
    
    int j = 0;
    bool fim = true;
    
    while(fim){

        for(int i = 0; i < n; i++){
           
           while(j < tamNovo){
                if (i != segundoMaior and i != segundoMenor){
       
                    novo[j] = vet[i];
                
                    if(j == tamNovo)
                        fim = false;
                
                    j++;
                }
            }
        }
    }

    for(int i = 0; i < tamNovo; i++){
       
        cout << novo[i] << endl;
    }

    delete [] novo;
    delete [] vet;

    return 0;
}
