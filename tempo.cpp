#include <stdio.h>
 // Cabeçalho - Header
class Tempo{

private:
int hora,minutos,segundos; //   Membros de Dados


public:
Tempo::Tempo() { // Construtor -- Inicializando
hora = 0;
minutos = 0;
segundos = 0;
}

Tempo::Tempo(int hh ,int mm ,int ss) {
setTempo(hh,mm,ss);
}

void Tempo::setTempo(int hh ,int mm ,int ss){
hora = hh;
minutos = mm;
segundos = ss;
}

void Imprime();

~Tempo();


};