#ifndef AVE_NATIVA_H
#define AVE_NATIVA_H

#include "ave.h"
#include "nativo.h"

namespace petfera {
	class AveNativa : public Ave, Nativo {
		public:
			AveNativa(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int evergadura,
							string ibama, string uf_origem, string autorizacao);
			AveNativa();
			~AveNativa();
	};
}

#endif