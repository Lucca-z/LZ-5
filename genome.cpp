#include "genome.h"
#include "input.h"
#include <iostream>
#include <iterator>
#include<vector>
#include<algorithm>

using std::vector;
using std::ostream_iterator;
using std::copy;
using std::cout;
using std::endl;

Genome::Genome(Input& inp):genom(),n_crom(inp.n_crom),s_crom(inp.s_crom),s_genom(inp.s_gen),a_dist(inp.a_dist){
  cout<<"Construindo o Genoma"<<endl;
  for(int i=0; i<inp.n_al; i++)
    {
      genom.push_back(Alelle(inp));
    }
  cout<<"O tamanho do genoma é: "<<getSgenom()<<endl;
  cout<<"Número de cromossomos: "<<getNcrom()<<endl;
  cout<<"A distancia média entre QTL e SNP é: "<<getAdist()<<endl;
  cout<<"Construção do Genoma terminada"<<endl;
}

void Genome::getScrom(){
  cout<<"Vetor de tamanho de cromossomos: "<<endl;
  for(int i = 0;i < n_crom; i++){
    cout<<s_crom[i]<<endl;
  }  
}
