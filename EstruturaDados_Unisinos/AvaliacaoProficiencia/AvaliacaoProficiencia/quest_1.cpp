#include<iostream>

using namespace std;

int main()
{
	//declaracao de variaveis
	int *ponteiro;
	int inteiro = 0;

	//ponteiro s� recebe endere�o
	//assim que a variavel recebe endere�o do inteiro ela recebe o caminho dessa variavel. Entao sempre que um valor for atribuido ao ponteiro ele vai guardar no mesmo espa�o de memoria que esta a variavel inteiro
	ponteiro = &inteiro;	
	*ponteiro = 10;

	cout << "variavel inteira: " << inteiro << endl;
	cout << "variavel ponteiro: " << *ponteiro << endl;

	system("pause");
	return 0;
}