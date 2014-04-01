#include "locus.h"
#include "alelle.h"
#include <utility>


//Inicializando uma variável static

unsigned int Locus::countPos = 0;

//inicializando o Objeto membro através do inicializador :
Locus::Locus()
{
  position = ++countPos;
}

