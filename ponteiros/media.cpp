#include <iostream>
using namespace std;

int *redimensionar(int num[], int &tam){

    int *novo = new int[tam + 2];
    copy(num, num+tam, novo);
    delete [] num;
    tam += 2;
    num = novo;
    return num;
}

int main(){

    int tam = 2, cont = 0;
    int *numeros = new int [tam];
    int i = 0;
    bool parar = true;
    while(parar){

        cin >> numeros[i];
        cont++;
        if(cont == tam){
            
            numeros = redimensionar(numeros, tam);
        }

        if(numeros[i] == -1)

            parar = false;
        i++;
    }

    cont -= 1;

    if((cont) % 2 == 0)

        cout << (float) (numeros[cont / 2] + numeros [(cont / 2) - 1]) / 2;
    else

        cout << (float) (numeros[cont / 2]) / 2;


    return 0;
}