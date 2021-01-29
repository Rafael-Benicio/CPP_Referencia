#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("Rei_Copas");
    cartas.push("Rei_Ouros");
    cartas.push("Rei_Paus");
    cartas.push("Rei_Espadas");

    cout << cartas.size();

	return 0;
}
