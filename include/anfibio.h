#ifndef ANFIBIO_H
#define ANFIBIO_H

#include "animal.h"

namespace petfera {
	class Anfibio : public Animal {
		protected:	
			int total_mudas;
			string ultima_muda;

		public:
			Anfibio(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, int total_mudas, string ultima_muda);

			Anfibio();
			~Anfibio();

			void setTotalMudas(int total_mudas);
			void setUltimaMuda(string ultima_muda);

			int getTotalMudas();
			string getUltimaMuda();
	};
}

#endif 