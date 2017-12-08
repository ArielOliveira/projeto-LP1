#ifndef REPTIL_NATIVO_H
#define REPTIL_NATIVO_H

#include "reptil.h"
#include "nativo.h"

namespace petfera {
	class ReptilNativo : public Reptil, Nativo {
		public:
			ReptilNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, bool venenoso, string tipo_veneno,
							string ibama, string uf_origem, string autorizacao);
			ReptilNativo();
			~ReptilNativo();
	};
}

#endif