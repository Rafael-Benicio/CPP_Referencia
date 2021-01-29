#include <iostream>

using namespace std;

class Veiculo{
    private:
        const char* nome;
        const char* cor;
    public:
        int velMax;
        int rodas;
        void setNome(const char* no){
            nome=no;
        }
        const char* getNome(){
            return nome;
        }
        void setCor(const char* no){
            cor=no;
        }
        const char* getCor(){
            return cor;
        }

        virtual void imp(){
            cout << "--------------------------------------------\n";
            cout << "Nome               :" << nome << endl;
            cout << "Cor                :" << cor << endl;
            cout << "Velocidade Maxima  :" << velMax << endl;
            cout << "Numero de Rodas    :" << rodas << endl;
            cout << "--------------------------------------------\n";
        }

};

class Carro:public Veiculo{
    public:
        Carro(){
            velMax=160;
            rodas=4;
            setNome("Carro");
            setCor("Preto");
        }
};

class Moto:public Veiculo{
    public:
        Moto(){
            velMax=200;
            rodas=2;
            setCor("Branco");
            setNome("Moto");
        }
};

class Militar:public Veiculo{
    public:
        int municao;
        bool armamento;
        Militar(bool arma, int mo):armamento(arma),municao(mo){
            velMax=150;
            rodas=6;
            setCor("Verde");
            setNome("Tanque");
            municao=(arma)? mo : 0;
        }

        void imp() override{
            cout << "--------------------------------------------\n";
            cout << "Nome               :" << getNome() << endl;
            cout << "Cor                :" << getCor() << endl;
            cout << "Velocidade Maxima  :" << velMax << endl;
            cout << "Numero de Rodas    :" << rodas << endl;
            cout << "Armamento          :" << armamento << endl;
            cout << "Munição            :" << municao << endl << endl;
            cout << "--------------------------------------------\n";
        }

};

int main(){

    Carro v1;
    v1.imp();

    Moto v2;
    v2.imp();

    Militar v3{false, 50};
    v3.imp();

    Militar v4{true , 50};
    v4.imp();



	return 0;
}
