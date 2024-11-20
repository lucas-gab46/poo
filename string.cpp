#include <iostream>
#include <string>
int main(){

   // Mostrando Uma String
  std::cout <<("Digite Uma string");
  std::string str("Isso é uma String");  
  // Função getline
  getline(std::cin, str);
  // Lendo a String
  
  std::cout << "string lida!\n" << str << std::endl;
  
  std::cout << str.length() << std::endl;
  
  
  std::cout << ("Tamanho da string: ") << str.size() << std::endl;
  
  std::cout << ("Largura da String") << str.length() << std::endl;

  return 0;

}