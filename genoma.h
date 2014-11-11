//! \file genoma.h

//****************************************************************************************************
//* genoma.h                                                                                         *
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
#ifndef _GENOMA_H_
#define _GENOMA_H_

#include<alelo.h>

using std::vector;
using std::map;

//!Classe que define um genoma. 

//! A classe genoma representa o genoma de um indiv�duo qualquer. O modelo assumido aqui considera o genoma como sendo constitu�do de um �nico cromossomo, facilitando as manipula��es e gera��es de eventos como recombina��o. Os cromossomos podem ser "reconstitu�dos" sempre que necess�rio pela informa��o contida no vetor ultpos. 
//! \author Ricardo da Fonseca
//! \date 28/10/2014

class genoma{
 private:
  vector<alelo> cromp;                      //!< Representa a crom�tide hom�loga vindo do pai do indiv�duo;
  vector<alelo> cromm;                      //!< Representa a crom�tide hom�loga vindo da m�e do indiv�duo;
  static map<double,char> posTipo;          //!< Mapa contendo a posi��o f�sica do loco no cromossomo em key e o tipo de loco em value (q = QTL e m = Marcador);
  static vector<unsigned int> ultpos;       //!< Vetor que armazena as �ltimas posi��es (do vetor) de cada cromossomo. Utilizado para "reconstituir" os cromossomos. 
  static vector<double> eflocos;            //!< Vetor de efeitos dos locos
 public:
  //! Construtor padr�o. Cria um genoma vazio.
  genoma(){};
  //! Construtor que cria um genoma com base nos par�metros fornecidos pelo usu�rio em p.
  genoma(param& p);
  //! Construtor de c�pia. Cria um genoma a partir da c�pia de um outro genoma.
  genoma(const genoma& g);
};

#endif
