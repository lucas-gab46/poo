
//  Bibliotecas

#include <iostream>
#include <string>

class Horas {
private:
  int horas;
  int minutos;
  int segundos;
  bool imprime;


public:
 // Construtor
Horas(int horas = 0, int minutos = 0, int segundos = 0, bool imprime = true) :
horas(horas), minutos(minutos), segundos(segundos) ,imprime(imprime) {}
 
  int get_horas() const { return horas; }
  int get_minutos() const { return minutos; }
  int get_segundos() const { return segundos; }
  bool get_imprime() const { return imprime; }

  void set_horas(int horas = 0) {this->horas = horas; }
  void set_minutos(int minutos = 0) {this->minutos = minutos; }
  void set_segundos(int segundos = 0) {this->segundos = segundos;}
  void set_imprime(bool imprime){this->imprime = imprime;}
};

    int main() {
       int horas, minutos, segundos;
       bool imprime = true;

       std::cout << "Digite as Horas: \n";
       std::cin >> horas;

       std::cout << "Digite os Minutos: \n ";
       std::cin >> minutos;

       std::cout << "Digite os Segundos: \n";
       std::cin >> segundos;

        Horas tempo (horas, minutos, segundos, imprime);
       std::cout << "Horas: \n" << tempo.get_horas() << std::endl; 
       std::cout << "Minutos: \n" << tempo.get_minutos() << std::endl;
      std::cout << "Segundos: \n" << tempo.get_segundos() << std::endl;
      std::cout << "Imprime: \n" << tempo.get_imprime() << std::endl;
      


    return 0;
  }
