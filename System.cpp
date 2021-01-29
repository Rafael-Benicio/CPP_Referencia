#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num_lapis=0;
    char check='n';

    initi:
    system("clear");

    cout << "\nQuantos lapis você tem? : \n";
    cin >> num_lapis;

    cout << "\n Você tem "<< num_lapis <<"\n";

    cout << "\n Você quer fazer outra checagem? [s/n]\n";
    cin >> check;

    if (check=='s' or check=='S'){
        goto initi;
    }


    return 0;
}
