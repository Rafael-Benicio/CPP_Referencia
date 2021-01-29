#include <iostream>
#include <cstdlib>
using namespace std;

void fim_do_programa(){
     cout << "Acabou"<< endl;
}

int comparetion(const void* a, const void* b){
     return (*(int*)a- *(int*)b);
}

int main(){

     cout << "Finalização_____________________________________\n\n";

     atexit(fim_do_programa);// executa uma função quando o programa finaliza;

	for(int i=0;i<10;i++){
          if(i<5)
               cout << i << endl;
          else{
               //exit(EXIT_SUCCESS);// para parar o procedimento
               //_EXIT(EXIT_SUCCESS);// para parar o procedimento
               cout << i <<  endl;
          }

	}


     cout << "\nObter valor de variaveeis de ambiente___________\n\n";

     const char* p;

     p=getenv("PATH");

     cout << p << endl;

     cout << "\nChamados do OS____________________________________\n\n";


     system("ls");

     cout << "\nOrdenação________________________________________\n\n";

     int vetor[]={1,34,6,8,9,7,6,4,43,6,6,8};

     int pesq=8;
     int *pos;


     qsort(vetor,(sizeof(vetor))/4,sizeof(int),comparetion);

     for(int i=0;i<(sizeof(vetor))/4;i++){
          cout << vetor[i]<< endl;
     }

     cout << "\nPesquisa________________________________________\n\n";

     pos=(int*)bsearch(&pesq,vetor,(sizeof(vetor))/4,sizeof(int),comparetion);

     cout << "Elemento: "<< pesq<< "Está na posição "<< *pos << endl;
	return 0;
}
