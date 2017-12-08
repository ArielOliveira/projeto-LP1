#include "funcionario.h"

namespace petfera {
	Funcionario::Funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH, string especialidade) {
		this->id = id;
		this->nome = nome;
		this->cpf = cpf;
		this->idade = idade;
		this->tipo_sanguineo = tipo_sanguineo;
		this->fatorRH = fatorRH;
		this->especialidade = especialidade;
	}

	Funcionario::Funcionario() {}
	Funcionario::~Funcionario() {}

	void Funcionario::setID(int id) {this->id = id;}
	void Funcionario::setNome(string nome) {this->nome = nome;}
	void Funcionario::setCPF(string cpf) {this->cpf = cpf;}
	void Funcionario::setIdade(int idade) {this->idade = idade;}
	void Funcionario::setTipoSanguineo(string tipo_sanguineo) {this->tipo_sanguineo = tipo_sanguineo;}
	void Funcionario::setFatorRH(char fatorRH) {this->fatorRH = fatorRH;}
	void Funcionario::setEspecialidade(string especialidade) {this->especialidade = especialidade;}

	int Funcionario::getID() {return id;}
	string Funcionario::getNome() {return nome;}
	string Funcionario::getCPF() {return cpf;}
	short Funcionario::getIdade() {return idade;}
	string Funcionario::getTipoSanguineo() {return tipo_sanguineo;}
	char Funcionario::getFatorRH() {return fatorRH;}
	string Funcionario::getEspecialidade() {return especialidade;}

	ostream& operator<< (ostream &o, Funcionario const _funcionario) {
		o << _funcionario.id << ";"
		  << _funcionario.nome << ";" 
		  << _funcionario.cpf << ";"
		  << _funcionario.idade << ";"
		  << _funcionario.tipo_sanguineo << ";"
		  << _funcionario.fatorRH << ";"
		  << _funcionario.especialidade << endl;
		return o;
	}
}