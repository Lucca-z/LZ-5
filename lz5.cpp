//! \file lz5.cpp

#include<iostream>
#include "param.h"
#include<gsl/gsl_rng.h>
#include "alelo.h"

gsl_rng* prand = gsl_rng_alloc(gsl_rng_mt19937); //!< ponteiro para o gerador de números aleatórios

//! Função principal que contém o "roteiro" de execução da simulação
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \date 01/04/2014
int main(){
  std::cout<<"Olá, eu sou o LZ-5 e vou te ajudar a simular uma população para estudos em Melhoramento Genético Animal!"<<std::endl;

  gsl_rng_set(prand,time(0));  

  param p;
  p.freq=0.5;
  std::cout<<"A frequência armazenada em p é: "<<p.freq<<std::endl;

  //Criando um alelo teste
  alelo a(p);

  //Mostrando o alelo
  std::cout<<"O estado do alelo a é: "<<a.getEstado()<<std::endl;
  std::cout<<"O id do alelo a é: "<<a.getId()<<std::endl;
  
  gsl_rng_free(prand);
  return 0;
}
