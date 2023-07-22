#include <iostream>

using namespace std;

void shell_sort(int vet[], int size, int gaps[], int tamGap) {

    int pos_gap = tamGap - 1;
    while (gaps[pos_gap] > size) {
        pos_gap--;
    }    
    int value;
    int j;
    while ( pos_gap >= 0 ) {
        int gap = gaps[pos_gap];

        for (int i = gap; i < size; i++) {
            value = vet[i];
            j = i;
            while ((j >= gap) and (value < vet[j - gap])) {
                vet[j] = vet[j - gap];
                j = j - gap;
            }
            vet[j] = value;
        }

        pos_gap--;
    }

    for(int i = 0; i < size; i++){

        cout << vet[i] << " ";
    }
}

int main(){

    int tamVetor;
    cin >> tamVetor;

    int vetor[tamVetor];
    for(int i = 0; i < tamVetor; i++){

        cin >> vetor[i];
    }

    int tamGaps;
    cin >> tamGaps;

    int Gaps[tamGaps];
    for(int i = 0; i < tamGaps; i++){

        cin >> Gaps[i];
    }

    shell_sort(vetor, tamVetor, Gaps, tamGaps);

    return 0;
}