#include <iostream>
#include <string>

int main() {


 // Atributos
  std::string atrib1, atrib2 = "atribut 1 atrib2";
  atrib1.assign(atrib2);
  atrib1 = atrib2;
  
  std::cout << "Atributo 1: " << atrib1 << std::endl;
  
  std::cout << "Atributo 2: " << atrib2 << std::endl;


  return 0;
}
