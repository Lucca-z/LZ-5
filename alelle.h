//! \file alelle.h

#ifndef Alelle_H
#define Alelle_H

#include "input.h"

//! A classe Alelle representa um alelo qualquer do genoma podendo ser SNP ou Qtl
//! \authoress Michele Porto Pires
//! \date 12/09/2014

class Alelle 
{
 private:
  bool state;
  unsigned int position;
  float effect;
  unsigned int id_alelle;
  char type;
 public:
  //! Construtor de alelo com os parametros passados pelo usuario.
  Alelle(Input& inp);
  bool getState();                      //!< Função que retorna o estado do alelo.
  unsigned int getPosition();           //!< Função que retorna a posição do alelo.
  float getEff();                      //!< Função que retorna o efeito do alelo.
  char inline getType(){return type;}; //!< Função que retorna o tipo de alelo, m para SNP e p para Qtl.
};

#endif
