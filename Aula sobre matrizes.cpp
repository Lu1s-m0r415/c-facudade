#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];// Declarar uma matriz(ela começa por 0)
	int linha; // Contador de linhas
	int coluna; // Contador de colunas
	
	// Elementos da matriz
	mat[0][0] = 12;
	mat[0][1] = 15;
	mat[0][2] = 7;
	mat[1][0] = 93;
	mat[1][1] = 32;
	mat[1][2] = 47;
	
	// Mostrando a prieira linha
	linha = 0;
	for(coluna = 0; coluna < 3; coluna++)
		cout << mat[linha][coluna] << " ";
	cout << endl;
	
	cout << " " << endl;
	
	// Mostrando a primeira coluna
	coluna = 0;
	for(linha = 0; linha < 2; linha++)
		cout << mat[linha][coluna] << endl;
	
	cout << " " << endl;
	
	// Mostrando a matriz por linhas
	for(linha = 0; linha < 2; linha++)
	{
		for(coluna = 0; coluna < 3; coluna++)
			cout << mat[linha][coluna] << " ";
		cout << endl;
	}
	
	cout << " " << endl;
	
	// Mosrando a matriz por colunas(matriz tramposta)
		for(coluna = 0; coluna < 3; coluna++)
	{
		for(linha = 0; linha < 2; linha++)
			cout << mat[linha][coluna] << " ";
		cout << endl;
	}
	
	return 0;
}
