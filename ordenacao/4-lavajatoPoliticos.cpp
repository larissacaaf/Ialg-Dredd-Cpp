#include <iostream>
#include <fstream>

using namespace std;

struct politico{
    string nome;
    string partido;
    float desvio;
};

int particiona(politico v[], int c, int f){

    float pivo = v[c].desvio;
    int i = c + 1; 
    int j = f;
    while (i <= j){
        
        if(v[i].desvio >= pivo)

            i++;

        else if(pivo >= v[j].desvio)

            j--;

        else{

            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

        swap(v[c], v[j]);
        v[j].desvio = pivo;
        return j; 
}


void orderna_Q(politico v[], int pos_pivo, int fim){

    int pos_novo_pivo;
    if(pos_pivo <= fim){

        pos_novo_pivo = particiona(v, pos_pivo, fim);
        orderna_Q(v, pos_pivo, pos_novo_pivo - 1);
        orderna_Q(v, pos_novo_pivo + 1, fim);
    }  
}

int main(){

    ifstream entrada("relacao_desvios.txt");
    politico dados[100];

    if(!entrada)
        
        cout << "Nao foi possivel abrir o arquivo";

    int qtd = 0;
    while(entrada >> dados[qtd].nome >> dados[qtd].partido >> dados[qtd].desvio){
    
        qtd++;
    }
    
    orderna_Q(dados, 0, qtd - 1);

    for(int i = 0; i < qtd; i++){

        cout << dados[i].nome << endl;
    }

    return 0;
}