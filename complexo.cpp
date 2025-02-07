
#include <iostream>
#define complexo_h
#include <stdio.h>

class Complex {
private:
    float re, im;
    
public:
    Complex(float r = 0, float i = 0) {
        re = r;
        im = i;
    }
    
    void print() {
        std::cout << re << " + " << im << "i" << std::endl;
    }
    
    Complex add(Complex& par) {
        float x = this->re + par.re;
        float y = this->im + par.im;
        return Complex(x, y);
    }
    
    Complex sub(Complex& par) {
        float x = this->re - par.re;
        float y = this->im - par.im;
        return Complex(x, y);



      int main () {
        Complex n1(10, 20); ,  n2(5, 15);
        std::cout << "n1: ";
        n1.print();

        std::cout << "n2: ";
        n2.print();

        return 0;
      }
    }


