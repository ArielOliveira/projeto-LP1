#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using std::string;

#include "veterinario.h"
#include "tratador.h"

#include <ostream>
using std::ostream;

namespace petfera {
	class Animal {
		protected:
			int id;
			string classe;
			string nome;
			string cientifico;
			char sexo;
			float tamanho;
			string dieta;
			Veterinario veterinario;
			Tratador tratador;
			string batismo
;
		public:
			Animal(int id, string classe, string nome, string cientifico, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo);

			Animal();
			~Animal();


			void setID(int id);
			void setClasse(string classe);
			void setNome(string nome);
			void setCientifico(string cientifico);
			void setSexo(char sexo);
			void setTamanho(float tamanho);
			void setDieta(string dieta);
			void setVeterinario(Veterinario veterinario);
			void setTratador(Tratador tratador);
			void setBatismo(string batismo);

			int getId();
			string getClasse();
			string getNome();
			string getCientifico();
			char getSexo();
			float getTamanho();
			string getDieta();
			Veterinario getVeterinario();
			Tratador getTratador();
			string getBatismo();

			friend ostream& operator<< (ostream &o, Animal const _animal);


			
	};
}

#endif