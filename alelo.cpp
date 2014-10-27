//! \file alelo.cpp
#include "param.h"
#include "alelo.h"
#include<gsl/gsl_rng.h>

extern gsl_rng* prand; 

static unsigned int contador=1; //!< vari�vel que define o id dos alelos

//! Construtor que atribui um id automaticamente e deixa o estado do alelo vazio.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 09/09/2014 
alelo::alelo(){
  id=contador++;
}

//! Construtor que inicializa o alelo com um estado espec�fico id automaticamente.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 09/09/2014 
//! \param est vari�vel que especifica o estado do alelo.
alelo::alelo(bool est){
  estado=est;
  id=contador++;
}

//! Construtor que recebe um tipo param, acessa a frequ�ncia al�lica para inicializar o alelo de forma aleat�ria e atribui um id automaticamente.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 01/04/2014 
//! \param p Estrutura do tipo param de onde � retirada a frequ�ncia al�lica.
alelo::alelo(param& p):id(contador){
  double r=gsl_rng_uniform(prand);
  if(r<p.freq){
    estado=1;
  }
  else{
    estado=0;
  }
  id=contador++;
}

//! Construtor de c�pia. Sup�e-se que um alelo copiado tem o estado id�ntico ao alelo molde mas � um novo alelo e, por isso, deve receber um novo id.
//! \author Ricardo da Fonseca ricardo@dracena.unesp.br
//! \since 09/09/2014 
//! \param a refer�ncia para um tipo alelo.
alelo::alelo(alelo& a){
  estado=a.getEstado();
  id=contador++;
}
