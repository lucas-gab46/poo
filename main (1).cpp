#include <iostream>
#include <string>

using namespace std;


int main() {
string nome = "";
string sobrenome = "";



std::cout <<   "Entre com o Seu Nome " << std::endl;
getline(cin , nome);
std::cout <<    "Entre com o seu sobrenome" << std::endl;
std::cin >> sobrenome;


string nome_completo = nome + " " + sobrenome;
  std::cout << "Seu nome completo é: " << nome_completo << std::endl;
  
  return 0;
}