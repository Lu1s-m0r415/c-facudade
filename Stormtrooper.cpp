#include <iostream>
#include <iomanip>
using namespace std;

struct Stormtrooper
{
	int id;
	double im;
	double fa;
	double ga;
};
int main()
{
	Stormtrooper melhor;
	melhor.ga = 0;
	
	int id;
	double im;
	double fa;
	double ga_atual;
	
	cin >> id;
	
	while(id != 0)
	{
		cin >> im;
		cin >> fa;
		
		ga_atual = (im + fa) / 2;
		
		if(ga_atual > melhor.ga)
		{
			melhor.id = id;
			melhor.im = im;
			melhor.fa = fa;
			melhor.ga = ga_atual;
		}
		cin >> id;
	}	
	cout << "Stormtrooper escolhido: " << melhor.id << endl;
	cout << fixed << setprecision(2);
	cout << "GA = " << melhor.ga << endl;
	
	
	return 0;
}
