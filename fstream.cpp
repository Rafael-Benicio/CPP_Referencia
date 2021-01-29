#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

	fstream arquivo;

	char opc='s';
	string nome;
	string line;


	arquivo.open("cfbcursos.txt",ios::out|ios::app);

	while((opc=='s') || (opc=='S')){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";

        cout << "\nDigitar um novo nome?[s/n]";
        cin >> opc;

        system("clear");
	}
	arquivo.close();

	arquivo.open("cfbcursos.txt",ios::in);

	cout << "Nomes digitados:\n\n";

	if (arquivo.is_open()){
        while(getline(arquivo,line)){
            cout << line << endl;
        }
        arquivo.close();
	}else{
        cout << "Não foi possivel abrir o arquivo";
	}

	return 0;
}
