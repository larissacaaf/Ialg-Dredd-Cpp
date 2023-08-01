/*

A Operação Lava Jato deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes 
empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.

Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um 
programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no 
arquivo ordenadas de forma decrescente pelo número da operação e as demais em ordem crescente.

Seu programa deve usar o método InsertionSort e não pode fazer uso de vetores auxiliares.

Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações 
presentes no arquivo.

Entradas:

    Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
    Um número K, sendo 0 <= K <= número de operações existentes no arquivo.

Saídas:

    Os nomes das K primeiras operações do arquivo em ordem decrescente de número (um em cada linha).
    Os nomes operações restantes do arquivo em ordem crescente de número (um em cada linha).

Exemplo de Entrada (arquivo fases.txt):

33 RestaUm
7 JuizoFinal
31 Abismo
26 Xepa
10 QuePaisEhEsse
23 Acaraje
17 Pixuleco

Exemplo de Entrada (entrada padrão):

4

Exemplo de Saída:

RestaUm
Abismo
Xepa
JuizoFinal
QuePaisEhEsse
Pixuleco
Acaraje

*/

#include <iostream>
#include <fstream>

using namespace std;

struct info{

    int num;
    string nome;
};

int main(){

    //os k primeiros
    int k;
    cin >> k;

    //abrir arquivo
    ifstream entrada("fases.txt");
    
    //vetor para guardar os dados
    info vet[100];
    
    //calcular tamanho
    int n = 0;
    if(entrada){

        while(entrada >> vet[n].num >> vet[n].nome)
           
            n++;
    }
    else
        cout << "Nao foi possivel abrir o arquivo indicado!";

    //ordem decrescente k primeiros
    for(int i = 0; i < k; i++){

        info pivo = vet[i];
        int j = i - 1;
        while((j >= 0) and (pivo.num > vet[j].num)){

            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = pivo;
    }

    for(int i = 0; i < k; i++){

        cout << vet[i].nome << endl;
    }

    //ordem crescente ultimos
    for(int i = k; i < n; i++){

        info pivo = vet[i];
        int j = i - 1;
        while((j >= k) and (pivo.num < vet[j].num)){

            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = pivo;
    }

    for(int i = k; i < n; i++){

        cout << vet[i].nome << endl;
    }
    
    return 0;
}