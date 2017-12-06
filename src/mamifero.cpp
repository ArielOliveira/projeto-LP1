#include "mamifero.h"

namespace petfera {
	Mamifero::Mamifero(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
		this->cor_pelo = cor_pelo;
	}

	Mamifero::Mamifero() {}
	Mamifero::~Mamifero() {}

	void Mamifero::setCorPelo(string cor_pelo) {this->cor_pelo = cor_pelo;}

	string Mamifero::getCorPelo() {return cor_pelo;}
}