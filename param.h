//! \file param.h

#ifndef __PARAM_H__
#define __PARAM_H__

#include<vector>

using std::vector;

//! Estrutura para armazenamento de par�metros.

//! O armazenamento de todos os par�metros da simula��o fornecidos pelo usu�rio e quantidades que podem ser calculadas por opera��es simples e diretas a partir desses � feita pela estrutura param.
//! \author Ricardo da Fonseca
//! \date 01/04/2014

struct param{
  float freq; //!< frequ�ncia do Alelo A.
  unsigned int nCrom;
  vector<double> s_croms; //!< vetor de tamanho de cromossomos
};
#endif
