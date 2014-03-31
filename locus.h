#ifndef _LOCUS_H
#define _LOCUS_H

#include <utility>
#include "alelle.h"


using namespace std;


class Locus{
 private:
  //  Test_alelle a;                           //alelo 1
  //  Test_alelle b;                           //alelo 2

  unsigned int position;                   //posição do locus
  static unsigned int countPos;            //contagem da posição do Locus
  pair <Alelle,Alelle> genotype; //armazena os alelos
 public:

  Locus(); //Necessário um construtor para inicializar Objeto membro;
  void setAlelles(short int, short int);
  void getAlelles()const;
  void getPosition() const;
};

#endif
