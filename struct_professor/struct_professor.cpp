// Online C++ compiler to run C++ program online
#include <iostream>
#include <locale>

using namespace std;

string registrar_cpf();
int registrar_codigo();
string registrar_nome();
int registrar_numero();
int registrar_nasc();


int main(){
    setlocale(LC_ALL,"Portuguese");
    int total;

    struct docente{
        string cpf;
        int codigo;
        string nome;
        int numero;
        int nasc;
    };

    cout << "Quantos professores serão registrados" << endl;
    cin >> total;

    struct docente professor[total];

    for (int i = 0; i < total; i++){
        professor[i].cpf = registrar_cpf();
        professor[i].codigo = registrar_codigo();
        professor[i].nome = registrar_nome();
        professor[i].numero = registrar_numero();
        professor[i].nasc = registrar_nasc();
    }

    for (int i = 0; i < total; i++){
        cout << professor[i].cpf << endl;
        cout << professor[i].codigo << endl;
        cout << professor[i].nome << endl;
        cout << professor[i].numero << endl;
        cout << professor[i].nasc << endl;
    }

    return 0;
}

string registrar_cpf(){
    string cpf;

    cout << "Qual é o cpf do professor?" << endl;
    cin >> cpf;

    return cpf;
}

int registrar_codigo(){
    int codigo;

    cout << "Qual é o codigo do professor?" << endl;
    cin >> codigo;

    return codigo;
}

string registrar_nome(){
    string nome;

    cout << "Qual é o nome do professor?" << endl;
    cin >> nome;

    return nome;
}

int registrar_numero(){
    int numero;

    cout << "Qual é o numero do professor?" << endl;
    cin >> numero;

    return numero;
}

int registrar_nasc(){
    int nasc;

    cout << "Qual é a data de nascimento do professor?" << endl;
    cin >> nasc;

    return nasc;
}
