#pragma once
class Jogador
{
public:
	Jogador();
	Jogador(int p_vida, int p_energia);
	~Jogador();

	int GetVida();
	void SetVida(int p_vida);

	int GetEnergia();
	void SetEnergia(int p_energia);
private:
	int _vida, _energia;
};

