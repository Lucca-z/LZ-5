//! \file alelo.h

//****************************************************************************************************
//* alelo.h                                                                                          *
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
#ifndef __ALELO_H__
#define __ALELO_H__

//!Classe que define um alelo. 

//! A classe alelo representa um alelo qualquer do genoma por meio do armazenamento do seu estado, A ou a e de seu id, o qual � um valor que identifica de maneira �nica o alelo.
//! \author Ricardo da Fonseca
//! \date 01/04/2014

class alelo{
 private:  
  bool estado;                                      //!< Estado do alelo. False representa o alelo a e true representa o alelo A.                               
  unsigned int id;                                  //!< Identifica��o �nica do alelo.
                                   
 public:
  //! Construtor padr�o. Cria um alelo com estado vazio mas com um id.
  alelo();               
  //! Construtor de alelo com estado aleat�rio. 
  alelo(param& p);
  //! Construtor de alelo com estado definido pelo usu�rio (est).
  alelo(bool est);
  //! Construtor de c�pia
  alelo(const alelo& a);                         
                              
  inline bool getEstado()const{return estado;}          //!< Fun��o que retorna o estado do alelo.  
  inline unsigned int getId()const{return id;}          //!< Fun��o que retorna o id do alelo.
};

#endif
