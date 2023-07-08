#include <iostream>
using namespace std;

struct hidrocarboneto{

    int C;
    int H;
};

void massaMolecular(hidrocarboneto *qtd, int &resultado){
    
    cin >> qtd->C >> qtd->H;

    resultado = (qtd->C * 12) + (qtd->H * 1);

    cout << resultado;

}

int main(){
    
    int resultado;
    hidrocarboneto *qtd = new hidrocarboneto;

    massaMolecular(qtd, resultado);

    delete qtd;

    return 0;
}