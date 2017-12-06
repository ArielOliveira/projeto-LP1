#include "ave.h"

namespace petfera {
	Ave::Ave(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int envergadura) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
		this->tamanho_bico = tamanho_bico;
		this->envergadura = envergadura;
	}

	Ave::Ave() {}
	Ave::~Ave() {}

	void Ave::setTamanhoBico(int tamanho_bico) {this->tamanho_bico = tamanho_bico;}
	void Ave::setEnvergadura(int envergadura) {this->envergadura = envergadura;}

	int Ave::getTamanhoBico() {return tamanho_bico;}
	int Ave::getEnvergadura() {return envergadura;}

}