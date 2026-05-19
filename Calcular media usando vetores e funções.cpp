#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos)
{
	float soma = 0;

	for(int i = 0;i < nAlunos; i++)
		soma += notas[i];
    

	return soma / nAlunos;	
}

int main()
{
	int nAlunos;
	float rmedia;
	
	cin >> nAlunos;
	
	int notas[100];
	
	for(int i = 0; i < nAlunos; i++)
		cin >> notas[i]; 
	
		
	rmedia = media(notas, nAlunos);
	
	cout << fixed << setprecision(2);
	cout << "Media da turma = " << rmedia << endl;
		
	return 0;
}
