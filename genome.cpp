#include "genome.h"
#include "input.h"
#include <iostream>
#include <fstream>
#include<vector>
#include<algorithm>
#include <cstdlib>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include<string>

using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::endl;

extern gsl_rng* pr;

Genome::Genome(Input& inp):genom(),n_crom(inp.n_crom),s_crom(inp.s_crom),s_genom(inp.s_gen){
  cout<<"Construindo o Genoma"<<endl;
  for(int i=0; i<inp.nq; i++)
    {
      genom.push_back(Alelle(inp));
    }
  for(int j =0; j<inp.ns; j++){
    genom.push_back(Alelle(inp,'m'));
  }
  cout<<"O tamanho do genoma é: "<<getSgenom()<<endl;
  cout<<"Número de cromossomos: "<<getNcrom()<<endl;
  //cout<<"A distancia média entre QTL e SNP é: "<<getAdist()<<endl;
  cout<<"Construção do Genoma terminada"<<endl;
}

void Genome::getScrom(){
  cout<<"Vetor de tamanho de cromossomos: "<<endl;
  for(int i = 0;i < n_crom; i++){
    cout<<s_crom[i]<<endl;
  }  
}

void Genome::setPosition(Input& inp){
  //Cópia do algoritmo da Matilde, pensar em ajeitar esta função somente para alocação das posições para os qtls
  //Fiz uma função no input.h que lê o arquivo Pos.txt, então essa primeira parte é descartável

  double posSnps=0; 
  vector<double>vectorPosSnps;
  ifstream posmarkers("Pos.txt");
  string strNum;
  while(getline(posmarkers,strNum)){
    posSnps=atof(strNum.c_str()); //conversão de string para caracter e add uma sequencia de caracteres nulo.
    vectorPosSnps.push_back(posSnps);
  }
 
  int c=0;
  int nGen=0;
  int pi=0;
  int pf=0;
  for(int i=0;i<inp.n_crom;i++){
    double posGen=0;
    double distmax=((double)inp.s_crom[i])/((double)(inp.nqtls[i]));
    
    for(int j=0;j<(inp.nqtls[i]+inp.nsnps[i]);j++){
      if(j<inp.nqtls[i]){
	double dist=((gsl_rng_uniform(pr))*(distmax));
	posGen += dist;
      }else{
     	posGen=vectorPosSnps[c++];	
      } 
      genPos.push_back(posGen);  
    }
    
    nGen=(inp.nqtls[i]+inp.nsnps[i]); 
    pf += nGen;
    sort(genPos.begin()+pi, genPos.begin()+pf);
    pi=pf;
  }
}

void Genome::getPosition(){
  for(int i=0; i<genPos.size();i++){
    cout<<"Vetor de Posições no mapa "<<genPos[i]<<endl;
  }
}
