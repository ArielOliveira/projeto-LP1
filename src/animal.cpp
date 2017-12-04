#include "animal.h"

namespace petfera {
	Animal::Animal(int id, string classe, string nome, char sexo, float tamanho, string dieta, Veterinario veterinario, Tratador tratador, string batismo) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
	}

	Animal::Animal() {}
	Animal::~Animal() {}

	void Animal::setID(int id) {this->id = id;}
	void Animal::setClasse(string classe) {this->classe = classe;}
	void Animal::setNome(string nome) {this->nome = nome;}
	void Animal::setSexo(char sexo) {this->sexo = sexo;}
	void Animal::setTamanho(float tamanho) {this->tamanho = tamanho;}
	void Animal::setDieta(string dieta) {this->dieta = dieta;}
	void Animal::setVeterinario(Veterinario veterinario) {this->veterinario = veterinario;}
	void Animal::setTratador(Tratador tratador) {this->tratador = tratador;}
	void Animal::setBatismo(string batismo) {this->batismo = batismo;}

	int Animal::getId() {return id;}
	string Animal::getClasse() {return classe;}
	string Animal::getNome() {return nome;}
	char Animal::getSexo() {return sexo;}
	float Animal::getTamanho() {return tamanho;}
	string Animal::getDieta() {return dieta;}
	Veterinario Animal::getVeterinario() {return veterinario;}
	Tratador Animal::getTratador() {return tratador;}
	string Animal::getBatismo() {return batismo;}
}