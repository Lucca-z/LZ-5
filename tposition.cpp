#include <iostream>
#include <fstream>
#include <vector>

using namespace std; //lembrando que o uso do namespace não é desejado já que ele disponibiliza todas as estruturas do biblioteca padrão (std)

vector<string> setpos(vector<string>&);
void getpos(vector<string>&);
int main()
{
 vector<string> sp;
 setpos(sp);  
 getpos(sp);
 return 0;
}

vector<string> setpos(vector<string>& sp){
   
  string pos;
  ifstream snpPos;
  while(getline(snpPos,pos,'\n')){
    sp.push_back(pos);
  }
  return sp;
}

void getpos(vector<string>& sp){
  cout<<sp.size()<<endl;
  for(int i = 0; i < sp.size();i++){
    cout<<"O vetor de posições é: "<<sp[i]<<endl;
  }
}
