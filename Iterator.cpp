#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string>produtos ={"mouse","teclado","monitor","gabinete","cixa de son"};

    vector<string>::iterator it;

    it=produtos.begin();
    //it=produtos.end()-1;

    // advance
    // next
    // prev

    advance(it,3);

    cout << *it << endl;

	return 0;
}
