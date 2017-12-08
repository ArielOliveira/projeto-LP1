#ifndef ANFIBIO_NATIVO_H
#define ANFIBIO_NATIVO_H

#include "anfibio.h"
#include "nativo.h"

namespace petfera {
	class AnfibioNativo : public Anfibio, Nativo {
		public:
			AnfibioNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int total_mudas, string ultima_muda,
							string ibama, string uf_origem, string autorizacao);
			AnfibioNativo();
			~AnfibioNativo();
	};
}

#endif