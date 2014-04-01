//! \file lz5.cpp

#include<iostream>
#include "param.h"
#include<gsl/gsl_rng.h>
#include "alelo.h"

gsl_rng* prand = gsl_rng_alloc(gsl_rng_mt19937); //!< ponteiro para o gerador de n�meros aleat�rios

//! Fun��o principal que cont�m o "roteiro" de execu��o da simula��o
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \date 01/04/2014
int main(){
  std::cout<<"Ol�, eu sou o LZ-5 e vou te ajudar a simular uma popula��o para estudos em Melhoramento Gen�tico Animal!"<<std::endl;

  gsl_rng_set(prand,time(0));  

  param p;
  p.freq=0.5;
  std::cout<<"A frequ�ncia armazenada em p �: "<<p.freq<<std::endl;

  //Criando um alelo teste
  alelo a(p);

  //Mostrando o alelo
  std::cout<<"O estado do alelo a �: "<<a.getEstado()<<std::endl;
  std::cout<<"O id do alelo a �: "<<a.getId()<<std::endl;
  
  gsl_rng_free(prand);
  return 0;
}
