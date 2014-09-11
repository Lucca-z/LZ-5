#ifndef _INPUT_H
#define _INPUT_H

#include <vector>

using std::vector;

struct Input{
  vector<float> freq;
  vector<char> type_al;
  int n_al;
  int short n_crom;
  int short s_gen;
  vector<int short> s_crom;
  int short a_dist;
};

#endif
