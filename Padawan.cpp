#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct dados
{
	string nome;
	int pontos;
	
};
int main()
{
	dados melhor;
	
	string nome;
	int pontos;
	int N;
	int i;
	double soma;
	double media;
	
	melhor.pontos = 0;
	
	cin >> N;
	
	for(i = 0; i < N; i++)
	{
		cin >> nome;
		cin >> pontos;
		
		soma += pontos;
		
		if(pontos > melhor.pontos)
		{
			melhor.pontos = pontos;
			melhor.nome = nome;
		}			 			
		
	}
	
	media = soma / N;
	
	cout << "Padawan com mais pontos: " << melhor.nome << endl;
	cout << "Pontos: " << melhor.pontos << endl;
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media << " pontos" << endl;
	
	return 0;
}
