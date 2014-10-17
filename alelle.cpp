//! \file alelle.cpp
#include "alelle.h"
#include "input.h"
#include <iostream>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

using std::cout;
using std::endl;


extern gsl_rng* pr; 

static unsigned int id_count = 0; //!< variável que define o id dos alelos.
static unsigned int count = 0; //!< variável que define a posição dos alelos.
static unsigned int posmapa = 0;

//! Construtor que recebe um tipo Input, inicializa de forma aleatória o estado do alelo de acordo com a sua frequencia, atribui o tipo de alelo de acordo com o especificado pelo usuário, atribui o efeito para o alelo, atribui automaticamente o id e a posição do alelo.
//! \since 12/09/2014
//! \Input inp Estrutura do tipo Input de onde são retirados o tipo e a frequência do alelo.

Alelle::Alelle(Input& inp):id_alelle(id_count),type('p')
{
  double r = gsl_rng_uniform(pr);
  cout<<"Valor de r: "<<r<<endl; 
  if(r < inp.freq[id_alelle])
    {
      state = 1;
    }
  else {
    state = 0;
  }
    if(r<=0.5){ 
      effect =-(gsl_ran_gamma_knuth(pr,0.4,1.6));   
    }
    else{
      effect = gsl_ran_gamma_knuth(pr,0.4,1.6);
      // type='p';
    }
  cout<<"O estado do Alelo "<<id_alelle<<" é: "<<getState()<<endl;
//cout<<"A posição do Alelo "<<id_alelle<<" é: "<< getPosition()<<endl;
  cout<<"O tipo do Alelo "<<id_alelle<<" é: "<<getType()<<endl;
  cout<<"O efeito do Alelo "<<id_alelle<<" é: "<<getEff()<<endl;
  id_count++;
}

Alelle::Alelle(Input& inp, char m):id_alelle(id_count),position(inp.mapa[posmapa])
{
  type = m;
 double r = gsl_rng_uniform(pr);
  cout<<"Valor de r: "<<r<<endl; 
  if(r < inp.freq[id_alelle])
    {
      state = 1;
    }
  else {
    state = 0;
  }

  //position=inp.mapa[posmapa];
  cout<<"O estado do Alelo "<<id_alelle<<" é: "<<getState()<<endl;
  cout<<"O Alelo "<<id_alelle<<" é um: "<<type<<endl;
  effect=0.0;
  cout<<"O efeito do Alelo "<<id_alelle<<" é: "<<getEff()<<endl;
  cout<<"A posição do Alelo "<<id_alelle<<" é: "<<position<<endl;
  id_count++;
  posmapa++;
}

unsigned int Alelle::getPosition()
{
  return position;
}

float Alelle::getEff()
{
  return effect;
}

bool Alelle::getState(){

return state;
}
