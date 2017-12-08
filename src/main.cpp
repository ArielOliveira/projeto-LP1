#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "petferaLib.h"

using namespace petfera;

vector<Funcionario*>* carregarDadosFuncionario(ifstream &arquivo, int funcionarios) {
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
		
		f->insert(f->begin(), new Funcionario(id, nome, cpf, idade, tipo_sanguineo, fatorRH, especialidade));
	}
	return f;
}

int main() {


	vector<Funcionario*> *f;
	int funcionarios = 0;

	ifstream arquivo("lista.txt");

	if (arquivo.bad() || !arquivo || (arquivo.is_open() == 0)) {
			cerr << "O arquivo de entrada nao pode ser aberto." << endl;
			cerr << "O programa sera encerrado." << endl;
			exit(1);
		}
	string dummy;

	while (getline(arquivo, dummy)) funcionarios++;
	
	arquivo.clear();
	arquivo.seekg(0, arquivo.beg);

	cout << funcionarios << endl;

	f = carregarDadosFuncionario(arquivo, funcionarios);

	vector<Funcionario*>::iterator it;
	for (it = f->begin(); it < f->end(); it++) {
		cout << *it << endl;
	}

	

	



	return 0;
}