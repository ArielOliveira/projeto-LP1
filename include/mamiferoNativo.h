#ifndef MAMIFERO_NATIVO_H
#define MAMIFERO_NATIVO_H

#include "mamifero.h"
#include "nativo.h"

namespace petfera {
	class MamiferoNativo : public Mamifero, Nativo {
		public:
			MamiferoNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo,
							string ibama, string uf_origem, string autorizacao);
			MamiferoNativo();
			~MamiferoNativo();
	};
}

#endif