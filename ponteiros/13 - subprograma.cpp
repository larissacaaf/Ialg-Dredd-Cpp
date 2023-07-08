/*

Faça um subprograma (do tipo função) para preencher automaticamente um vetor de números em ponto flutuante, nomeie o subprograma como obterVetor. Para preencher o vetor seu subprograma deverá satisfazer as seguintes restrições:

    O valor a ser armazenado em uma posição i qualquer do vetor deverá ser obtido a partir da expressão: (i*i + 1.75) / (2 * i! + i). Note que i representa os índices dos subscritos (posições) do vetor.
    O subprograma de preenchimento do vetor deverá possuir apenas um parâmetro de entrada, sendo este um inteiro indicando o tamanho do vetor.
    O vetor que armazenará os dados deverá ser alocado dinamicamente.
    A alocação dinâmica deverá ser realizada dentro do subprograma obterVetor.

Faça um subprograma principal para testar o obterVetor, para isso seu programa deverá ler um inteiro N, chamar o subprograma obterVetor, alocar dinamicamente o vetor e preencher o mesmo. Em seguida, seu programa deverá ler um segundo número inteiro M e exibir no dispositivo de saída padrão todos os valores armazenados no vetor a partir da posição M (inclusive). Note que todas as operações de entrada e saída de dados devem ser realizadas no subprograma principal. Assuma que M sempre será menor do que N.

Entradas:

    Inteiro N.
    Inteiro M.

Saídas:

    Sequência de (N-M) valores em ponto flutuante. Indicando os valores armazenados no vetor.

Exemplo de Entrada:

5
0

Exemplo de Saída:

0.875
0.916667
0.958333
0.716667
0.341346

Exemplo de Entrada:

5
3

Exemplo de Saída:

0.716667
0.341346

*/

#include <iostream>
using namespace std;


int fatorial(int numero){

    if(numero == 0){
        return 1;
    }
    else
       return (numero * fatorial(numero - 1));
}

float *obterVetor(int tam){

    float *vetor = new float [tam];

    for(int i = 0; i < tam; i++){

        vetor[i] = (i*i + 1.75) / (2 * fatorial(i) + i);
    }

    return vetor;
}

int main(){
    int N, M;
    cin >> N >> M;

    float *vetor2 = new float [N];

    vetor2 = obterVetor(N);
    for(int i = M; i < N; i++){
        cout << vetor2[i] << endl;
    }

    return 0;
}
