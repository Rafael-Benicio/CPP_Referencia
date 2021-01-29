#include <iostream>
#include <algorithm>
#include <vector>
//#include <map>
#include <string>

using namespace std;

int main(){

    cout << "Vetor_______________________________________\n\n" ;

    int vetor[]={5,2,3,5,7,8,8,3,5,0,2,1};
    int *p;

    size_t tam=sizeof vetor/4;

    p=find(vetor,vetor+tam,0);

    if(p!=vetor+tam){
        cout << "Numero encontrado: "<< *p << endl << endl;

    }else{
        cout <<  "Numetoo não encontraod" << endl << endl;
    }

    cout << "Vector_______________________________________\n\n";

    vector <int>num={3,5,7,9,9,6,5,3,2,3,5,67,8};
    auto it=find(num.begin(),num.end(),2);

    if (it!=num.end()){
        cout << "Numeto " << *it << " encontrado" << endl << endl;
    }else{
        cout << "Numero não encontrado" << endl << endl;
    }

    cout << "Map____________________________________________\n\n";

//    map<char, int>mapa;

//    mapa['a']=1;
  //  mapa['b']=2;
    //mapa['c']=3;
//    mapa['d']=4;
  //  mapa['e']=5;

    //auto ite=mapa.find('c');

//    if(ite!=mapa.end()){
  //      cout << "Chave "<< ite->second << " encontrada"  << endl << endl;
    //}else{
//        cout << "Chave não encontrada" << endl << endl;
  //  }

    cout << "String__________________________________________\n\n";

    string texto="Rafael Cursos - Aula de C++";

    size_t enc=texto.find("Aula");

    if(enc!=string::npos){
        cout << "Palavra :'" << enc << "' Encontrada";
    }else{
        cout << "Palavra não encontrada";
    }

	return 0;
}
