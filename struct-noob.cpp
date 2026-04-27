#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
	int matricula;
	double nota;
	double nota2;
	double media;
};
int main()
{
	dados aluno;
	cin >> aluno.matricula;	
	cin >> aluno.nota;
	cin >> aluno.nota2;
	
	aluno.media = ((aluno.nota * 2) + (aluno.nota2 * 3)) / (2 + 3);
	
	cout << fixed << setprecision(2);
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << "Nota da primeira prova: " << aluno.nota << endl;
	cout << "Nota da segunda prova: " << aluno.nota2 << endl;
	cout << "Media: " << aluno.media << endl;
	
	return 0;
}
