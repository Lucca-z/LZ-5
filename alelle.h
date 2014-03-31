#ifndef _ALELLE_H
#define _ALELLE_H

class Alelle
{
private:
  static unsigned int count;  
  unsigned int id;
  short int state;
public:
  Alelle();
  void setAlelle(short int);
  void getAlelle() const;
};

#endif

