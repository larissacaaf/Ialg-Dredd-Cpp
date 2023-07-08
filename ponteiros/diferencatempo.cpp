#include <iostream>
#include <cmath>
using namespace std;

struct Tempo{

    float tempoAtleta;
};

Tempo *guardarDados(Tempo tempo[]){

    for(int i = 0; i < 8; i++){

        cin >> tempo[i].tempoAtleta;
    }

    return tempo;
}

void Diferenca(Tempo tempo[], float menor){

    for(int i = 0; i < 8; i++){
        
        if(tempo[i].tempoAtleta > menor){

            cout << (tempo[i].tempoAtleta - menor) << endl;
        }
        else{

            cout << tempo[i].tempoAtleta << endl;
        }
    }

}

int main(){

    Tempo *tempo = new Tempo [8];

    guardarDados(tempo);

    float menor = tempo[0].tempoAtleta;

    for(int i = 1; i < 8; i++){
        if(tempo[i].tempoAtleta < menor)
            menor = tempo[i].tempoAtleta;
    }

    Diferenca(tempo, menor);

    delete [] tempo;

    return 0;
}