#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

// Nome: Pedro Leal Macedo  RA: 832768
// Nome: Vinicius Ferreira Araujo  RA: 832915
// Nome: Lucas Gabriel de Camargo Santos  RA:832792
// Nome: Eduardo da Silva Ribeiro  RA: 833021

class login_usuario {

    string name;
    string password;

    public:
        login_usuario();
        login_usuario(string nome, string senha);
    //get
        string get_name();
        string get_password();
        void imprime();
    //set
        void set_username(string nome);
        void set_password(string senha);
};

login_usuario::login_usuario() {
    name = "12345678";
    password = "12345678";
}

login_usuario::login_usuario(string nome, string senha) {
    set_username(nome);
    set_password(senha);

}

void login_usuario::set_username(string nome) {
    name = (nome.length() <= 20) ? nome : "12345678";
}

void login_usuario::set_password(string senha) {
    password = (senha.length() >= 8) ? senha : "12345678";
}

string login_usuario::get_name() {
    return name;
}

string login_usuario::get_password() {
    return password;
}

void login_usuario::imprime() {
    cout << "Name: " << get_name() << endl;
    cout << "Password: " << get_password() << endl;
}


int main() {
    login_usuario Murilo("Murilo123", "mu");
    Murilo.imprime();

    Murilo.set_username("MuriloGoated");
    Murilo.set_password("Amostradinho");

    Murilo.imprime();

}