//! \file alelo.h

#ifndef __ALELO_H__
#define __ALELO_H__

//!Classe que define um alelo. 

//! A classe alelo representa um alelo qualquer do genoma por meio do armazenamento do seu estado, A ou a e de seu id, o qual é um valor que identifica de maneira única o alelo.
//! \author Ricardo da Fonseca
//! \date 01/04/2014

class alelo{
 private:  
  bool estado;                                      //!< Estado do alelo. False representa o alelo a e true representa o alelo A.                               
  unsigned int id;                                  //!< Identificação única do alelo.
                                   
 public:
  //! Construtor padrão. Cria um alelo com estado vazio mas com um id.
  alelo();               
  //! Construtor de alelo com estado aleatório. 
  alelo(param& p);
  //! Construtor de alelo com estado definido pelo usuário (est).
  alelo(bool est);
  //! Construtor de cópia
  alelo(const alelo& a);                         
                              
  inline bool getEstado()const{return estado;}          //!< Função que retorna o estado do alelo.  
  inline unsigned int getId()const{return id;}          //!< Função que retorna o id do alelo.
};

#endif
