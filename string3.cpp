#include <iostream>
#include <string>

int main() {

  std::string str("hahaha\n");
  
  std::cout << "string lida!\n" << str << std::endl;
  
  std::cout << str.length() << std::endl;
  
  std::cin.ignore(121212);
  
  std::cout << str.size() << std::endl;
  return 0;
}
