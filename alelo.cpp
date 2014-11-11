//! \file alelo.cpp

//****************************************************************************************************
//* alelo.cpp                                                                                        *
//*                                                                                                  *
//* Copyright (c) 2008 LuCCA-Z (Laborat�rio de Computa��o Cient�fica Aplicada � Zootecnia),          *
//* Rodovia Comandante Jo�o Ribeiro de Barros (SP 294), km 651. UNESP,                               *
//* Dracena, S�o Paulo, Brazil, 17900-000                                                            *
//*                                                                                                  *
//* This file is part of LZ5.                                                                        *
//*                                                                                                  *
//* LZ5 is free software: you can redistribute it and/or modify it under the terms of the            *
//* GNU General Public License as published by the Free Software Foundation, either version 3        *
//* of the License, or (at your option) any later version.                                           *
//*                                                                                                  *
//* LZ5 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without         *
//* even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See            *
//* the GNU General Public License for more details. You should have received a copy of the          *
//* GNU General Public License along with LZ5. If not, see <http://www.gnu.org/licenses/>.           *
//*                                                                                                  *
//* Acknowledgements                                                                                 *
//*                                                                                                  *
//* To Dr. Rohan L. Fernando from Iowa State University and Dr. Ricardo Frederico Euclydes           *
//* from Vicosa Federal University, who had great influence in ideas behind the LZ5's development.   *
//*                                                                                                  *
//****************************************************************************************************
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
