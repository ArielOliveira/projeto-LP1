#ifndef REPTIL_H
#define REPTIL_H

#include "animal.h"

namespace petfera {
	class Reptil : public Animal {
		protected:
			bool venenoso;
			string tipo_veneno;
		public:
			Reptil(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, bool venenoso, string tipo_veneno);

			Reptil();
			~Reptil();

			void setVenenoso(bool venenoso);
			void setTipoVeneno(string tipo_veneno);

			bool getVenenoso();
			string getTipoVeneno();

	};
}

#endif