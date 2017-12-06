#include "anfibio.h"

namespace petfera {
	Anfibio::Anfibio(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, int total_mudas, string ultima_muda) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
		this->total_mudas = total_mudas;
		this->ultima_muda = ultima_muda;
	}

	Anfibio::Anfibio() {}
	Anfibio::~Anfibio() {}

	void Anfibio::setTotalMudas(int total_mudas) {this->total_mudas = total_mudas;}
	void Anfibio::setUltimaMuda(string ultima_muda) {this->ultima_muda = ultima_muda;}

	int Anfibio::getTotalMudas() {return total_mudas;}
	string Anfibio::getUltimaMuda() {return ultima_muda;}
}