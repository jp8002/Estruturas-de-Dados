/*Desenvolva uma aplicação para cadastrar carro. 
Crie uma estrutura para cadastro ( placa, ano, marca)
Crie uma estrutura para revisoes (data, local). 
É previsto 5 revisões.*/

#include <iostream>
#include <locale>
using namespace std;

struct revisao{
    int data;
    string local;
};
    
typedef struct cadastro{
    string placa;
    int ano;
    string marca;
    int mes;
    revisao preventiva;
} cadastro; 

void ad_carro(cadastro *carro);
revisao ad_revisao(revisao preventiva);


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int total;
    cout << "Quantos carros serão cadastrados?" << endl;
    cin >> total;
    
    cadastro *carro;
    
    carro = new cadastro[total];
    
    
    cout << carro << endl;
    for (int i = 0; i < total; i++){
        ad_carro(&carro[i]);
    }
    
    for (int i = 0; i < total; i++){
        system("cls");
        cout << "-------------CARRO " << i+1 << "-------------" << endl;
        cout << "PLACA: " << carro[i].placa << endl;
        cout << "ANO: " << carro[i].ano << endl;
        cout << "MARCA: " << carro[i].marca <<endl;
        cout << "MÊS DA COMPRA: " << carro[i].mes <<endl;
        cout << "O PRÓXIMO ANO DA REVISÃO: " << carro[i].preventiva.data <<endl;
        cout << "LOCAL DA REVISÃO: " << carro[i].preventiva.local <<endl;
    }
    
    delete[] carro;
    
    return 0;
}

void ad_carro(cadastro *carro){
    
    int escolha;
    
    cout << "Qual é a placa do carro?" << endl;
    cin >> carro->placa;

    cout << "Qual é o ano do carro?" << endl;
    cin >> carro->ano;
    
    cout << "Qual é a marca do carro?" << endl;
    cin >> carro->marca;
    
    cout << "Em qual mês o carro foi comprado carro?" << endl;
    cin >> carro->mes;
    
    carro->preventiva.data = carro->ano + 2;
        cout << "Escolha um centro para realizar a preventiva:\n1 - São Paulo\n2 - Campinas\n3 - Araras" << endl;
        cin >> escolha;
        
        switch(escolha){
            case 1:
                carro->preventiva.local = "São Paulo";
                break;
            
            case 2:
                carro->preventiva.local = "Campinas";
                break;
                
            case 3:
                carro->preventiva.local = "Araras";
                break;
        }
}
