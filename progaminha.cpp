#include <cstdlib>
#include <iostream>
class Informacoes{
public:
int idade;
double peso;
double altura;
Informacoes(int idade , double peso, double altura) {
idade = i;
peso = p;
altura = a;
}
};

int main() {
  int idade;
  double peso;
  double altura;
  

  std::cout << "Digite a sua idade: ";

  std::cin >> idade;

  std::cout << "Sua idade é : " << idade << std::endl;


  std::cout << "Digite o peso: " << std::endl;

  std::cin >> peso;

  std::cout << "Seu Peso é : " << peso << std::endl;

  std::cout << "Digite a altura: " << std::endl;

  std::cin >> altura;

  std::cout << "Sua Altura é : " << altura << std::endl;

  return 0;
}
