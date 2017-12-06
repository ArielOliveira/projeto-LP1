#ifndef EXOTICO_H
#define EXOTICO_H

#include "animalSilvestre.h"

namespace petfera {
	class Exotico : public AnimalSilvestre {
		protected:	
			string pais_origem;
		public:
			Exotico(string ibama, string pais_origem);

			Exotico();
			~Exotico();

			void setPaisOrigem(string pais_origem);

			string getPaisOrigem();
	};
}

#endif