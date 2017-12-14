#ifndef VETERINARIO_H
#define VETERINARIO_H

#include "funcionario.h"

namespace petfera {
	class Veterinario : public Funcionario {
		private:
			const string especialidade = "Veterinario";
		public:
			Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH);

			Veterinario();
			~Veterinario();
	};
}

#endif