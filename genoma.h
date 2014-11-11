//! \file genoma.h

//****************************************************************************************************
//* genoma.h                                                                                         *
//*                                                                                                  *
//* Copyright (c) 2008 LuCCA-Z (Laboratório de Computação Científica Aplicada à Zootecnia),          *
//* Rodovia Comandante João Ribeiro de Barros (SP 294), km 651. UNESP,                               *
//* Dracena, São Paulo, Brazil, 17900-000                                                            *
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

//! A classe genoma representa o genoma de um indivíduo qualquer. O modelo assumido aqui considera o genoma como sendo constituído de um único cromossomo, facilitando as manipulações e gerações de eventos como recombinação. Os cromossomos podem ser "reconstituídos" sempre que necessário pela informação contida no vetor ultpos. 
//! \author Ricardo da Fonseca
//! \date 28/10/2014

class genoma{
 private:
  vector<alelo> cromp;                      //!< Representa a cromátide homóloga vindo do pai do indivíduo;
  vector<alelo> cromm;                      //!< Representa a cromátide homóloga vindo da mãe do indivíduo;
  static map<double,char> posTipo;          //!< Mapa contendo a posição física do loco no cromossomo em key e o tipo de loco em value (q = QTL e m = Marcador);
  static vector<unsigned int> ultpos;       //!< Vetor que armazena as últimas posições (do vetor) de cada cromossomo. Utilizado para "reconstituir" os cromossomos. 
  static vector<double> eflocos;            //!< Vetor de efeitos dos locos
 public:
  //! Construtor padrão. Cria um genoma vazio.
  genoma(){};
  //! Construtor que cria um genoma com base nos parâmetros fornecidos pelo usuário em p.
  genoma(param& p);
  //! Construtor de cópia. Cria um genoma a partir da cópia de um outro genoma.
  genoma(const genoma& g);
};

#endif
