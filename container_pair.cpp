#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){

    //pair <int, string> par;
    pair <int, string> par(10,"Rafael");

    cout << par.first << " - " << par.second << endl << endl;

    cout << "Como vetor--------------------\n\n";

    const int tam=3;

    pair <int, string> pares[tam];

    pares[0].first=100;
    pares[0].second="Curso Cpp";

    cout << pares[0].first << " - " << pares[0].second << endl;

    cout << "Com make_pair-------------------------\n\n";

    const int tama=3;

    pair <int, string> pare[tama];

    pare[0]=make_pair(10,"Curso");
    pare[1]=make_pair(20,"De");
    pare[2]=make_pair(30,"C++");


    for(int i=0;i<tama;i++){
        cout << pare[i].first << " - " << pare[i].second << endl << endl;
    }

    cout << "Com make_pair com pair-------------------------\n\n";

    const int ta=3;

    pair <int, pair <string,double>> pa_c_pa[ta];

    pa_c_pa[0]=make_pair(10,make_pair("Mouse",10.55));
    pa_c_pa[1]=make_pair(20,make_pair("Teclado",20.55));
    pa_c_pa[2]=make_pair(30,make_pair("Monitor",330.55));

    for (int i=0;i<ta;i++){
        cout << pa_c_pa[i].first << " - " << pa_c_pa[i].second.first << pa_c_pa[i].second.second << endl << endl;

    }

    cout << "Pair com vector--------------------------------------"<< endl << endl;

    vector <pair<int, string>> prod;

    prod.push_back(make_pair(10,"mouse"));
    prod.push_back(make_pair(20,"teclado"));
    prod.push_back(make_pair(30,"monitor"));

    for(int i=0;i<prod.size();i++){
        cout << prod[i].first << " - " << prod[i].second << endl << endl;
    }



	return 0;
}
