#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];
	int l, c;
	int maior;
	int lmax, cmax;
	
	mat[0][0] = 12;
	mat[0][1] = 15;
	mat[0][2] = 7;
	mat[1][0] = 93;
	mat[1][1] = 32;
	mat[1][2] = 47;
	
	lmax = 0;
	cmax = 0;
	
	maior = mat[0][0];
	
	for(l = 0; l < 2; l++)
		for(c = 0; c < 3; c++)
			if(mat[l][c] > maior)
			{
				maior = mat[l][c];
				lmax = l;
				cmax = c;
			}
    cout << "Maior elemento: " << maior << endl;
    cout << "l = " << lmax << endl;
    cout << "c = " << cmax << endl;
	
	return 0;
}
