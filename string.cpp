#include <iostream>
#include <string>
int main(){
  
// cin lẽ apenas palavras
std::string str (6, 'A');
  str[6] = 'A';
  std::cout << str[6];
  std::cout << ("String 1 Lida\n" ) << str << std::endl;

std::string str2 (1 , 'B');
  str[1] = 'B';
    std::cout << str[6];
    std::cout << ("String 2 Lida\n" ) << str2 << std::endl;


std::string str3 (3, 'C');
std::cout << str[3];
std::cout << ("String 3 lida\n ") << str3 << std::endl;


  return 0;
}
 
