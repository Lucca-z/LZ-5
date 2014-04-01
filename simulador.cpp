#include "locus.h"
#include "alelle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
  cout<<"Gerando 2 Objeto Test"<<endl;
  Locus a;
  Locus b;
  a.setAlelles(1,0);
  a.getAlelles();
  a.getPosition();
  b.getAlelles();
  b.getPosition();
  //comentario 2

return 0;
}

