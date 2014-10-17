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
  double position;
  float effect;
  unsigned int id_alelle;
  char type;
 public:
  //! Construtor de alelo do tipo poligene com os parametros passados pelo usuario.
  Alelle(Input&);
  //! Construtor de alelo do tipo SNP com os parametros passados pelo usuario.
  Alelle(Input&, char);
  bool getState();                      //!< Função que retorna o estado do alelo.
  unsigned int getPosition();           //!< Função que retorna a posição do alelo.
  float getEff();                      //!< Função que retorna o efeito do alelo.
  char inline getType(){return type;}; //!< Função que retorna o tipo de alelo, m para SNP e p para Qtl.
};

#endif
