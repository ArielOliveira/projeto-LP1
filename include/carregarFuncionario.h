#ifndef CARREGAR_FUNCIONARIO_H
#define CARREGAR_FUNCIONARIO_H

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

#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

namespace petfera {
	class CarregarFuncionario {
		private:
			const string DIR = "./data/Funcionarios.csv";

			int funcionarios;
			ifstream arquivo;

			void carregarArquivo();
		public:
			CarregarFuncionario();
			~CarregarFuncionario();

			int getFuncionarios();

			vector<Funcionario*>* carregarDadosFuncionarios();
	};
}

#endif