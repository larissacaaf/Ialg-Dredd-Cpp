/*Um número inteiro não negativo é dito ser capicua quando lido da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. O ano 2002, por exemplo, é capicua. Implemente um programa que receba a quantidade de dígitos que serão inseridos e armazene-os em um vetor alocado dinamicamente. O programa deverá responder se os dígitos lidos compõem um número capicua ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.

Entrada do programa:

    Quantidade de dígitos a serem inseridos
    Sequência de dígitos a serem armazenados (mesma linha).

Saída do programa:

    Posições e valores comparados enquanto as comparações forem verdadeiras. Uma palavra ("sim" ou "nao" - em minúsculas, sem acentos) que indica se o número é capicua.

Exemplo de entrada do programa:

6
1 2 3 3 2 1

Exemplo de saída do programa:

0 1 5 1 1 2 4 2 2 3 3 3
sim

Exemplo de entrada do programa:

11
1 2 3 4 5 5 4 3 2 1 0

Exemplo de saída do programa:

nao*/

#include <iostream>
using namespace std;

int main()
{
	
    int tam;
	cin >> tam;
	int *capicua = new int[tam];

	for (int i = 0; i < tam; i++){

		cin >> capicua[i];
	}

	bool achei = true;
	int i = 0;

	if (tam == 0){

		achei = false;
	}

	else if (tam == 1){

		cout << 0 << " " << capicua[0];
	}

	else{

		while (i < tam - 1 and achei){

			tam--;

			if (capicua[i] != capicua[tam]){

				achei = false;
			}
			
            else{
				
                if (capicua[i] == capicua[tam]){

					cout << i << " ";
					cout << capicua[i] << " ";
					cout << tam << " ";
					cout << capicua[tam] << " ";
				}
			}

			i++;
		}
	}

	if (achei){
		cout << endl << "sim";
	}

	else
	{
		cout << endl << "nao";
	}

	delete[] capicua;

	return 0;
}
