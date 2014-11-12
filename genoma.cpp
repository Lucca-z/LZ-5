//! \file genoma.cpp

#include <iostream>
#include "alelo.h"
#include "genoma.h"
#include "param.h"
#include <vector>
#include <map>
#include <gsl/gsl_rng.h>
#include <fstream>
#include <string>
#include <algorithm>
#include <gsl/gsl_randist.h>
#include <utility>
#include <iterator>

using std::vector;
using std::map;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::pair;
using std::iterator;

extern gsl_rng* pr;

double genoma::recomb = 2.5*e-3;   //olhar melhor 
double genoma::mut = 2.5*e-5;
map genoma::posTipo (); //como inicializar?

void setPos(param& p,vector<alelo>& cromp, vector<alelo>& cromm)
{

  double d = 0;
  vector<double> map;
  ifstream m ("p");
  string l;
  int ngen=0; 

  while(getline(m,l))
    {
      d=atof(l.c_str());
      map.push_back(d);
    }

  cout<<"map size é: "<<map.size()<<endl;
  unsigned int counter=1;
  vector<unsigned int>nsnps(0);
  
  //Laço para contar a quantidade de snps em cada cromossomo
  for(int s=0;s<map.size();s++){
    if (map[s]<map[s+1]){
      counter++;
    } 
    else { 
      counter--;
      unsigned int i=0;
      nsnps[i]=counter;
      i++;
      counter=1;
    }
  }

  double pi=0;
  double pf=0;
  int x =0;
  int a = 0;
  unsigned int ntq = 0;
  vector<unsigned int> nqtls;
  
  //!< inicializar nqtls de acordo com o tamanho de cada cromossomo via distribuição de Poisson com média=s_crom/10
  //!< p.s_cromp = tamanho de cada cromossomo para a cromatide paterna, considerando que as cromadites tem o mesmo tamanho
  for(int i=0;i < p.s_cromp.size();i++){
    ntq = ntq+gsl_ran_poisson(pr,p.s_croms[i]/10);
    nqtls.push_back(ntq);
  }
  //! Alocando as posições dos qtls e ordenando as posições para cada cromossomo
  for(int i = 0; i < cromp.size(); i++)
    {
      for(int j = 0; j< nqtls[i]; j++)
	{
	  posTipo(gsl_rng_uniform(pr)*(p.s_croms[i]),'q');
	}
      for(x;x< nsnps[i]+a;x++)
	{
	  cout<<"nsnp[i] "<<nsnp[i]<<endl;
	  posTipo(map[x],'m');
	}
      cout<<"O valor de x é: "<<x<<endl;
      ngen=(nqtls[i]+nsnps[i]);
      pf+=ngen;
      sort(posTipo.begin()+pi,posTipo.begin()+pf);
      pi=pf;
      a=nsnp[i];
    }
  
cout<<"O tamanho de posTipo é: "<<posTipo.size()<<endl;

  for(int i=0; i<map.size();i++)
    {
      cout<<"As posições são: "<<map[i]<<endl;
    }

 for(int i=0; i<posTipo.size();i++)
    {
      cout<<"As posições de posTipo são: "<<posTipo[i,i]<<endl; //olhar isso!!!
    }

}
