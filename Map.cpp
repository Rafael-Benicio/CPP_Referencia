#include <iostream>
#include <map>

using namespace std;

int main(){

    map <char, string> pr;
    pr['c']="Cabine";

    map <int, string> prod;
    map <int,string>::iterator itmap;

    prod[0]="Mouse";
    prod[1]="Teclado";
    prod[2]="Monitor";
    prod[3]="CX.som";

    prod.insert(pair<int,string>(4,"Caraca"));

    prod.erase(2);

    // Serve para apagar todo o map
    //prod.clear();

    itmap=prod.find(3);
    if(itmap==prod.end()){
        cout << "Produto não encontrado"<< endl;
    }else{
        cout << "Produto em estoque" << endl;
        cout << " Codigo : " << itmap->first << "  |  Valor: " << itmap->second << endl;
    }

    cout << "\nFor 1-----------------------------------\n\n";
    for(auto it=prod.begin();it!=prod.end();it++){
        cout << "Primeira chave: "<< it->first <<" || Segunda chave: "<<it->second << endl;

    }

    cout << "\nFor 2-----------------------------------\n\n";

    for(auto it:prod){
        cout << "Primeira chave: "<<it.first <<" || Segunda chave: "<<it.second << endl;
    }


	return 0;
}
