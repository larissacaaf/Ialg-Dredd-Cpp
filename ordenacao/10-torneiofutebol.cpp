#include <iostream>

using namespace std;

struct Tabela{

    char nome[15];
    int pontos;
    int vitorias;
    int saldoGols;
};

void insertionSort(Tabela vet[], int tam){
    
    for(int i = 0; i < tam - 1; i++){

        int maior = i;
        for(int j = i + 1; j < tam; j++){

            if(vet[j].pontos > vet[maior].pontos){

                maior = j;
            }
            if(vet[j].pontos == vet[maior].pontos){

                if(vet[j].vitorias > vet[maior].vitorias){

                    maior = j;
                }
            }
            if(vet[j].pontos == vet[maior].pontos and vet[j].vitorias == vet[maior].vitorias){

                if(vet[j].saldoGols > vet[maior].saldoGols){

                    maior = j;
                }
            }
        }
        Tabela aux = vet[i];
        vet[i] = vet[maior];
        vet[maior] = aux;
    }

    for(int i = 0; i < tam; i++){

        cout << vet[i].nome << " " << vet[i].pontos << " "
             << vet[i].vitorias << " " << vet[i].saldoGols << endl;
    }
}

int main(){

    int qtd;
    cin >> qtd;

    Tabela time[qtd];

    for(int i = 0; i < qtd; i++){

        cin >> time[i].nome >> time[i].pontos >> time[i].vitorias >> time[i].saldoGols;
    }

    insertionSort(time, qtd);

    return 0;
}