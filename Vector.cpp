#include <iostream>
# include <vector>
using namespace std;

int main(){

    vector<int> num;
    int tam,i;

    num.push_back(10);
    num.push_back(2);
    num.push_back(5);
    num.push_back(8);
    num[3]=0;

    tam=num.size();

    cout << "Tamnho do vector: " << tam << endl;

    for(i=0;i<tam;i++){
        cout << num[i]<< "\n";
    }

    cout << "Swap---------------------------\n\n";

    vector<int> n1;
    vector<int> n2;

    n1.push_back(1);
    n1.push_back(2);
    n1.push_back(3);
    n1.push_back(4);

    n2.push_back(5);
    n2.push_back(6);
    n2.push_back(7);
    n2.push_back(8);


    // insert
    n1.insert(n1.begin(),0);
    n2.insert(n2.begin()+n2.size(),0);
    // erase
    n1.insert(n1.begin(),100000000);
    n1.erase(n1.begin());

    n1.insert(n1.end(),0);
    n1.pop_back();

    n1.swap(n2);

    for(int i=0;i<n1.size();i++){
        cout << n1[i] << " ";
    }

    cout << "\n";

    for(int i=0;i<n2.size();i++){
        cout << n2[i] << " ";
    }


    cout << "\n\nPosição---------------------------\n\n";

    cout << "Primeiro valor do vector n1: "<< n1.front() << endl;
    cout << "Ultimo valor do vector n1:   "<< n1.back() << endl;
    cout << "Valor do meio de vector n1:  "<< n1.at(n1.size()/2) << endl;


    cout << "----------------------------------";

	return 0;
}
