/*

Em estatística, moda é o valor que ocorre com maior frequência num conjunto de dados, não sendo necessariamente única. Por exemplo a série {1, 3, 5, 5, 6, 6} apresenta 2 modas: 5 e 6.
Faça um programa que leia um arquivo denominado "entrada.txt", onde a primeira linha do arquivo corresponde ao tamanho N do vetor e as demais linhas contém inteiros. O programa deverá escrever no arquivo "saida.txt" quantas e quais as modas do vetor.
Exemplos de Entrada e Saída em arquivo:

Exemplo de entrada no arquivo "entrada.txt":
7
2 4 1 10 4 2 1

Exemplo de saída no arquivo "saida.txt":
3
2 4 1
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");

    int tamanho;

    if(!entrada){

        cout << "Nao foi possivel abrir o arquivo";
    }

    entrada >> tamanho;
    int vetor[tamanho];
    while(entrada){

        for(int i = 0; i < tamanho; i++){
        
            entrada >> vetor[i];
        }
    }

    
    int maiorFrequencia = 0;
    int indice;
    int cont = 0;

    for(int i = 0; i < tamanho; i++){

        for(int j = i + 1; j < tamanho; j++){
            
            int contFrequencia = 0;
            if(vetor[i] == vetor[j]){

                contFrequencia++;
                if(contFrequencia > maiorFrequencia){ // 2 4 1 10 4 2 1
                    
                    maiorFrequencia = contFrequencia;
                    indice = i;
                    cont++;
                }

                else if(contFrequencia == maiorFrequencia){

                    indice = i;
                    cont++;
                }

            }
        }
   
    if(cont == 1)
        
        cout << cont << " " << vetor[indice];

    else

        cout << cont << " " << vetor[indice] << " ";
    }

    return 0;
}
