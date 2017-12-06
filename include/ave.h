#ifndef AVE_H
#define AVE_H

#include "animal.h"

namespace petfera {
	class Ave : public Animal {
		protected:
			int tamanho_bico;
			int envergadura;
		public:
			Ave(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int envergadura);

			Ave();
			~Ave();

			void setTamanhoBico(int tamanho_bico);
			void setEnvergadura(int envergadura);

			int getTamanhoBico();
			int getEnvergadura();
	};
}

#endif