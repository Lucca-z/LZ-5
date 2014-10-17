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
  inp.setNq();
  inp.setNs();
  inp.setmapa();
  inp.getmapa();
  cout<<"Iniciando a Simulacao"<<endl;
  Genome C(inp);
  C.getScrom();
  //C.setPosition(inp);
  //C.getPosition();
return 0;
}

void reader(Input& inp){
  
  using std::cout;
  using std::endl;
  using std::cin;

  cout<<"Iniciando a leitura do cartão"<<endl;
  cin>>inp.s_gen;
  cin>>inp.n_crom;
  int short nqtl;
  int short nsnps;
  int short sc;
  for(int i=0; i<inp.n_crom; i++){
    cin>>sc;
    cin>>nqtl;
    cin>>nsnps;
    inp.s_crom.push_back(sc);
    inp.nqtls.push_back(nqtl);
    inp.nsnps.push_back(nsnps);
  }

  inp.setNal();

  float f;
 
  for(int i=0; i<inp.n_al; i++){
    cin>>f;  
    inp.freq.push_back(f);
  }
  cout<<"Leitura terminada"<<endl;
}
