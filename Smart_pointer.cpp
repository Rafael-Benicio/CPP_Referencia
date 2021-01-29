#include <iostream>
#include <memory>

using namespace std;

class Carro{
    public:
        int vel=0;
        int getVel(){return vel;}
        void setVel(int v){this->vel=v;}
};

int main(){

    //int *pnum=new int();

    //shared_ptr<int>pnum(new int);
    //shared_ptr<int>pnum2=pnum;

    unique_ptr<int>pnum(new int);

    *pnum=10;

    cout << *pnum << " - " << &pnum << endl;

    cout << "\n----------------------------------------\n\n";

    string* str=new string("CFB CLUBE BR DE PELADA\n\n");

    cout << *str << " - Tamanho: " << str->size() << endl;

    cout << "\n----------------------------------------\n\n";

    unique_ptr<string>ste(new string("BRBRBRBRBR"));

    cout << *ste << " - Tamanho: " << ste->size() << endl;

    cout << "\n----------------------------------------\n\n";

    unique_ptr<Carro>c1(new Carro);

    cout << "Velocidade: " << c1->getVel() << endl;

    cout << "\n----------------------------------------\n\n";

    shared_ptr<Carro>car1(new Carro);
    shared_ptr<Carro>car2=car1;
    car1->setVel(10);
    car2->setVel(5);

    cout << "Velocidade: " << car1->getVel() << endl;
    cout << "Velocidade: " << car2->getVel() << endl;


	return 0;
}
