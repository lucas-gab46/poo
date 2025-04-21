// Bibliotecas
#include <iostream>
#include <string>

// Classe Produto
class Produto {
private:
    int codigo;
    std::string nome;
    float valor;

public:
    // Construtores
    Produto() : codigo(0), nome(""), valor(0.0) {}

    Produto(int c, std::string n, float v) : codigo(c), nome(n), valor(v) {}

    // Métodos Get
    int getCodigo() const { return codigo; }
    std::string getNome() const { return nome; }
    float getValor() const { return valor; }
};

// Classe Item
class Item {
private:
    int quantidade;
    float preco;
    Produto produto;

public:
    // Construtor
    Item(int q, float p, Produto pr) : quantidade(q), preco(p), produto(pr) {}

    // Métodos Get
    int getQuantidade() const { return quantidade; }
    float getPreco() const { return preco; }
    Produto getProduto() const { return produto; }

    // Métodos Set
    void setQuantidade(int q) { quantidade = q; }
    void setPreco(float p) { preco = p; }
    void setProduto(Produto p) { produto = p; }
};

// Programa Principal
int main() {
    // Definição das categorias
    enum Categorias {
        Alimento = 1,
        Limpeza = 2,
        Congelado = 3,
        Fruta = 4
    };

    // Criação dos produtos
    std::cout << "  Escolha o seu produto\n" << std::endl;

  
    std::cout << "Categorias disponíveis:\n";
  
    std::cout << "1. Alimento\n";
    std::cout << "2. Limpeza\n";
    std::cout << "3. Congelado\n";
    std::cout << "4. Fruta\n\n";
  
    Produto produto1(1, "Arroz", 10.00);
    Produto produto2(2, "Sabão", 15.00);
    Produto produto3(3, "Peixe", 20.00);
    Produto produto4(4, "Banana", 25.00);

    std::cout << "Escolha a Categoria do seu Produto\n" << std::endl;

    // Exibição dos produtos
    std::cout << "Produto 1:" << std::endl;
    std::cout << "Código: " << produto1.getCodigo() << std::endl;
    std::cout << "Nome: " << produto1.getNome() << std::endl;
    std::cout << "Valor: " << produto1.getValor() << std::endl;

    std::cout << "\nProduto 2:" << std::endl;
    std::cout << "Código: " << produto2.getCodigo() << std::endl;
    std::cout << "Nome: " << produto2.getNome() << std::endl;
    std::cout << "Valor: " << produto2.getValor() << std::endl;

    std::cout << "\nProduto 3:" << std::endl;
    std::cout << "Código: " << produto3.getCodigo() << std::endl;
    std::cout << "Nome: " << produto3.getNome() << std::endl;
    std::cout << "Valor: " << produto3.getValor() << std::endl;

    std::cout << "\nProduto 4:" << std::endl;
    std::cout << "Código: " << produto4.getCodigo() << std::endl;
    std::cout << "Nome: " << produto4.getNome() << std::endl;
    std::cout << "Valor: " << produto4.getValor() << std::endl;

    std::cout << "\nEsses foram os seus Pedidos" << std::endl;

    return 0;
}
