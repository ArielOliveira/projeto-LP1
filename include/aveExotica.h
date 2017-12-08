#ifndef AVE_EXOTICA_H
#define AVE_EXOTICA_H

#include "ave.h"
#include "exotico.h"

namespace petfera {
	class AveExotica : public Ave, Exotico {
		public:
			AveExotica(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int evergadura,
							string ibama, string pais_origem);
			AveExotica();
			~AveExotica();
	};
}

#endif