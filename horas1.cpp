 
#include <iostream>
#include <stdio.h>


     // Construção da Classe
    class Date {
    int d,m,y;
    int dd,mm,yy;
    int value = 0;
    
    
public:
int dd = d;
int mm = m;
int yy = y;
// Construstor
Date(int d , int m , int y ) : d(d), m(m), y(y) {}
// Destrutor
~Date() {}


// Getters
int get_day() const {return d; }
int get_month() const {return m;}
int get_year() const {return y;}
void print();

 

 // Setters
void Date::set_day(int value);
void Date::set_month(int value);
void Date::set_year(int value);

}

// Implementando a data de aniversario
Date::Date(int d, int m , int y) : d{dd}, m{mm}, y{yy}{
std::cout << d << "/" << m << "/" << y;
};

//  Implementando Setters
void Date::set_day(int value) {
    if (value > 0 && value <= 31)
        d = value;
}

void Date::set_month(int value) {
    if (value > 0 && value <= 12)
        m = value;
}

void Date::set_year(int value) {
    if (value >= 0 && value <= 3000)
        y = value;
}

// Fim da Construção da Classe 

// Inicio do Progama
int main (){

  date::Date(){
std::cout << "Esse é o meu aniversario:"{12,12,1974} << Aniversario.get_day() << std::endl
Aniversario.set_day(10);

std::cout << "Esse é o mes do meu aniversario" <<  Aniversario.get_month() << std::endl
Aniversario.set_month(10);

std::cout << "Esse é o ano do meu aniversario" << Aniversario.get_year() << std::endl
Aniversario.set_year(70);
Aniversario.print()

return 0;
}
}



    


