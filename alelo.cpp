//! \file alelo.cpp
#include "param.h"
#include "alelo.h"
#include<gsl/gsl_rng.h>

extern gsl_rng* prand; 

static unsigned int contador=0; //!< vari�vel que define o id dos alelos

//! Construtor que recebe um tipo param, acessa a frequ�ncia al�lica para inicializar o alelo de forma aleat�ria e atribui um id automaticamente.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \date 01/04/2014 
//! \param p. Estrutura do tipo param de onde � retirada a frequ�ncia al�lica.
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
