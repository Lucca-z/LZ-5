#include "alelle.h"
#include "input.h"
#include "genome.h"
#include <iostream>
#include <gsl/gsl_rng.h>
#include <vector>

gsl_rng* pr = gsl_rng_alloc(gsl_rng_mt19937);

using std::cout;
using std::cin;
using std::endl;

void reader(Input&);

int main(){
  
  gsl_rng_set(pr,time(0)); 
  Input inp;
  reader(inp);
  cout<<"Iniciando a Simulacao"<<endl;
  Genome C(inp);
  C.getScrom();
return 0;
}

void reader(Input& inp){
  
  using std::cout;
  using std::endl;
  using std::cin;

  cout<<"Iniciando a leitura do cartão"<<endl;
  cin>>inp.s_gen;
  cin>>inp.n_crom;
  int short sc;
  for(int i=0; i<inp.n_crom; i++){
    cin>>sc;
    inp.s_crom.push_back(sc);
  }
  cin>>inp.n_al;
  cin>>inp.a_dist;
  char ta;
  float f;
 
  for(int i=0; i<inp.n_al; i++){
    cin>>ta;  
    cin>>f;  
    inp.type_al.push_back(ta);
    inp.freq.push_back(f);
  }
  cout<<"Leitura terminada"<<endl;
}
