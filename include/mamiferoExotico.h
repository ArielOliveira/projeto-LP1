#ifndef MAMIFERO_EXOTICO_H
#define MAMIFERO_EXOTICO_H

#include "mamifero.h"
#include "exotico.h"

namespace petfera {
	class MamiferoExotico : public Mamifero, Exotico {
		public:
			MamiferoExotico(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo,
							string ibama, string pais_origem);
			MamiferoExotico();
			~MamiferoExotico();
	};
}

#endif