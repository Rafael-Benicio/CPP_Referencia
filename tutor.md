C++ é case sensitive

# Biblioteca, para adicionar uma biblioteca use a palavra '#include' e depois o nome da biblioteca.

* #include <iostream> : possui os comandos basicos de escrita

* #include <cstdlib.h> : para poder executar comandos do DOS (você chama 'system("comando")')

* #include <string.h> : serve para comparar strings com 'strcmp(string_1, string_2) e retorna 0 se for true'

* #include <stack> : serve para poder usar pilhas

* #include <queue> : serve para poder usar fila

* #include <list> : Serve para poder usar listas

* #include <stdio.h> : serve para poder usar os comandos 'printf', 'scanf' e 'gets'

* #include <math.h> : para usar operações matematicas mais complexas

* #include <iomanio> : para converter facilamenet valores para outra base com 'setbase(base) << "valor_à_ser_convertido"'

* #include <vector> : serve para poder usar vectors no programa

* #include <fstream> : serve para trabanhar com arquivos

* #include <utility> :serve para usar 'pair'

* #include <map> : serve para usar 'map'

# Cout

* cout << "mensagem a ser exibida"

* cout << "mensagem a ser exibida" << "endl"

// ou

* cout << "mensagem a ser exibida\n"

// Para coverter um valor para hexadeciaml

* int num=10;
* cout <<' hex <<' num;


// Para coverter um valor para octadeciamal

* int num=10;
* cout <<' oct <<' num;

// Para coverter um valor para decimal

* int num=10;
* cout <<' dec <<' num;


# Variaveis

// Para criar uma variavel você declara o tipo dela e o nome

// ou

// Tipo, nome e valor

* int
// Para declarar variaveis de números inteiros use:
* char
// Para declarar uma variavel com um character
* double
// Para variaveis de numero decimal
* float
// Para variaveis de numero decimal mas com uma precisão menor
* bool 
// Para variavel 'true' e 'false'
* string
// Assim como char, recebe texte, mas ao contrario de char que só recebe 1 character, string manda várias : usar aspas duplas

# Biblioteca math.h

// Para obter a constante de PI
* float pi=M_PI;

//Com ela você  pode definir com quanta precisão os numeros vão ser exibidos 
* cout.precision(numero_de_casas)
* cout <<' valor_numerico
------------------------
* cout.precision(5)
* cout <<' 5;
retorna => "5.000"
------------------------
// Para fazer a precisão voltar ao normal use 
* cout.pecision(-1)

// Para ter numeros em notação cientifica
------------------------
* cout << "Valor de PI: " <<' std::scientific <<' pi << "\n";
retorno => "Valorr de PI: 3.141593e+000"
------------------------
// Para configurar a largura do numeral
* int num=30;
* cout << "Valor de num: " <<' setw(10) <<' num << "\n";
retorno=>"        10"
// Para preencer esse espaço
* int num=30;
* cout << "Valor de num: " <<' setw(10) <<' setfill('0') <<' num << "\n";
retorno => "0000000030"

# Multipla declaração de variavel

// É possivel declarar varias variaveis do mesmo tipo em uma linha ao inves de dar uma linha a cada;
* int vida, dinheiro, amigos;

# Constantes
* #define pi 3.14689
// Para declarar uma constante que contrario das variaveis, contantes não mudão seu valor
* #define print cout << "Printando uma mensagem"
// Além de valores, define pode receber comandos

# Variaveis locais e globais

// Assim como outras linguagens, c++ tambem lida com variais locais e globais

# Incremento e decremento de variaveis

// modo mais padrão
* n1=n1+1;
// ou
* n1+=1;
* n1-=1;
* n1*=1;
* n1/=1;
* n1%=1;
// ou
* n1++;

// Existe a possibilidade de alem de n++, também ++n que faz a mesma coisa mas em uma sequencia diferente podendo dar resultados diferente dependendo onde você usa

* cout <<' var++;
// É diferente de 
* cout <<' ++var;
// O primeiro ira retornar 0 eo segundo 1

# Inversão de variavel

// Caso você queira fazer o var de uma variavel se inverta
* variavel=-varivael

# Inputs

* cin >> nome_variavel; 
// Para receber um input

# Operadores matematicos

+ : soma
- : subtração
/ : divisão
* : multplicação
% : resto

# IF ELSE
    
// Operadores logicos '<,>,>=,<=, !=,=='
if (tesst){
    pass
}
else if (test){
    pass
}
else{
    pass
}

# O perador ternario

// É como um if, mas só que mais simples

* (test) ? retorno_verdadeiro : retorno_falso;

// Esse test ele tambem faz retorno de valores

* res=(test) ? retorno_verdadeiro : retorno_falso;

# Label

// Leva a execução devolta a um ponto docodigo que não é um bloco
* nome_do_label:

// Então use o comando para voltar para a labeel
* goto nome_do_label;

# Operadores de tabela verdade

&& / AND
|| / OR
! / NOT

# Switch case

// É como um if para valores mais especificos
* switch(expressao){
  
  case var1:
    comandos;
    break;

  case var2:
    comandos;
    break;
  
   default:
    comandos;
  }

// O default sera executado caso nenhum dos valores dos case bata com o valor passado

# loop while, do whille

* while (teste){
    comando
    braak;
  }

* do{
    comando
    break;
  }while(teste);

# loop for

// sintax basica
* for (init; cond; dec/inc){
    comandos
    break;
  }

* for(int x=0;x!=10;y++){
    comando
    break;
  }


# Array / Vetor

* tipo nome_da_var[numero_de_pos]
* int nums[5] 
* int nums[3]={1,2,3}

// não é possivel ter um tipo de valor em um array

# sizeof

// retorna a memoria consumida pela variavel

* char i='c';

  sizeof(i)

  
# Passar argumentos

// Assim como no shellscript, aquivo vocè pode passar argumentos 
//para a função main do c++ script

* int main(int argc, char *argv[]){

    return 0;
  }

// 'argc' ele possui o numero de parametros passados 
// 'argv' possui os parametros em si.
// O programa ja tem um parametro por padrão na posição 0 que é o  nome do programa


# função

// A primeira coisa que você faz é dizer o tipo dela como 'int' para um retorno de um valor inteiro ou 'void' para quando não há retorno.

* void text(){
    cout << "Meu texto";
  }

// No entanto, antes de usar a função caso você a escreva depois 
//da função main() você deve prototipar ela acima do main

* void texto();
* void soma(int n1, int n2);
* void soma();
* void imp(string text="Impr");

* int main(){
*   texto();
*   return 0;
* }
* 
* void texto(){
*   cout << "Meu texto";
* }

// Argumentos

* void soma(int n1,int n2){
* cout <<' n1+n2;
* }

// E possivel ter mais de uma função com o memso nome, desde que os agumentos de entrada sejão diferentes

* void soma(){
*   cout <<' 5;
* }

// Omissão de argumantos e valor padão de argumnto
// Mesmo que você não passe arugmnto para uma função que os pede, o arungto já tera um valor em sua inicialização

* void imp(string text="Impr"){
*    cout <<' text;
* }


# Enum

// É uma lista enumerada de estrings

* enum arma{fuzil, revolver,  rifle, escopeta};
* arma armaSel;
* armaSel=rifle;
* cout <<' armaSel;

// o retorno printado de armaSel é 2 porque rifle é a posição 2 no enum

// Você pode definir valores para o enum

* enum eletronicos{notbooks=2, smartphones=4, tvs=1};


# Pilha

// Pilhas são como tubos que você insere elementos, dessa forma, o primeiro eleento que você ira trabalhar sera o ultimo a ser adicionado

* stack <tipo de dados> nome_da_pilha;

// Para adicionar elementos a uma pilha use 

* nome_da_pilha.push(valor);

// Para ver o tamamho da pilha use 

* nome_da_pilha.size();

// Para retirar elementos da pilha

* nome_da_pilha.pop()

// Para saber o ultimo elemento a ser adicionado na pilha

* nome_da_pilha.top();

// Para checar se há conteudo em uma pilha, se tiver ele retorna true

* nome_da_pilha.empty() 

===============================================================
Metodos:
    push()
    size()
    pop()
    top()
    empty()

# Fila

//É como a pilha, mas com a diferença que o primeiro elemento a 
entrar, também é o primeiro a sair

* queue <tipo> nome_Fila;

// Para adicionar elementos na fila

* nome_Fila.push(valor);

// Para o tamanho da fila

* nomde_Fila.size();

// Para ver o primeiro elemento da fila

* nome_Fila.front();

// Para ver o ultimo elemento da fila

* nome_Fila.back();

// Para remover o elemento que esta na frente da fila;

* nome_Fila.pop();

// Para checar ser a fila esta vazia;

* nome_Fila.emtpy()

============================================
Metodos:
    push()
    size()
    front()
    back()
    pop()
    empty

# Listas

// Para declarar uma lista 

* list <tipo> nome_Lista;
    
// ou para declarar uma lista com valores padões

* list <tipo> nome_Lista(Numaro_de_Posições, Valor_Padrão );

//Para saber o tamanho atual da lista

* nome_Lista.size();

// Para adicionar elementos na lista pela frente use

* nome_Lista.push_front(valor);

// Para adicionar elementos por tras na lista use

* nome_Lista.push_back(valor);

// Para exibir o primeiro elemento da lista

* nome_Lista.front()

// Para exibir o ultimo elemento da lista

* nome_Lista.back()

// Para remover elemntentos da lista pela frente

* nome_Lista.pop_front()

// Para remover elemntentos da lista por tras

* nome_Lista.pop_back()

//Para adiciona elemntos no meio da lista
_______

* list <tipo>:: iterator it;
* it = nome_Lista.begin();
* advance(it, posição_para_inserir);
* nome_Lista.insert(it, valor_a_ser_inerir);
_______

// Para ordenar os valores da lista em sequiencia

* nome_Lista.sort()/

// Para inverter a lista 

* nome_Lista.reverse();

// Para apagar um elementode um ponto especifico

_______

* list <tipo>:: iterator it;
* it = nome_Lista.begin();
* advance(it, posição_para_inserir);
* nome_Lista.erase(--it);
_______

// Para limapar uma lista

* nome_Lista.clear()

// Para checar se uma lista esta vazia 

* nome_Lista.emtpy();

// Para misturar duas listas, esvaisa a lista de que é misturada

* nome_Lista.merge(nome_Lista2)


============================================================
Methods:
    size()
    push_front()
    push_back()
    front()
    back()
    pop_front()
    pop_back()
    Iterator ...
    insert()
    sort()
    reverse()
    erase()
    clear()
    emtpy()
    merge()
    

# Struct

Ex: struct
// Metodos em struct são possiveis

* struct Carro{
*   string nome;
*   string cor;
*   int pot;
*   int valMax;
*   
*   void insere(string stnome, string stcor,int stpot,int stvalmax)
*   {
*        nome=stnome;
*        cor=stcor
*        pot=stpot
*        valMax=stvalMax;
*   }
* 
* 
* }

//
* int main(){
*   
*   Carro car1;
* 
*   car1.nome="Tornado";
*   car1.cor="Preto";
*   car1.pot=450;
*   car1.velMax=350;
* 
*   car1.insere("Ciclone","Vermelho",200,350)
* 
*   return 0;
* }
// ou
* int main(){
*   
* Carro *carros=new Carro[5];
* Carro car1,car2,car3,car4,car5;
* 
* carros[0]=car1;carros[1]=car2;carros[2]=car3;carros[4]=car5;
* 
* carro[0].insere("Tornado","Vermelho",450,350);
* carro[1].insere("Luxo","Preto",250,260);
* carro[2].insere("Familhia","Prata",150,180);
* carro[3].insere("Trabalho","Branco",80,120);
* carro[4].insere("Padrão","Cinza",100,150);
* 
*   return 0;
* }

# Endereçõ de variavel

Usando & antes do nome da variavel você consegue obter o endereço da vairavle na memoria ram

* int num=4;
* cout << &num;

# Ponteiro / *

// Com ponteiro você pode armazenar o valor de uma variavel apontada

// O ponteiro deve ser do mesmo tipo da variavel para quel ele vair ser apontado.


* int num=5;
* int *pn;
* pn=&num;

// caso você imprima pn você vai ter como retorno o endereço da variaval num
* cout <<' pn;
// Para imprimir o valor da varivel num voce deve indicar o ponteiro
* cout <<' *pn;

// Com isso podemos mudar o valor da variavel orginal uzando o ponteiro

* int num=5;
* int *pn;
* pn=&num;
* *pn=7;

// Agora a o valor da variavel num == 7

// É possivel trabalhar com arrais em ponteiros

* int *p;
* int vetor[10];
* 
* p=&vetor[0];

// Com isso nos podemos imprimir o valor da primeira posiçõa do vetor com o ponteiro usando 

* cout <<' p
 
// E atraves de adiçao voce pode percorer esse vetor no ponteiro
* p == vetot[0]
* *(p++);
* p == votor[1];
* *(p++);
* p == votor[2];

// Assim como assima você pode modificar o valor dos vetores originais

// Com ponteiro você pode modificar valores direto na memoria manipulando com ponteiro

* void somar(float *var, float valor);
* 
* int main(){
*   float num=0;
* 
*   somar(&num,15);
*    
*   cout <<' num << "\n";
*   
*   return 0;
* }
* 
* 
* void somar(float *var, float valor){
*   *var+=valor;
* }

// Dassa foram, ao contrio do modo usua que a operação não modificaria o valor de 'num', aqui, como 'var' é um pnteiro na função, quando o valor dela é alterado, o valor de 'num' é diretemante mudado na memoria.

# Printf e Scanf


//printf serve para printar mensagens
* printf("Aprendendo")

// '\n' quabra a linha e '\0' finaliza a string
// Para printar variaveis 

* int num=1;
* printf("VALOR DA variavel num: %d",num)

//
    Os tipode de rereferieciação de variavel é 
    d, i =>int
    x, X => Hexadeciaml
    u => sem sinal
    s => string, char*
    f => double
    p => ponteiro
//

// Você pode especificar quantas casas deciamis serão exividas em um float por exemplo
* float num=1.111111;
* printf("%.2f",num);
retorno => "1.11"

// Você pode definir o numero de casas decimais que vão ser retornadas

* int num=4;
* printf( "%03d" , num);
retorno => "004"

//ou

* float num=1.22222;
* printf( "%05.2d" , num);
retorno => "01.22"

// scanf serve para capturar valor no teclado
* scanf("%d",&variavel);

# Vectot e vetor

// Vector é um tipo mais moderno de array

* vector <tipo> nome_var;

// Para adicionar elementos na ultima posição de um vector

* vector<int> num;
* 
* num.push_back(10);
* num.push_back(2);

// Para obter o tamanho do vector

* num.size();

// Para mudar um elemento que já foi definido no vector

* num[1]=5;

// Para trocar os valores dentro de um vector para outro

* vector<int> n1;
* vector<int> n2;
* 
* n1.push_back(1);
* n1.push_back(2);
* 
* n2.push_back(3);
* n2.push_back(4);
* 
* n1.swap(n2)

n1 = [3,4]
n2 = [1,2]

// Para pegar o primeiro elemento do vector 

* n1.front()

// Para pegar o ultimo elemento de um vector

* n1.back()

// Para pegar um elemento de uma posição qualquer

* n1.at(posição)

// Para inserir um elemento no inicio do vector

* n1.insert(n1.begin(),valor);

// ou para inserir em outras posições

* n1.insert(n1.begin()+pos,valor);

// Para apagar um elemento especifico 

* n1.erase(posição)

// Para checar se o vector esta vazio

* n1.empty()

// Para remover o ultimo elemento do vector

* n1.pop_back()
______________________________________
Metodos:
    push_back()
    size()
    swap()
    front()
    back()
    at()
    insert()
    erase() 
    empty()
    pop_back()


# class

// Para definir uma class 
* class nome_classe{
* };

// Dentro da classe haveram propriedade publicas e privadas
// Propriedades publicas podem ser facilamente modificados
// Propriedades privadas só podem ser modificadas com methods da propria class

* class nome_classe{
*    public:
*       int vel;
*    private:
*       int velMax;
* };

// Você pode fazer herança para uma classe receber todas as propriedade de uma outra classe

* class new_class: public nome_classe{
* };

// Pode se fazer hernça multipla 

* class new_class: public nome_classe, public nome_classe{
* 
* };

// Tambem tem o metodo construtor que é chamado assim que a classe é instanciada, esse metodo leva o mesmo nome que a class

* class Nome{
*    public:
*        Nome();
* }
* 
* Nome::Nome(){
*    cout << "Executou";
* }

// Para instanciar uma classe

* Nome_Class *nome_v = new Nome_Class();

// Para chamar um metodo de uma class estanciada

* nome_v->nome_Metodo;

# Gets

// É como o cout ou cin, mas ao contraio deles deis, o 'gets' ele não separa os valores por espaçao
· Se você escrever o nome completo em um cin e tentar aramzenar, quando der espaço para escrever um sobrenome o cin vain considerar como se você estivesse escrevendo para outra varavel ai para isso não acontecer serve o gets()

* gets(vnome);

# ofstream, ifstream, fstream

//OFSTREAM

// Serve para gravar arquivos

// Para declarar um arquivo para manipular

* ofstream nome_arq;

// Para abrir um arquivo com a declaração

* nome_arq.open("Nome_do_arquivo.txt");

// Dessa forma você vai poder escrever no "Nome_do_arquivo.txt", mas se já haver conteudo lá ele sera sobrescrito

// Para abrir umm arquivo e escrever nele sem sobrescrever

* nome_arq.open("Nome_do_arquivo.txt",ios::app);

// Para escrever dentro do arquivo;

* nome_arq << "Para escrever";

// Para fechar o arquivo em que estava trabalhando e evitar assim erros e corrompimentos

* nome_arq.close();

// IFSTREAM

// Serve para ler arquivos

* ifstream nome_arq;

// Para abrir um arquivo com a declaração

* nome_arq.open("Nome_do_arquivo.txt");

// Para checar se um arquivo está aberta

* if(nome_arq.is_open()){
* }

// Para ler as linhas

* while(getline(nome_arq,linha)){
*     cout <<' linha <<' endl;
* }

// FSTREAM

// Ele faz o trabalho de ifstream e ofstrem

// Para declarar o arquivo

* fstream nome_arq;

// Para abrir um arquivo com a declaração

* nome_arq.open("Nome_do_arquivo.txt");

// Pode se colocar o parametro 'ios::app' para ao invez de sobre escrever o conteudo do arquivo, adicionar nele

* nome_arq.open("Nome_do_arquivo.txt",ios::app);

// ou

* nome_arq.open("Nome_do_arquivo.txt",ios::out|ios::app);

# Iterator

// Serve para navegar dentro de uma coleção de dados



# Try Catch

// Para capturar erros e evitar que o programa pare a execução

* include <stdexcept>

// serve para poder usa exeption

* try{
*   //comandos
* }catch(exepiton& e){
*   cout <<' "Erro: " <<' e.what() <<' endl;
* }

// e.what() serve par apoder ver os erro capturado

// Você pode criar um erro proposital

* throw "Erro por tam tam";

# Inicialização Uniforme

// Você ppode fazer uma inicialização de variaveis 

// Antigo

* int=0;

// Atual

* int{10};

# auto

// É um comando para definir o tipo de dado quando ele é criado

* auto n=10;
* auto n2="como";
* auto n2=10.55;

# register

// É para que se estiver disponivel, o sistema salvar uma variavel em um registrador "Processador" para poder obtelo mais rapido

* register int n=10;

# Statc

// Statc faz com que a variaveel instanciada na memoria se mantenha lá static, e quando a função é chamada de novo, ao invez de uma nova variavel 'i' ser criada ela chama a vairavel 'i' statica que já tá la na memoria;

* void somador(){
*    static int i=0;
*    i++;
*    cout <<' i <<' endl;
* }
* 
* int main(){
* 
*    somador();
// retorno 1
*    somador();
// retorno 2
*    somador();
// retorno 3
*    somador();
// retorno 4
*    somador();
// retorno 5
* 
* 	return 0;
* }

# extern

// Serve para você usar variveis de uma outro arquivo de um mesmo projeto

* extern tipo nome_var_de_outro_arquivo;


# for-range

// É a mesma coisa do for do python

* int n[5]={1,2,3,4,5}
* 
* for(int i:n){
*   cout <<' i <<' endl;
* }

# função lambda

// função anonima

* [captura direta de variaveis]("argumentos"){"rotina"}


# Pair

# Map














