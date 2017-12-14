#include "registroFuncionario.h"

namespace petfera {
	RegistroFuncionario::RegistroFuncionario(vector<Funcionario*> *funcionarios) {this->funcionarios = funcionarios;}

	RegistroFuncionario::RegistroFuncionario() {}
	RegistroFuncionario::~RegistroFuncionario() {}

	void RegistroFuncionario::setFuncionarios(vector<Funcionario*> *funcionarios) {this->funcionarios = funcionarios;}

	void RegistroFuncionario::abrirArquivo() {
		o.open(DIR);
		if (!o) {
			cerr << "Erro ao criar arquivo." << endl;
			cerr << "Verifique diretório de execução." << endl;
		}
	}

	void RegistroFuncionario::fecharArquivo() {
		o.close();
	}

	void RegistroFuncionario::registrarFuncionarios() {
		for (vector<Funcionario*>::iterator it = funcionarios->begin(); it < funcionarios->end(); it++) {
			o << *(*it) << endl;
		}
	}

}