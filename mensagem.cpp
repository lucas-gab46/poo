#include <iostream>
using namespace std;

class Mensagem {
protected:
    int contatos;
    int dms;
    int notifications;

public:
    Mensagem(int c, int d, int n) : contatos(c), dms(d), notifications(n) {}
    virtual ~Mensagem() {}

    virtual void enviar() {
        cout << contatos << " Contatos encontrados." << endl;
        cout << dms << " DMs preparadas." << endl;
        cout << notifications << " Notificações a enviar." << endl;
    }
};

class Email : public Mensagem {
private:
    int emails;

public:
    Email(int c, int d, int n, int e) : Mensagem(c, d, n), emails(e) {}
    void enviar() override {
        cout << contatos << " Encontrando Contato..." << endl;
        cout << emails << " Enviando Email..." << endl;
        cout << notifications << " Notificando o usuário..." << endl;
    }
};

class SMS : public Mensagem {
public:
    SMS(int c, int d, int n) : Mensagem(c, d, n) {}
    void enviar() override {
        cout << contatos << " Encontrando Contato..." << endl;
        cout << dms << " Mandando DM para usuário..." << endl;
        cout << notifications << " Notificando o usuário..." << endl;
    }
};

int main() {
    Email e(1, 2, 3, 4)
    SMS s(1, 2, 3);
    
    cout << "Mensagens Enviadas Com Sucesso!" << endl;
    e.enviar();
    s.enviar();
    
    
return 0;

};
