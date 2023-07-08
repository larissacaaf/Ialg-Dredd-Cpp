/*

Faça um programa que crie um registro Carro com os campos: marca, ano, distância percorrida na última viagem (em quilômetros) e consumo de combustível na última viagem (em litros). Seu programa deverá alocar dinamicamente uma variável do tipo Carro e ler, a partir de um arquivo texto chamado "entrada.txt", as informações de um carro em particular. Em seguida, faça um subprograma que receba como entrada as informações lidas e retorne à função principal quantos quilômetros por litro o carro em questão realizou em sua última viagem. As informações da marca, ano do carro, consumo de combustível na última viagem (em litros) e o resultado obtido pela função, devem ser gravados em um outro arquivo chamado "saida.txt". Assuma que o carro sempre terá consumido alguma quantidade de combustível.

Entradas (conteúdo do arquivo):

    Cadeia de caracteres representando a marca de um carro (sem espaços).
    Inteiro indicando o ano de fabricação do carro.
    Ponto flutuante indicando a distância percorrida pelo carro em sua última viagem.
    Ponto flutuante indicando o consumo realizado pelo carro em sua última viagem.

Saída (conteúdo do arquivo):

    Cadeia de caracteres representando a marca de um carro (sem espaços).
    Inteiro indicando o ano de fabricação do carro.
    Ponto flutuante indicando o consumo realizado pelo carro em sua última viagem.
    Ponto flutuante indicando quantos quilômetros por litro o carro realizou em sua última viagem.

Exemplo de Entrada (conteúdo do arquivo):

palio
2008
62.5
5.3

Exemplo de Saída (conteúdo do arquivo):

palio
2008
5.3
11.79

*/

#include <iostream>
#include <fstream>

using namespace std;

struct Carro{
    string marca;
    int ano;
    float distanciaPercorrida;
    float consumoCombustivel;
};

Carro lerArquivo(){
    Carro carro;
    ifstream arquivo("entrada.txt");
    if(arquivo.is_open()){
        arquivo >> carro.marca;
        arquivo >> carro.ano;
        arquivo >> carro.distanciaPercorrida;
        arquivo >> carro.consumoCombustivel;
        arquivo.close();
    }
    else
        cout << "Nao foi possivel abrir o arquivo de entrada" << endl;
    return carro;
}

float KmLitro(const Carro &veiculo){
    return  veiculo.distanciaPercorrida / veiculo.consumoCombustivel;
}


int main(){
    Carro veiculo = lerArquivo();
    float kmL = KmLitro(veiculo);

    ofstream arquivo("saida.txt");
    if(arquivo.is_open()){
        arquivo << veiculo.marca << endl;
        arquivo << veiculo.ano << endl;
        arquivo << veiculo.consumoCombustivel << endl;
        arquivo << kmL;
    }

    return 0;
}
