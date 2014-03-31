#include "alelle.h"
#include <iostream>

using namespace std;

unsigned int Alelle::count = 0; //conta o número de alelos gerados

Alelle::Alelle():id(count++){
  state = 0;
  cout<<"Oi sou o construtor 1"<<endl;
}

void Alelle::setAlelle(short int st){
  cout<<"Editando o estado do alelle com o valor "<<st<<endl;  
  state = st;
  cout<<"Edição concluída"<<endl;
}

void Alelle::getAlelle() const{
  cout<<" O estado do alelle "<<id<<" é: "<<state<<endl;
}
