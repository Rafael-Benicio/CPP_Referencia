#include <iostream>
#include <list>

using namespace std;

int main(){

	list<int> aula;
	int tam=10;

	for(int i=0; i<tam;i++){
        aula.push_front(i);
	}


	return 0;
}
