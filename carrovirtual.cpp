
#include <iostream>

class Carro {
protected:
    int vel = 0;
    int aceleracao = 0;
    int freio = 0;

public:
    
    Carro(int vel, int aceleracao, int freio, Carro&Carro1) {
        this->vel = vel;
        this->aceleracao = aceleracao;
        this->freio = freio;
    }
    
    Carro() {} 

    int getVel() { return vel; }
    int getAceleracao() { return aceleracao; }
    int getfreio() { return freio; }

    virtual void fazersom(int fazersom) {
        std::cout << "o Carro 1 está Funcionando :\n";
    }

    void acelera(int aceleracao, int getAceleracao()) {
        vel += aceleracao;
    }

    void buzina(int buzina) {
        std::cout << "\nBuzina 1 Do carro 1 : " << buzina << std::endl;
    }
};

class Carro1 : public Carro {
public:
    virtual void acelera(int incremento) {
        vel += incremento;
        std::cout << "\nVelocidade Atual Do Carro 1: " << vel << " km/h\n" << getAceleracao() << std::endl;
    }

    virtual void fazersom(int fazersom) {
        std::cout << "\no Carro 2 está Funcionando" << fazersom << "\n";
    }

    void buzina(int som) {
        std::cout << "Buzina do Carro 2: " << som << "\n";
        std::cout << "Velocidade Atual Do Carro 2: " << vel << " km/h\n" << getAceleracao() << std::endl;
    }
};

int main() {
    Carro carro1;
    Carro1 carro2;
    Carro* ptrCarro;

    ptrCarro = &carro1;
    ptrCarro->buzina(1);
    ptrCarro->acelera(50, 0);
    ptrCarro->fazersom(0);

    Carro1* ptrCarro2;
    ptrCarro2 = &carro2;
    ptrCarro2->buzina(2);
    ptrCarro2->acelera(20);
    ptrCarro2->fazersom(0);

    return 0;
}
