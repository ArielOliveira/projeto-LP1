#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"

namespace petfera {
	class Mamifero : public Animal {
		protected:
			string cor_pelo;
		public:
			Mamifero(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo);

			Mamifero();
			~Mamifero();

			void setCorPelo(string cor_pelo);

			string getCorPelo();
	};
}

#endif