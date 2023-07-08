#include <iostream>
using namespace std;

int main(){

    int tam;
    cin >> tam;

    int *vetor1 = new int[tam];
    int *vetor2 = new int[tam];

    for(int i = 0; i < tam; i++){
        
        cin >> vetor1[i];
    }

    for(int i = 0; i < tam; i++){
        
        cin >> vetor2[i];
    }

    int cont = 0;
    for(int i = 0; i < tam; i++){
        for(int j = tam-1; j >=0; j--){
            if(vetor1[i] == vetor2[j]){
                cont++;
            }
        }
    }
    
    if(cont == tam)
        cout << "IGUAIS";
    else
        cout << "DIFERENTES";

    delete [] vetor1;
    delete [] vetor2;

    return 0;
}