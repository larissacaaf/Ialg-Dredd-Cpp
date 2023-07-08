#include <iostream>
using namespace std;

struct Medalhas{

    int ouro;
    int prata;
    int bronze;
};

Medalhas *preencherPontos(Medalhas *pontuacao){

	cin >> pontuacao->ouro >> pontuacao->prata >> pontuacao->bronze;

	return pontuacao;
}

Medalhas *qtdMedalhas(Medalhas *medalha){
	
	cin >> medalha->ouro >> medalha->prata >> medalha->bronze;
    
	return medalha;
}

void pontuacaoTotal(Medalhas *Qtd, Medalhas *Ponto){
	
	cout << ((Qtd->ouro * Ponto->ouro) + (Qtd->prata * Ponto->prata) + (Qtd->bronze * Ponto->bronze));
}

int main(){
	
	Medalhas *medalha = new Medalhas;
	Medalhas *Pontos = new Medalhas;
	
	preencherPontos(Pontos);

    qtdMedalhas(medalha);
	
	pontuacaoTotal(medalha, Pontos);

	delete medalha;
	delete Pontos;

	return 0;
}
