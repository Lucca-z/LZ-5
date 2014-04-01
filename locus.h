#ifndef _LOCUS_H
#define _LOCUS_H

#include <utility>
#include "alelle.h"
#include <iostream>

using std::cout;
using std::endl;
using std::pair;


class Locus{
 private:
  unsigned int position; //posição do locus
  static unsigned int countPos; //contagem da posição do Locus
  pair <Alelle,Alelle> genotype; //armazena os alelos
 public:

  Locus(); //Necessário um construtor para inicializar Objeto membro;
  inline void setAlelles(short int ed, short int edi){genotype.first.setAlelle(ed); genotype.second.setAlelle(edi);};
  inline void getAlelles()const {genotype.first.getAlelle(); genotype.second.getAlelle();};
  inline void getPosition() const {cout<<"A posição do locus é: "<<position<<endl;};
};

#endif
