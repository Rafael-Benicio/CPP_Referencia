#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
    public:
        int tipo;
        string nome;
};

int main(){

    int num{10};
	string nome{"Rafael"};
    vector<int> valores{1,23,4,5,6,7,8,9};
    map<string,string> captais{{"MG","Belo Horisonte"}};

	Pessoa p1{"Rafael",19};
	Pessoa p2{"Benicio",21};


	Veiculo v1{1,"Carango"};

	cout << num << endl;

	return 0;
}
