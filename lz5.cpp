#include<iostream>

using namespace std;

int main(){
  cout<<"Ol�, eu sou o LZ-5 e vou te ajudar a simular uma popula��o para estudos em Melhoramento Gen�tico Animal!"<<std::endl;
  
  cout<<"Voc� gostaria de continuar?"<<endl;
  cout<<"Sim[s] ou N�o[n]"<<endl;

  char resp='s';
  cin>>resp;

  switch(resp){
  case 'S':
  case 's': cout<<"Infelizmente n�o ser� poss�vel pois o Rafael e a Michele ainda n�o programaram nada e estou esperando para trabalhar. Volte mais tarde. TCHAU!!!!"<<std::endl;
    break;
  case 'N':
  case 'n': cout<<"Que bom, eu n�o teria nada para fazer mesmo! A Michele e o Rafael ainda n�o enviaram nada para mim. Volte outra hora. TCHAU!!!"<<std::endl;
    break;  
  default: cout<<"Respondeu mal!!! N�o vou mais trabalhar ent�o! TCHAU!!!" <<endl;
  }

  return 0;
}
