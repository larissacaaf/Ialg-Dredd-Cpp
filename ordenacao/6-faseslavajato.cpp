#include <iostream>
#include <fstream>
using namespace std;

struct Operacao{

    int numOperacao;
    string nome;
};

void selectionSort(Operacao vet[], int tam, int qtd){

    Operacao aux;
    for(int i = 0; i < qtd - 1; i++){

        int menor = i;
        for(int j = i + 1; j < qtd; j++){

            if(vet[j].numOperacao < vet[menor].numOperacao){

                menor = j;
            }
        }
        aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    }

    for(int i = qtd; i < tam - 1; i++){

        int maior = i;
        for(int j = i + 1; j < tam; j++){

            if(vet[j].numOperacao > vet[maior].numOperacao){

                maior = j;
            }
        }

        aux = vet[i];
        vet[i] = vet[maior];
        vet[maior] = aux;
    }

    for(int i = 0; i < tam; i++){

        cout << vet[i].nome << endl;
    }
}

int main(){

    ifstream entrada("fases.txt");

    if(!entrada)
        cout << "Nao foi possivel abrir o arquivo";
    
    Operacao dados[50];

    int i = 0;
    int contador = 0;
    while(entrada >> dados[i].numOperacao >> dados[i].nome){

        i++;
        contador++;
    }

    int k;
    cin >> k;

    selectionSort(dados, contador, k);

    return 0;
}