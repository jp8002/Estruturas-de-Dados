#include <iostream>
#include <locale>

using namespace std;

int soma( int nu);

int main (){
	int nu;

	cout << "Qual é o primeiro número?\n";
	cin >> nu;

	cout << "O resultado da soma é " << soma(nu);
	return 0;
}

int soma (int nu){
	if ((nu == 1) || (nu == 0)){
		return nu;
	}

	else{
		return soma(nu - 1) + nu;
	}
}