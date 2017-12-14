#include "carregarFuncionario.h"

namespace petfera {

	CarregarFuncionario::CarregarFuncionario() {
		funcionarios = 0;

		carregarArquivo();

		string dummy;
		while (getline(arquivo, dummy)) funcionarios++;

		arquivo.clear();
		arquivo.seekg(0, arquivo.beg);
	}

	CarregarFuncionario::~CarregarFuncionario() {}

	void CarregarFuncionario::carregarArquivo() {
		arquivo.open(DIR);

		if (arquivo.bad() || !arquivo || (arquivo.is_open() == 0)) {
			cerr << "O arquivo de entrada nao pode ser aberto." << endl;
			cerr << "O programa sera encerrado." << endl;
			exit(1);
		}
	}

	int CarregarFuncionario::getFuncionarios() {return funcionarios;}

	vector<Funcionario*>* CarregarFuncionario::carregarDadosFuncionarios() {
		int id;
		string nome, cpf, especialidade, tipo_sanguineo;
		short idade;
		char fatorRH;

		vector<Funcionario*> *f = new vector<Funcionario*>(funcionarios);

		for (int i = 0; i < funcionarios; i++) {
			arquivo >> id;
			arquivo.ignore();
		
			getline(arquivo, nome, ';');
		
			getline(arquivo, cpf, ';');
		
			arquivo >> idade;
			arquivo.ignore();

			getline(arquivo, tipo_sanguineo, ';');

			arquivo >> fatorRH;
			arquivo.ignore();

			getline(arquivo, especialidade, '\n');

			if (especialidade.compare("Veterinario") == 0) f->at(i) = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, fatorRH);
			else f->at(i) = new Tratador(id, nome, cpf, idade, tipo_sanguineo, fatorRH);
		}
		return f;
	}
}