#include <iostream>
using namespace std;

//preencher vetor
int *preencherVetor(int vet[], int tam){

    for(int i = 0; i < tam; i++){

        cin >> vet[i];
    }
    return vet;
}

int main(){

    //criar vetor alocado dinamicamente
    int tam;
    cin >> tam;

    int *numeros = new int [tam];
    numeros = preencherVetor(numeros, tam);

    //definir delimitadores
    int del1, del2;
    cin >> del1 >> del2;    

    //imprimir em ordem inversa
    bool imprimir = false;
    int inicio, fim;
    for(int i = 0; i < tam; i++){
       
        if((numeros[i] == del1 or numeros[i] == del2) and !imprimir){
           
            inicio = i+1;
            imprimir = true;
            
        }
    }
    for(int i = inicio; i < tam; i++){

        if(numeros[i] == del1 or numeros[i] == del2){

            fim = i-1;
        }
    }

    for(int i = fim; i >= inicio; i--){
        
        cout << numeros[i] << " ";
    }

    return 0;
}