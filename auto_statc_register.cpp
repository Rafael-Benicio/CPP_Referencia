#include <iostream>

using namespace std;

void somador(){
    static int i=0;
    i++;
    cout << i << endl;
}

int main(){

    auto num{10};

    register int n{10};

    somador();
    somador();
    somador();
    somador();
    somador();

	return 0;
}
