#ifndef Alelle_H
#define Alelle_H

#include<iostream>
#include "input.h"

using std::cout;
using std::endl;

class Alelle 
{
 private:
  bool state;
  unsigned int position;
  float effect;
  unsigned int id_alelle;
  char type;
 public:
  Alelle(Input& inp);
  bool getState();
  unsigned int getPosition();
  float getEff();
  char inline getType(){return type;}; 
};

#endif
