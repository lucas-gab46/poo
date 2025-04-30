#include <iostream>
using namespace std;
int main(){
int valor;

std::cout << "Digite um valor dobrado: " <<  endl;

std::cin >> valor;

 

if (cin.fail()){
  std::cout << "Valor invalido" << endl;

  cin.clear();

 cin.ignore(32767, '\n');

} else {
  std::cout << "Valor valido" << endl;

  std::cout << "Você Digitou : " << valor << endl;

}
  return 0;
}
