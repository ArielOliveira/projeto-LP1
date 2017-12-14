#include "veterinario.h"

namespace petfera {
	Veterinario::Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH) {
		this->id = id;
		this->nome = nome;
		this->cpf = cpf;
		this->idade = idade;
		this->tipo_sanguineo = tipo_sanguineo;
		this->fatorRH = fatorRH;
	}

	Veterinario::Veterinario() {}
	Veterinario::~Veterinario() {}
}