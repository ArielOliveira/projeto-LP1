#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using std::string;

#include "veterinario.h"
#include "tratador.h"

namespace petfera {
	class Animal {
		protected:
			int id;
			string classe;
			string nome;
			char sexo;
			float tamanho;
			string dieta;
			Veterinario veterinario;
			Tratador tratador;
			string batismo;
	};
}

#endif