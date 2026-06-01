#include <iostream>

using namespace std;

int menores_ou_iguais(int vetor[], int N, int X)
{
	int CONTADOR = 0;  
	   	
	for(int i = 0; i < N; i++){
		if(vetor[i] <= X)
   		   CONTADOR++;
    }	
	
	return CONTADOR;
}
int main()
{
	int vetor[1000];
	int N = 0;
	int numero;
	
	cin >> numero;
	
	while(numero != 0)
	{
		if(N < 1000){
			vetor[N] = numero;
			N++;
		
		}
		
		cin >> numero;
	}      
	
	int X;
	cin >> X;
	
	int resultado;
	
	resultado = menores_ou_iguais(vetor, N, X);
	
	cout << resultado << endl;
	
	
	
	return 0;
}
