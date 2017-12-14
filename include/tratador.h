#ifndef TRATADOR_H
#define TRATADOR_H

#include "funcionario.h"

namespace petfera {
	class Tratador : public Funcionario {
		private:
			const string especialidade = "Tratador";
		public:
			Tratador(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH);

			Tratador();
			~Tratador();
	};
}

#endif