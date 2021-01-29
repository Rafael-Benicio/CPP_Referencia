#include <iostream>

using namespace std;



int main(){

   char nome [80];
   char nom [80];
   char n [10];
   char m,s;

/*
   cout << "Digite nome completo: ";
   cin.get(nome,80);
   cout << nome << endl;

   cout << "Digite umma linha\: ";
   cin.getline(nom,80);
   cout << nom << cin.gcount() << endl;

   cout << "Digite um nome: ";
   cin >> n;
   cout << n << endl;
*/

    m=cin.get();
    cin.ignore(80,' ');
    s=cin.get();

    cout << m << " - " << s << endl;


	return 0;
}
