#include<iostream>

using namespace std;

int main()
{
	int numeroDigitado;

	cout << "digite um numero inteiro positivo ou numero 0 para finalizar: ";
	cin >> numeroDigitado;

	if (numeroDigitado == 0)
	{
		cout << "programa finalizado." << endl;
	}
	else if(numeroDigitado >= 5 && numeroDigitado <= 15)
	{
		cout << "numero digitado entre 5 e 15: " << numeroDigitado << endl;
	}

	system("pause");
	return 0;
}