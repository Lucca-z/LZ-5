//! \file alelo.cpp
#include "param.h"
#include "alelo.h"
#include<gsl/gsl_rng.h>

extern gsl_rng* prand; 

static unsigned int contador=0; //!< variável que define o id dos alelos

//! Construtor que recebe um tipo param, acessa a frequência alélica para inicializar o alelo de forma aleatória e atribui um id automaticamente.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \date 01/04/2014 
//! \param p. Estrutura do tipo param de onde é retirada a frequência alélica.
alelo::alelo(param& p):id(contador){
  double r=gsl_rng_uniform(prand);
  if(r<p.freq){
    estado=1;
  }
  else{
    estado=0;
  }
  contador++;
}
