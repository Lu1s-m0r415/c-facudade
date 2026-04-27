#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
	int matricula;
	double nota;
	double nota2;
};
int main()
{
	dados aluno;
	cin >> aluno.matricula;	
	cin >> aluno.nota;
	cin >> aluno.nota2;
	
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << "Nota da primeira prova: " << aluno.nota << endl;
	cout << "Nota da segunda prova: " << aluno.nota2 << endl;
	
	return 0;
}
