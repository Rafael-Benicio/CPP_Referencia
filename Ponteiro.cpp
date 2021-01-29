#include <iostream>

using namespace std;

void iniVetor(float *v);
void somar(float *var, float valor);

int main(){

    int num=5;
    int *pn;
    pn=&num;
    cout << pn << "\n\n";
    cout << *pn << "\n\n";
    //para obter a osição da variavel apntada e para obeter o valor da variavel apontada
    *pn=7;
    cout << *pn << "\n\n";
    // Para modificar o valor da variavel apontada
    cout << "Ponteiro- Vetor----------------------------\n\n";
    int *p;
    int vetor[10];
    for(int i=0; i<10;i++){
        vetor[i]=i;
    }
    for(int i=0; i<10;i++){
        cout << vetor[i] << "\n";
    }

    p=&vetor[0];

    cout << "\n" << p <<"\n";
    cout << *p <<"\n";
    *(p++);
    cout << p <<"\n";
    cout << *p <<"\n";

    cout << "Função-------------------------------------\n\n";

    float n=0;
    float vet[5];

    iniVetor(vet);

    for(int i=0;i<5;i++){
        cout << vet[i] << "\n";
    }

    cout << "\nFunção 2-------------------------------------\n\n";
    float n2=0;

    cout << n2 << "\n";

    somar(&n2,15);

    cout << n2 << "\n";

	return 0;
}

void somar(float *var, float valor){
    *var+=valor;
}

void iniVetor(float *v){
    v[0]=0;
    v[1]=0;
    v[2]=0;
    v[3]=0;
    v[4]=0;
}
