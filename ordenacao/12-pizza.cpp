/*
Uma pizzaria precisa entregar mais pizzas que estava planejando. Entretanto, para agilizar as entregas, seu motoboy atenderá somente os N 
clientes mais próximos da pizzaria. Como saída, o programa deverá retornar a soma do valor das pizzas nos N clientes mais próximos da pizzaria.

Lembre: N é somente uma porção de clientes de um total de clientes que serão fornecidos na entrada.

Para cada cliente, a pizzaria possui os seguintes dados (usar um registro):

Nome do cliente (string)
Coordenada x do cliente (inteiro)
Coordenada y do cliente (inteiro)
Distância da pizzaria (inteiro)
Valor da pizza (real) .
Para cada cliente, deverá ser criado um registro com os dados acima, e a ordenação deverá ser feita usando o algoritmo InsertionSort. Não haverá clientes com distância repetida.

Dica: A distância entre dois pontos pode ser calculada por: sqrt [(x1-x2)^2 + (y1-y2)^2]

Entradas:
Número de clientes que serão atendidos
Coordenada x da pizzaria
Coordenada y da pizzaria
Número total de clientes
Nome cliente 1
Coordenada x do cliente 1
Coordenada y do cliente 1
Valor da pizza do cliente 1
Nome cliente 2
Coordenada x do cliente 2
Coordenada y do cliente 2
Valor da pizza do cliente 2
...

Saídas :
Soma do valor das pizzas dos N clientes mais próximos da pizzaria

Exemplo de Entrada:
2
5
5
3
Joao
10
5
22.50
Lucas
15
30
32.00
Maria
20
10
21.00

Exemplo de Saída:
43.50
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Cliente{

    string nome;
    int coordclienteX;
    int coordclienteY;
    int distancia;
    float valor;
};

void InsertionSort(Cliente vet[], int tam, int qtd){

    float soma = 0;

    for(int i = 0; i < tam - 1; i++){
        
        int menor = i;
        for(int j = i + 1; j < tam; j++){

            if(vet[j].distancia < vet[menor].distancia){

                menor = j;
            }
        }
        swap(vet[i], vet[menor]);
    }

    for(int i = 0; i < qtd; i++){

        soma += vet[i].valor;
    }
    cout << soma;
}

void Distancia(Cliente vet[], int tam, int coordX, int coordY){

    for(int i = 0; i < tam; i++){
    
        vet[i].distancia = sqrt(pow((coordX - vet[i].coordclienteX), 2) + pow((coordY - vet[i].coordclienteY), 2));
    }
}

int main(){
    
    int numAtendidos, coordpizzariaX, coordpizzariaY, numTotal;
    cin >> numAtendidos >> coordpizzariaX >> coordpizzariaY;

    cin >> numTotal;
    Cliente dadosPedido[numTotal];

    for(int i = 0; i < numTotal; i++){

        cin >> dadosPedido[i].nome >> dadosPedido[i].coordclienteX >> dadosPedido[i].coordclienteY
            >> dadosPedido[i].valor;
    }

    Distancia(dadosPedido, numTotal, coordpizzariaX, coordpizzariaY);

    InsertionSort(dadosPedido, numTotal, numAtendidos);

    return 0;
}