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