#include "funcionario.h"

namespace petfera {
	Funcionario::Funcionario(int id, string nome, short idade, short tipo_sanguineo, char fatorRH, string especialidade) {
		this->id = id;
		this->nome = nome;
		this->idade = idade;
		this->tipo_sanguineo = tipo_sanguineo;
		this->fatorRH = fatorRH;
		this->especialidade = especialidade;
	}

	Funcionario::Funcionario() {}
	Funcionario::~Funcionario() {}

	void Funcionario::setID(int id) {this->id = id;}
	void Funcionario::setNome(string nome) {this->nome = nome;}
	void Funcionario::setIdade(int idade) {this->idade = idade;}
	void Funcionario::setTipoSanguineo(short tipo_sanguineo) {this->tipo_sanguineo = tipo_sanguineo;}
	void Funcionario::setFatorRH(char fatorRH) {this->fatorRH = fatorRH;}
	void Funcionario::setEspecialidade(string especialidade) {this->especialidade = especialidade;}

	int Funcionario::getID() {return id;}
	string Funcionario::getNome() {return nome;}
	short Funcionario::getIdade() {return idade;}
	short Funcionario::getTipoSanguineo() {return tipo_sanguineo;}
	char Funcionario::getFatorRH() {return fatorRH;}
	string Funcionario::getEspecialidade() {return especialidade;}
}