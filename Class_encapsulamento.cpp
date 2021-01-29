#include <iostream>
#include <memory>

using namespace std;

class Carro{
    private:
        int velMax;

    public:
        int potencia;
        const char* nome;
/*
        void setVelMax(int vm){
            this->velMax=vm;
        }
        não é necessario criar o metodo set
*/
        int getVelMax(){
            return this->velMax;
        }

        Carro(const char* n, int p):nome(n),potencia(p){

            if(p<100){
                this->velMax=120;
            }else if(p<200){
                this->velMax=220;
            }else{
                this->velMax=350;
            }
        }
};

int main(){

    unique_ptr<Carro> c1(new Carro{"Rafa",300});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax()<< endl;

    //ou

    Carro c2{"Ciclone",400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
	return 0;
}
