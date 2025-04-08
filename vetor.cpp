#include <iostream>

using namespace std;

int i = 0;
int main (){
int vetor[] {1,2,3,4,5,6,7,8,9,10};

std::cout << "Percorrendo o vetor:" << std::endl;

  for(int i = 0; i < 10; i++) {
  std::cout << vetor[i] << " - " << std::endl;
  }

std::cout << "Usando range-for:" << std::endl;
for(int x : vetor) {
std::cout << x << " - " << std::endl;
}

return 0;
}
