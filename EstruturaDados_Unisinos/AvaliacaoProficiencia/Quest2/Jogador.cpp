#include "Jogador.h"

Jogador::Jogador()
{
	_vida = 100;
	_energia = 75;
}

Jogador::Jogador(int p_vida, int p_energia)
{
	_vida = p_vida;
	_energia = p_energia;
}


Jogador::~Jogador()
{
}

int Jogador::GetVida()
{
	return _vida;
}

void Jogador::SetVida(int p_vida)
{
	_vida = p_vida;
}

int Jogador::GetEnergia()
{
	return _energia;
}

void Jogador::SetEnergia(int p_energia)
{
	_energia = p_energia;
}
