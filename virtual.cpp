#include <iostream>
#include <stdio.h>

class Carro {
public:
 int vel = 0;
int aceleracao = 0;
int freio = 0;
//metodo virtual

virtual void  fazersom(int fazersom)  {
std::cout << "o Carro 1  está Funcionando :\n";
}

void acelera(int aceleracao) {
  vel += aceleracao;
}
 void buzina (int buzina){
  std::cout << "Buzina 1 Do carro 1 : " << buzina << "\n";
   

}
};


 class Carro1 : public Carro {
 public:
      virtual void acelera(int incremento)  {
         vel += incremento;
         std::cout << "Velocidade Atual Do Carro 1: " << vel << " km/h\n";
     }

virtual void  fazersom(int fazersom) {
std::cout << "o Carro 2 está Funcionando" << fazersom << "\n";
}
      void buzina(int som)  {
         std::cout << "Buzina do Carro 2: " << som << "\n";
         std::cout << "Velocidade Atual Do Carro 2: " << vel << " km/h\n";
        
     }
 };



int main() {

  Carro carro1;
  Carro1 carro2;
  Carro*ptrCarro;

  ptrCarro = &carro1;
  ptrCarro->buzina(1);
  ptrCarro->acelera(50);
  ptrCarro->fazersom(0);

  Carro1*ptrCarro2;
  ptrCarro2 = &carro2;
  ptrCarro2->buzina(2);
  ptrCarro2->acelera(20);
  ptrCarro2->fazersom(0);




  return 0;
}