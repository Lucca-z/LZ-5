#include<iostream>

int main(){
  std::cout<<"Olá, eu sou o LZ-5 e vou te ajudar a simular uma população para estudos em Melhoramento Genético Animal!"<<std::endl;
  
  std::cout<<"Você gostaria de continuar?"<<std::endl;
  std::cout<<"Sim[s] ou Não[n]"<<std::endl;

  char resp='s';
  std::cin>>resp;

  switch(resp){
  case 'S':
  case 's': std::cout<<"Infelizmente não será possível pois o Rafael e a Michele ainda não programaram nada e estou esperando para trabalhar. Volte mais tarde. TCHAU!!!!"<<std::endl;
    break;
  case 'N':
  case 'n': std::cout<<"Que bom, eu não teria nada para fazer mesmo! A Michele e o Rafael ainda não enviaram nada para mim. Volte outra hora. TCHAU!!!"<<std::endl;
    break;  
  default: std::cout<<"Respondeu mal!!! Não vou mais trabalhar então! TCHAU!!!" <<std::endl;
  }

  return 0;
}
