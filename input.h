#ifndef _INPUT_H
#define _INPUT_H

#include<iostream>
#include <vector>
#include<string>
#include<fstream>
#include<algorithm>
#include <cstdlib>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;


struct Input{
  vector<float> freq;
  int n_al=0;
  vector<int short> nqtls;
  vector<int short> nsnps;
  vector<double>mapa;
  int short n_crom;
  int short s_gen;
  int short nq=0;
  int short ns;
  vector<int short> s_crom;
  void setNal(){
    for(int i=0; i<nqtls.size(); i++){
      n_al+=nqtls[i]+nsnps[i];
    }
    cout<<"Número de alelos "<<n_al<<endl;
}
  void setNq(){
    for(int i=0; i<nqtls.size();i++)
  {
    nq+=nqtls[i];
  }
    cout<<"Número de qtls são: "<<nq<<endl;
  }
  void setNs(){for(int i=0; i<nsnps.size();i++){ns+=nsnps[i];}cout<<"Número de snps são: "<<ns<<endl;}
  //int short a_dist;
  void setmapa(){
    ifstream map("Pos.txt");
      string limite;
      double pos;
      while(getline(map,limite)){
	pos=atof(limite.c_str());
	mapa.push_back(pos);
      }
  }
  void getmapa(){
    for(int i=0; i < mapa.size();i++){
      cout<<"O mapa é: "<<mapa[i]<<endl;
    }
  }
};

#endif
