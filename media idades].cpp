#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	
	int qtdEntrevistados, somaPesos, somaIdades, idade;
	float peso, mediaPesos, mediaIdades;
	
	qtdEntrevistados = 0;
	somaPesos = 0;
	somaIdades = 0;
	
	cout<<"Qual o peso do entrevistado: ";
	cin>> peso;
	
	while (peso!=0)
	{
		cout<<"Qual a idade do entrevistado? ";
		cin>> idade;
		
		qtdEntrevistados++;
		somaPesos +=peso;
		somaIdades+=idade;
		
		cout<<"Qual o peso do entrevistado? ";
		cin>>peso;
	}
	
	mediaPesos=somaPesos/qtdEntrevistados;
	mediaIdades=somaIdades/qtdEntrevistados;
	
	cout<<"Foram entrevistdas "<<qtdEntrevistados<<" pessoas.\n";
	cout<<"A m�dia de pesos �: "<<mediaPesos<<"\n";
	cout<<"A m�dia das idades �: "<<mediaIdades<<"\n";
}
