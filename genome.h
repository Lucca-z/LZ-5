#ifndef _GENOME_H
#define _GENOME_H

#include "input.h"
#include "alelle.h"
#include <vector>

using std::vector;

class Genome{
 private:
  vector<Alelle> genom;
  int short n_crom;
  vector<int short> s_crom;
  int short a_dist;
  int short s_genom;
 public:
  Genome(Input&);
  int short inline getNcrom()const{return n_crom;};
  int short inline getAdist()const{return a_dist;};
  int short inline getSgenom()const{return s_genom;};
  void getScrom();

};

#endif
