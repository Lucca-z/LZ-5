#include "alelle.h"
#include "input.h"
#include <iostream>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

using std::cout;
using std::endl;


extern gsl_rng* pr;

static unsigned int id_count = 0;
static unsigned int count = 0;

Alelle::Alelle(Input& inp):position(count),id_alelle(id_count)
{
  float r = gsl_rng_uniform(pr);
  cout<<"Valor de r: "<<r<<endl; 
  if(r < inp.freq[id_alelle])
    {
      state = 1;
    }
  else {
    state = 0;
  }  
  if(inp.type_al[id_alelle]=='p'&& r<=0.5){ 
	effect =-(gsl_ran_gamma_knuth(pr,0.4,1.6));
	type='p';
      }
  else if(inp.type_al[id_alelle]=='p' && r>0.5){
	effect = gsl_ran_gamma_knuth(pr,0.4,1.6);
	type='p';
      }
  else 
    {
      effect = 0.0;
      type='m';
    }
  cout<<"O estado do Alelo "<<id_alelle<<" é: "<<getState()<<endl;
  cout<<"A posição do Alelo "<<id_alelle<<" é: "<< getPosition()<<endl;
  cout<<"O tipo do Alelo "<<id_alelle<<" é: "<<getType()<<endl;
  cout<<"O efeito do Alelo "<<id_alelle<<" é: "<<getEff()<<endl;
  id_count++;
  count++;
}

unsigned int Alelle::getPosition()
{
  return position;
}

float Alelle::getEff()
{
  return effect;
}

bool Alelle::getState(){

return state;
}
