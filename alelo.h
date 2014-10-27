//! \file alelo.h

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
