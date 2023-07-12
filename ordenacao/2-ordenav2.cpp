/*
Nem sempre deseja-se ordenar um vetor inteiro. Faça um programa que receba um conjunto de inteiros e a posição (índice) do vetor até onde 
deseja-se ordenar. A ordenação deverá ser por ordem decrescente, usando selectionsort, de tal forma que os primeiros elementos são os 
maiores do vetor todo, mas após a ordenação parcial, os últimos elementos não estão necessariamente ordenados.

Você deverá adaptar o trecho de código a seguir do algoritmo selectionsort com ordenação crescente. Atenção com a implementação de 
algoritmos clássicos: adicionar testes ou variáveis, introduzir processamento desnecessário resultará em perda de pontos na avaliação 
manual. Os nomes das variáveis devem ser significativos: altere os nomes conforme necessário para que continuem sendo significativos após as 
modificações realizadas.

Use modularização. Não misture interface e processamento.
 
 Entradas:

Tamanho do vetor
Os elementos do vetor (números inteiros)
Posição até onde o vetor deve ser ordenado.
Saídas:

Todo o vetor resultante.
Exemplo de Entrada :

5 
1 3 4 5 2
2
Exemplo de Saída:

5 4 3 1 2
* */

#include <iostream>

using namespace std;

//preenche vetor
int *preenche(int vet[], int tam){
	
	for(int i = 0; i < tam; i++){
		
		cin >> vet[i];
	}
	return vet;
}

//ordena vetor

void ordenaDecrescente(int vet[], int tam, int posicao){
	
	for (int i = 0; i < posicao - 1; i++) {
		int posMaior = i;
		for (int j = i + 1; j < tam; j++) {
			if (vet[j] > vet[posMaior])
				posMaior = j;
		}
		int aux = vet[i];
		vet[i] = vet[posMaior];
		vet[posMaior] = aux;
	}
	
	for(int i = 0; i < tam; i++){
		
		cout << vet[i] << " ";
	}	
}

int main(){
	
	int tamanho;
	int posicao;
	
	cin >> tamanho;
	
	
	int *vetor = new int[tamanho];
	vetor = preenche(vetor, tamanho);
	cin >> posicao;
	
	ordenaDecrescente(vetor, tamanho, posicao);
	

	return 0;
}
     
