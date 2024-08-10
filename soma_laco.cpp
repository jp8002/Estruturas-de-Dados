#include <iostream>
#include <locale>
using namespace std;

int main(){
	int nu, soma = 0;
	setlocale(LC_ALL,"Portuguese");

	cout << "Qual é o número inicial?\n";
	cin >> nu;

	for (nu; nu > 0; nu--){
		soma += nu;
	}

	cout << "O resultado da soma é " << soma;

	return 0;
}