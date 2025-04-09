#include <iostream>
#include <stdio.h>


class Produto{
private:
  int codigo;
  std::string nome;
  float preco;
  
  public:
  
  Produto(int codigo, std::string nome, float preco) {
    this->codigo = codigo;
    this->nome = nome;
   this->preco = preco;
  }

   // Metodos Get
  int getCodigo() {return codigo;}
  std::string  getNome() { return nome; }
  float getPreco() {return preco;}
};


int main(){
  Produto produto1(1, "Arroz", 10.00);
   Produto produto2(2, "Feijao", 15.00);
   Produto produto3(3, "Macarrao", 20.00);
   Produto produto4(4, "Banana", 25.00);

  std::cout << "\nCodigo: " << produto1.getCodigo() << std::endl;
  std::cout << "\nNome: " << produto1.getNome() << std::endl;
  std::cout << "\nPreco: " << produto1.getPreco() << std::endl;

  std::cout << "\nCodigo: " << produto2.getCodigo() << std::endl;
  std::cout << "\nNome: " << produto2.getNome() << std::endl;
  std::cout << "\nPreco: " << produto2.getPreco() << std::endl;

  std::cout << "\nCodigo: " << produto3.getCodigo() << std::endl;
  std::cout << "\nNome: " << produto3.getNome() << std::endl;
  std::cout << "\nPreco: " << produto3.getPreco() << std::endl;


  std::cout << "\nCodigo: " << produto4.getCodigo() << std::endl;
  std::cout << "\nNome: " << produto4.getNome() << std::endl;
  std::cout << "\nPreco: " << produto4.getPreco() << std::endl;

  std::cout << "\nEsses foram os produtos disponiveis." << std::endl;



std::cin.get();
return 0;

}