#include <iostream>

using namespace std;

int main(){
	int num=0;
    int res=0;

	cout << "Digite um numero";
	cin >> num;

	(num!=0) ?  res=num : res=100;

	cout << res << " foi o numreo digiyado";


	return 0;
}
