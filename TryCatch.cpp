#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n1, double n2);

int main(){

    vector <int> num(5);

    try{
        num.at(5)=1;
        cout << num[0] << endl;
    }catch(exception& e){
        cout << "Erro: " << e.what() << endl;
    }

    cout << "\n divisão- Trow erro-------------------------------------------\n\n";

    double n1,n2;

    cout << "Digite dois numetos para fazer divisão: ";

    cin >> n1 >> n2;

    try{
        cout << divide(n1,n2);
    }catch(const char* e){
        cout << "Erro: " << e << endl;
    }


	return 0;
}

double divide(double n1, double n2){
    if (n2==0){
        throw "Erro de divisão por zero";
    }
    return n1/n2;
}
