#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

     cout << "Converção_____________________________________\n\n";

	double num;
	char numero[80];
	cin >> numero;
	// converte string para numero
	//num=atof(numero);
	num=strtod(numero,NULL);

	cout << num << endl;

	//atof = char pra float
	//atoi = char para int
	//atol = char para long
	//atoll = char para long long int

	//astrtod = string para double
	//astrtof = string para float
	//astrtol = string para long
	//astrtoll = string para long long int

	cout << "\nNumero Aleatorio______________________________\n\n";

	srand(time(NULL));

	for(int i=0;i<10;i++){
          cout << rand()%100<< endl;
	}

	cout << "\nGerenciamento dinamico de memoria______________\n\n";

	int tam =10;

	int *vetor;

	//vetor=(int*)calloc(tam,sizeof(int));
	vetor=(int*)malloc(sizeof(int));

	for(int i=0;i<tam;i++){
          vetor[i]=rand()%100;
          cout << vetor[i]<< endl;
	}

	free(vetor);

	return 0;
}
