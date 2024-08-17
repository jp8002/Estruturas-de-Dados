#include <iostream>
#include <locale>

using namespace std;

string inserir_placa();
string inserir_nome();
string inserir_marca();
int inserir_ano();

int main(){
	setlocale(LC_ALL,"Portuguese");
	int total;
	
	cout << "Qual o número de carros a serem registrados?" << endl;
	cin >> total;
	struct automovel{
		string placa;
		string nome;
		string marca;
		int ano;
		
	};
		
	struct automovel carro[total];
	
	for (int i = 0; i < total; i++){
		carro[i].placa = inserir_placa();
		carro[i].nome = inserir_nome();
		carro[i].marca = inserir_marca();
		carro[i].ano = inserir_ano();
	}
	
	
	for (int i = 0; i < total; i++){
		system("cls");
		cout << "PLACA: " << carro[i].placa << endl;
		cout << "NOME: " << carro[i].nome<< endl;
		cout << "MARCA: " << carro[i].marca<< endl;
		cout << "ANO: " << carro[i].ano<< endl;
	}
	return 0;
}

string inserir_placa(){
	string placa;
	cout << "Qual é a placa do carro?" << endl;
	cin >> placa;
	return placa;
}

string inserir_nome(){
	string nome;
	cout << "Qual é nome do carro?" << endl;
	cin >> nome;
	return nome;
	
}

string inserir_marca(){
	string marca;
	cout << "Qual é a marca do carro?" << endl;
	cin >> marca;
	return marca;
	
}

int inserir_ano(){
	int ano;
	cout << "Qual é o ano do carro?" << endl;
	cin >> ano;
	return ano;
}
