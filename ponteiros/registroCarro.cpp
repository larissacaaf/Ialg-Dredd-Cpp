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
