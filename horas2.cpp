#include <stdio.h>
#include <iostream>
using namespace std;

 // Cabeçalho - Header
class Tempo{

private:
int hora,minutos,segundos; //   Membros de Dados
int hh,mm,ss;

public:
Tempo() { // Construtor -- Inicializando
hora = 0;
minutos = 0;
segundos = 0;
void Imprime();
  

};
~Tempo() { }; // Desci



Tempo(int hh ,int mm ,int ss) { // Inicializando Dados
this-> hh = hh;
this-> mm = mm;
this-> ss = ss;
}
void setTempo(int hh ,int mm ,int ss){
  if (hh>= 0 && hh <= 23)
    hora = hh;
  else 
    hora = 0;
  if (mm>= 0 && mm <= 59)
    minutos = mm;
  else 
    minutos = 0;
  if (ss>= 0 && ss <= 59)
    segundos = ss;
  else 
    segundos = 0;

}


void Imprime(){

std::cout << "{" << hh << ":" << mm << ":" << ss << "}" << std::endl;

}

};

int main(){

Tempo padrao1;
Tempo custom(15,23,32);
std::cout << "Hora Padrão: ";
padrao1.Imprime();
  
std::cout << "\n Hora customizada atualizada";
  Tempo(20,23,32);
custom.Imprime();
  
return 0;
}