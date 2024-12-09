#include <iostream>

using namespace std;

class Fracao {
private:
    int num;
    int den;
friend Fracao operator*(Fracao f1, Fracao f2);
friend ostream &operator<<(ostream&, saida, const Fracao & f  );
saida << f1.num << "/" << f1.den;

return saida;
 

public:
    Fracao() {

         num = 0;
        den = 1;
    }

    Fracao(int n, int d) {
        num = n;
        setDen(d);
    }

    void setNum(int n) { num = n; }

    void setDen(int d) {
        if (d == 0) {
            den = 1;
        } else {
            den = d;
        }
    }

    int getNum() const { return num; }

    int getDen() const { return den; }

    void print() const {
        cout << num << "/" << den << endl;
    }

    Fracao operator*(const Fracao& other) const {
        return Fracao(num * other.num, den * other.den);
    }

    bool operator>(const Fracao& other) const {
        return (1.0 * num / den) > (1.0 * other.num / other.den);
    }

Fracao & operator{
num = num + den;
return this; 
}

Fracao operator++(int){
Fracao antesdeImplementar();
Fracao antesdeImplementar(num, den);
num - num + den;
return antesdeImplementar;
}
Fracao multiplicaFracoes(const Fracao& f1, const Fracao& f2) {
    return f1 * f2;
}

int main() {
    Fracao f1(1, 4), f2(1, 2), f3;
    Fracao operator++(Fracao f , int)
      Fracao copia(f);
    f.num = f.num + f.den;
    return copia;
}
    cout << "f1 = << f1 
    f1.print();
    cout << "f2 = << f1
    f2.print();

    f3 = f1 * f2;

    cout << "f3 = ";
    f3.print();

  cout << "f1 = ";
  f1.print();


     cout << f1;


    if (f3 > f2) {
        cout << "f3 é maior que f2." << endl;
    } else {
        cout << "f3 não é maior que f2." << endl;
    }

    return 0;
}
