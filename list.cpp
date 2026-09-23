#include <iostream>
#include <list>

using namespace std;

int main()
{
	list <int> lista;    // criando a lista usando <int> para numeros inteiros
	int x;				 // valor auxiliar p/ escrever na lista
	
	//insere sempre no inicio da lista
	x = 1;
	lista.push_front(x);
	x = 2;
	lista.push_front(x);
	x = 3;
	lista.push_front(x);
	
	//insere sempre no final da fila
	x = 1;
	lista.push_back(x);
	x = 2;
	lista.push_back(x);
	x = 3;
	lista.push_back(x);
	
	//mostra o primeiro elemento
	x = *lista.begin();
	cout << x << endl;
	
	//remove o elemento do inicio da lista
	lista.pop_front(); 
	x = *lista.begin();
	cout << x << endl;
	
	
	return 0;
}
