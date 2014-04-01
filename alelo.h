//! \file alelo.h

#ifndef __ALELO_H__
#define __ALELO_H__

//!Classe que define um alelo. 

//! A classe alelo representa um alelo qualquer do genoma por meio do armazenamento do seu estado, A ou a e de seu id, o qual é um valor que identifica de maneira única o alelo.
//! \author Ricardo da Fonseca
//! \date 01/04/2014

class alelo{
 private:
  
  bool estado; //!< Estado do alelo. False representa o alelo a e true representa o alelo A.                               
  int id;      //!< Identificação única do alelo.                                   
 public:
  //!Construtor padrão. Cria um alelo vazio.
  inline alelo():estado(),id(){};
  
  //! Construtor.
  alelo(param& p);
  
  //! Função que retorna o estado do alelo.                          
  inline bool getEstado(){return estado;}

  //! Função que retorna o id do alelo.
  inline int getId(){return id;}
};

#endif
