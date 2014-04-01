#ifndef _ALELLE_H
#define _ALELLE_H

#include<iostream>

class Alelle
{
private:
  static unsigned int count;  
  unsigned int id;
  short int state;
public:
  Alelle();
  inline void setAlelle(short int){state = st;};
  inline void getAlelle() const {cout<<"O estado do Alelo: "<<id<<" é: "<<state<<endl;};
};

#endif

