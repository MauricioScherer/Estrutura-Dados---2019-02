#include<iostream>

using namespace std;

int main()
{
	int vetorInt[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int maior = 0, menor = 99;

	for (int i = 9; i >= 0; i--)
	{
		if (vetorInt[i] > maior)
			maior = vetorInt[i];
		else if (vetorInt[i] < menor)
			menor = vetorInt[i];

		cout << vetorInt[i] << " / ";
	}

	cout << endl;
	cout << "--------------------------" << endl;
	cout << "maior: " << maior << endl;
	cout << "menor: " << menor << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "--------------------------" << endl;
		cout << "Inversao com " << i << " rotacao." << endl;

		int temp = vetorInt[0];
		for (int i = 0; i <= 8; i++)
		{
			vetorInt[i] = vetorInt[i + 1];
			cout << vetorInt[i] << " / ";
		}
		vetorInt[9] = temp;
		cout << vetorInt[9] << endl;
	}

	system("pause");
	return 0;
}