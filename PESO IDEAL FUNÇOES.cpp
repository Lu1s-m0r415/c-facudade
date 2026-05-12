#include <iostream>
#include <iomanip>
using namespace std;

float peso(float h, char sexo)
{
	if(sexo == 'M')
		return (72.7 * h) - 58;
	
	else
		return (62.1 * h) - 44.7;
		
}
int main()
{
	float h;
	char sexo;
	
	cin >> h >> sexo;
	
	float ideal = peso(h, sexo);
	
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << ideal << " kg" << endl;
	
	return 0;
}
