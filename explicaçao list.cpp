#include <iostream>
#include <list>

using namespace std;

int main()
{
	list <int> lista;    // criando a lista usando <int> para numeros inteiros
	list <int>::iterator p; // *ponteiro*
	int x;				 // valor auxiliar p/ escrever na lista
	
	// Lendo os elementos da lista
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}
	
 	// Mostrando os elementos da lista
 	for (p = lista.begin(); p != lista.end(); p++)
 		cout << *p << endl;
	
	// Liberando a memoria alocada
	while(!lista.empty())
		lista.pop_front();
	 
	return 0;
}
