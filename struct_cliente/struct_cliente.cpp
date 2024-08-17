//Desenvolva uma aplica��o para cadastrar cliente que far� um cr�dito em at� 12 vezes. Insira na estrutura informa��es pertinentes ao cliente.

#include <iostream>
#include <locale>

using namespace std;

int inserir_cpf();
string inserir_nome();
string inserir_endereco();
int inserir_anonasc();

int main(){
	setlocale(LC_ALL,"Portuguese");

	int total;

	cout << "Qual � o n�mero de clientes a serem ragistrados?" << endl;
	cin >> total;

	struct parcelado{
		int cpf;
		string nome;
		string endereco;
		int anonasc;
	};

	struct parcelado cliente[total];

	for (int i = 0; i < total; i++){
		cliente[i].cpf = inserir_cpf();
		cliente[i].nome = inserir_nome();
		cliente[i].endereco = inserir_endereco();
		cliente[i].anonasc = inserir_anonasc();

	}

	for (int i = 0; i < total; i++){
		system("cls");
		cout << "CPF: " << cliente[i].cpf << endl;
		cout << "NOME: " << cliente[i].nome << endl;
		cout << "ENDERECO: " << cliente[i].endereco << endl;
		cout << "ANO DE NASCIMENTO: " << cliente[i].anonasc << endl;
	}

	return 0;

}

int inserir_cpf(){
	int cpf;

	cout << "Qual � o cpf do cliente?" << endl;
	cin >> cpf;

	return cpf;
}

string inserir_nome(){
	string nome;

	cout << "Qual � o nome do cliente?" << endl;
	cin >> nome;

	return nome;
}

string inserir_endereco(){
	string endereco;

	cout << "Qual � o endereco do cliente?" << endl;
	cin >> endereco;

	return endereco;
}

int inserir_anonasc(){
	int ano;

	cout << "Qual � o ano do cliente?" << endl;
	cin >> ano;

	return ano;
}
