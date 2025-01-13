// Bibliotecas

#include <iostream>
#include <stdio.h>
// Criação da classe
class Circle {
private:
float radius;
  int x,y;
 // Construtor
  public:
  Circle();
  Circle(float,int =0, int =0);
  ~Circle() { }; // Destrutor
};

// Funções Membro
float area();
float diametro();
void set_radius(float rr);
void set_origin(int xx, int yy); // setter  
float get_radius(); // getter
void Imprime();


// Implementação

Circle::Circle() {
  radius = 0.0;
  x = y = x;

}

Circle Circle(float rr,int = xx, int =  yy) {
radius = rr;
x = xx;
y = yy;
};

float Circle area() {
  return 3.14 * radius * radius;
}
float Circle diametro{
  return radius*2;
}
void Circle set_radius(float rr){
  if (rr > 0) radius = rr;
  else radius = 0;
}
void Circle set_origin(int xx, int yy){
  x = xx;
  y = yy
} // setter  
void Circle get_radius(){
return radius;

// Progama Principal
int main (){
Circle c1;
Circle c2(5.0 8.9,-3.4);
Circle c3(7,7);
void Imprime(){
  
 std::cout << "Circle c1" << std::endl;
c1.Imprime();
c1.set_radius(5.0);
c1.set_origin(8.9,-3.4);
  
   //Circulo Modificado
  std::cout << "Circulo Modificado" << std::endl;
  c1.area();
  c1.Imprime();
  std::cout << "Area: " << c1.area() << std::endl;
 std::cout << "Diametro: " << c1.diametro() << std::endl;

  
  std::cout << "Circle c2" << std::endl;
  c2.Imprime();
  
  
  std::cout << " Circle c3"  << std::endl;
  c3.Imprime();


  return 0;
}
  


