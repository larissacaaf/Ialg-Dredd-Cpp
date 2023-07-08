#include <iostream>
using namespace std;

int main()
{
	
    int tam;
	cin >> tam;
	int *capicua = new int[tam];

	for (int i = 0; i < tam; i++){

		cin >> capicua[i];
	}

	bool achei = true;
	int i = 0;

	if (tam == 0){

		achei = false;
	}

	else if (tam == 1){

		cout << 0 << " " << capicua[0];
	}

	else{

		while (i < tam - 1 and achei){

			tam--;

			if (capicua[i] != capicua[tam]){

				achei = false;
			}
			
            else{
				
                if (capicua[i] == capicua[tam]){

					cout << i << " ";
					cout << capicua[i] << " ";
					cout << tam << " ";
					cout << capicua[tam] << " ";
				}
			}

			i++;
		}
	}

	if (achei){
		cout << endl << "sim";
	}

	else
	{
		cout << endl << "nao";
	}

	delete[] capicua;

	return 0;
}