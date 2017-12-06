#ifndef NATIVO_H
#define NATIVO_H

#include "animalSilvestre.h"

namespace petfera {
	class Nativo : public AnimalSilvestre {
		protected:
			string uf_origem;
			string autorizacao;
		public:
			Nativo(string ibama, string uf_origem, string autorizacao);

			Nativo();
			~Nativo();

			void setUfOrigem(string uf_origem);
			void setAutorizacao(string autorizacao);

			string getUfOrigem();
			string getAutorizacao();
	};
}

#endif