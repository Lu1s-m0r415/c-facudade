#include <iostream>
using namespace std;

int main()
{
	int mat[10][10];
	int N; // linhas
	int M; // colunas
	int l;
	int c;
	
	cin >> N >> M;

	for(l = 0; l < N; l++)
    {
		for(c = 0; c < M; c++)
			cin >> mat[l][c];
	}
	
	for(l = 0; l < N; l++)
    {
		for(c = 0; c < M; c++)
			cout << mat[l][c] << " ";
		cout << endl;
	}
		
	
	 return 0;
}
