#ifndef ANFIBIO_EXOTICO_H
#define ANFIBIO_EXOTICO_H

#include "anfibio.h"
#include "exotico.h"

namespace petfera {
	class AnfibioExotico : public Anfibio, Exotico {
		public:
			AnfibioExotico(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int total_mudas, string ultima_muda,
							string ibama, string pais_origem);
			AnfibioExotico();
			~AnfibioExotico();
	};
}

#endif