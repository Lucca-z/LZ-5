//! \file lz5.cpp

#include<iostream>
#include "param.h"
#include<gsl/gsl_rng.h>
#include "alelo.h"

gsl_rng* prand = gsl_rng_alloc(gsl_rng_mt19937); //!< ponteiro para o gerador de números aleatórios

//! Função que lê os parâmetros da simulação de um arquivo externo (cartão).
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 01/04/2014
//! \param p referência para um objeto do tipo param que armazena os parâmetros da simulação
void input(param& p);

//! Função principal que contém o "roteiro" de execução da simulação
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 01/04/2014
int main(){
  std::cout<<"Olá, eu sou o LZ-5 e vou te ajudar a simular uma população para estudos em Melhoramento Genético Animal!"<<std::endl;

  gsl_rng_set(prand,time(0));  

  param p;

  input(p);

  std::cout<<"A frequência armazenada em p é: "<<p.freq<<std::endl;

  //Criando um alelo teste
  alelo a(1);

  //Mostrando o alelo
  std::cout<<"O estado do alelo a é: "<<a.getEstado()<<std::endl;
  std::cout<<"O id do alelo a é: "<<a.getId()<<std::endl;
  
  gsl_rng_free(prand);
  return 0;
}




void input(param& p){
  using std::cin;
  cin>>p.freq;
  using std::cin;
  cin>>p.nCrom;
  double cM = 0;
  for(int i=0; i<nCrom; i++){
    s_croms.push_back(cM);
  }
}
