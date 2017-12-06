#include "reptil.h"

namespace petfera {
	Reptil::Reptil(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo, bool venenoso, string tipo_veneno) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
		this->venenoso = venenoso;
		this->tipo_veneno = tipo_veneno;
	}

	Reptil::Reptil() {}
	Reptil::~Reptil() {}

	void Reptil::setVenenoso(bool venenoso) {this->venenoso = venenoso;}
	void Reptil::setTipoVeneno(string tipo_veneno) {this->tipo_veneno = tipo_veneno;}

	bool Reptil::getVenenoso() {return venenoso;}
	string Reptil::getTipoVeneno() {return tipo_veneno;}
}