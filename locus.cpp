#include "locus.h"
#include "alelle.h"
#include <utility>
#include <iostream>

using namespace std;

//Inicializando uma variável static

unsigned int Locus::countPos = 0;

//inicializando o Objeto membro através do inicializador :
Locus::Locus()
{
  //genotype.first = Test_alelle;
  //genotype.second = Test_alelle;
  position = ++countPos;
}

void Locus::setAlelles(short int ed, short int edi){
  genotype.first.setAlelle(ed);
  genotype.second.setAlelle(edi);
}

void Locus::getAlelles()const{
  genotype.first.getAlelle();
  genotype.second.getAlelle();
}

void Locus::getPosition() const{
  cout << "A posição do Locus é: " << position << endl;
}

