#include <iostream>
using namespace std;

int main(){

    int quantidade;
    cin >> quantidade;

    int *multiplos = new int [quantidade];
    for(int i = 0; i < quantidade; i++){
        cin >> multiplos[i];
    }

    int tamMult2 = 0;
    int *multiplos2 = new int [tamMult2];
    for(int i = 0; i < quantidade; i++){
        if(multiplos[i] % 2 == 0){
            
            int *aux = new int[tamMult2 + 1];
            copy(multiplos2, multiplos2 + tamMult2, aux);
            delete [] multiplos2;
            multiplos2 = aux;
            multiplos2[tamMult2] = multiplos[i];
            tamMult2 += 1;
        } 
    }

    if(tamMult2 == 0){
       
        cout << 0;
    }
    else{

        for(int i = 0; i < tamMult2; i++){
            cout << multiplos2[i] << " ";

        }
    }
    cout << endl;

    int tamMult3 = 0;
    int *multiplos3 = new int[tamMult3];
    for(int i = 0; i < quantidade; i++){

        if(multiplos[i] % 3 == 0){

            int *aux = new int [tamMult3 + 1];
            copy(multiplos3, multiplos3 + tamMult3, aux);
            delete [] multiplos3;
            multiplos3 = aux;
            multiplos3[tamMult3] = multiplos[i];
            tamMult3 += 1;
        }
    }

    if(tamMult3 == 0)
        cout << 0;
    else{
        for(int i = 0; i < tamMult3; i++){
            cout << multiplos3[i] << " ";
        }
    }
    cout << endl;

    int tamMult23 = 0;
    int *multiplos23 = new int [tamMult23];
    for(int i = 0; i < quantidade; i++){

        if(multiplos[i] % 2 == 0 and multiplos[i] % 3 == 0){

            int *aux = new int [tamMult23 + 1];
            copy(multiplos23, multiplos23 + tamMult23, aux);
            delete [] multiplos23;
            multiplos23 = aux;
            multiplos23[tamMult23] = multiplos[i];
            tamMult23++;
        }

    }

    if(tamMult23 == 0)
        cout << 0;
    else{

        for(int i = 0; i < tamMult23; i++){

            cout << multiplos23[i] << " ";
        }
    }
    

    return 0;
}