/*Desenvolva uma aplicação para cadastrar cliente em loja.
Crie uma estrutura para cadastro ( nome, endereço, cidade, estado)
Crie uma estrutura para parcelas (data, local). 
É previsto 12 parcelas.*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese"):
    struct parcela{
        int data;
        string local;
    }
    
    struct cadastro{
        string nome;
        string endereco;
        string cidade;
        string estado;
        parcela divida;
    }
    
    return 0;
}
