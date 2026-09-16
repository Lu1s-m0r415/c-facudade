#include <iostream>
using namespace std;

int main()
{
	int N;             // tamanho do vetor
	int *vetor = NULL; // ponteiro para o vetor
	int i;
	
	// Lendo tamanho desejado
	cin >> N;
	
	// Alocando memoria para o vetor
	vetor = new int[N];
	
	// lendo o vetor
	for(i = 0; i < N; i++)
		cin >> vetor[i];
	
	for(i = 0; i < N; i++)
		cout << vetor[i] << endl;

	// liberando a memoria alocada
	delete [] vetor;
	
	return 0;
}
