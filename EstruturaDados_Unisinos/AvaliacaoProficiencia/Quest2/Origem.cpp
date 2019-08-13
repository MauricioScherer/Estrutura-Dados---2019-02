#include<iostream>
#include "Jogador.h"

using namespace std;

int main()
{
	Jogador *player = new Jogador(100, 65);

	cout << "Vida: " << player->GetVida() << endl;
	cout << "Energia: " << player->GetEnergia() << endl;

	cout << "----------------------------" << endl;

	if(player->GetVida() > 0)
		player->SetVida(player->GetVida() - 10);
	if (player->GetEnergia() > 0)
		player->SetEnergia(player->GetEnergia() - 30);

	cout << "Vida nova: " << player->GetVida() << endl;
	cout << "Energia nova: " << player->GetEnergia() << endl;

	system("pause");
	return 0;
}