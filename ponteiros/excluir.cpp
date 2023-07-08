#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    float *vet = new float[n];
    
    //preencher vetor
    for(int i = 0; i < n; i++){

        cin >> vet[i];
    }

    int segundoMaior;
    int segundoMenor;
    for (int i = 0; i < n; i++){

        int contMaior = 0;
        int contMenor = 0;
        for (int j = 0; j < n; j++){

            if (vet[i] > vet[j])
                contMaior++;
            if (vet[i] < vet[j])
                contMenor++;
        }
    
        if (contMaior == (n - 2))
            segundoMaior = i;
    
        if (contMenor == (n - 2))
            segundoMenor = i;
    }

    int tamNovo = n-2;
    float *novo = new float[tamNovo];
    
    int j = 0;
    bool fim = true;
    
    while(fim){

        for(int i = 0; i < n; i++){
           
           while(j < tamNovo){
                if (i != segundoMaior and i != segundoMenor){
       
                    novo[j] = vet[i];
                
                    if(j == tamNovo)
                        fim = false;
                
                    j++;
                }
            }
        }
    }

    for(int i = 0; i < tamNovo; i++){
       
        cout << novo[i] << endl;
    }

    delete [] novo;
    delete [] vet;

    return 0;
}