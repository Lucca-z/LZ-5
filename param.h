//! \file param.h

#ifndef __PARAM_H__
#define __PARAM_H__

#include<vector>

using std::vector;

//! Estrutura para armazenamento de parâmetros.

//! O armazenamento de todos os parâmetros da simulação fornecidos pelo usuário e quantidades que podem ser calculadas por operações simples e diretas a partir desses é feita pela estrutura param.
//! \author Ricardo da Fonseca
//! \date 01/04/2014

struct param{
  float freq; //!< frequência do Alelo A.
  unsigned int nCrom;
  vector<double> s_croms; //!< vetor de tamanho de cromossomos
};
#endif
