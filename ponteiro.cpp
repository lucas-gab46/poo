#include <iostream>
using namespace std;
int main () {
int a = 10;

std::cout << "o valor de a é: " << a << std::endl;
std::cout << "o endereço de a é: " << &a << std::endl;

int *ptr_a = nullptr;
ptr_a = &a;

std::cout << "O valor do ptr_a:" << ptr_a << std::endl;


int &refa = a;
std::cout << "O valor apontado por ptr_a" << *ptr_a << std::endl;


  return 0;
}
