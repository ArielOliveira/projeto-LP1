#ifndef REGISTRO_FUNCIONARIO_H
#define REGISTRO_FUNCIONARIO_H

#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

#include <iostream>
using std::cerr;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <fstream>
using std::ofstream;

namespace petfera {
	class RegistroFuncionario {
		private:
			const string DIR = "./data/Funcionarios.csv";

			ofstream o;
			vector<Funcionario*> *funcionarios;

		public:
			RegistroFuncionario(vector<Funcionario*> *funcionarios);

			RegistroFuncionario();
			~RegistroFuncionario();

			void setFuncionarios(vector<Funcionario*> *funcionarios);

			void abrirArquivo();
			void fecharArquivo();

			void registrarFuncionarios();

			Funcionario ultimoFuncionarioRegistrado();
	};

}

#endif