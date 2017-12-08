#ifndef REPTIL_EXOTICO_H
#define REPTIL_EXOTICO_H

#include "reptil.h"
#include "exotico.h"

namespace petfera {
	class ReptilExotico : public Reptil, Exotico {
		public:
			ReptilExotico(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, bool venenoso, string tipo_veneno,
							string ibama, string pais_origem);
			ReptilExotico();
			~ReptilExotico();
	};
}

#endif