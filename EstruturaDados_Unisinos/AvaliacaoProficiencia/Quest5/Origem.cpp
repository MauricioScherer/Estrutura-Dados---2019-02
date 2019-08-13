#include<iostream>

using namespace std;

int main()
{
	int vetorInt[10]{20, 21, 22, 23, 24, 25, 30, 35, 40, 45};
	int soma = 0;

	for (int i = 0; i < 10; i++)
	{
		soma += vetorInt[i];
	}

	cout << "Soma: " << soma << endl;

	system("pause");
	return 0;
}