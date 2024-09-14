#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int total;
	
	
	cout << "Quantas trufas serão cadastradas?" << endl;
	cin >> total;
	
	struct ingrediente{
		string nome;
		float qtd;
	};
		
	struct trufa{
		string sabor;
		float preco;
		ingrediente *ingredientes = new ingrediente[2];
	};

	trufa *trufas = new trufa[total];

	for(int i = 0; i < total; i++){
		cout << "Qual é o sabor da " << i + 1<<"º trufa?" << endl;
		cin >> trufas[i].sabor; 
		
		for(int j = 0; j < 2 ; j++){
			cout << "Qual é o nome do " << j + 1 << "º ingrediente?"  << endl;
			cin >> trufas[i].ingredientes[j].nome;
			
			cout << "Qual é a quantidade do " << j + 1 << "º ingrediente?"  << endl;
			cin >> trufas[i].ingredientes[j].qtd; 
			
			system("cls");
		}
		system("cls");
	}
	
	system("cls");
	
	for(int i = 0; i < total; i++){
		cout << trufas[i].sabor << endl;
		for (int j = 0; j < 2; j++){
			cout << trufas[i].ingredientes[j].nome << endl;
			cout << trufas[i].ingredientes[j].qtd << endl;
		}

	}
	
	cout << "Ainda está aqui: " << *pont_teste << endl; 
		
	delete[] trufas;

	return 0;

 }

