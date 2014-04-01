#include "alelle.h"

unsigned int Alelle::count = 0; //conta o número de alelos gerados

Alelle::Alelle():id(count++){
  state = 0;
}
