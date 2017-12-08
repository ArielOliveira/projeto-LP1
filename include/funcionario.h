#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
using std::endl;


#include <ostream>
using std::ostream;

#include <string>
using std::string;

namespace petfera {
	class Funcionario {
		protected:
			int id;
			string nome;
			string cpf;
			short idade;
			short tipo_sanguineo;
			char fatorRH;
			string especialidade;
		public:
			Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fatorRH, string especialidade);

			Funcionario();
			~Funcionario();


			void setID(int id);
			void setNome(string nome);
			void setCPF(string cpf);
			void setIdade(int idade);
			void setTipoSanguineo(short tipo_sanguineo);
			void setFatorRH(char fatorRH);
			void setEspecialidade(string especialidade);

			int getID();
			string getNome();
			string getCPF();
			short getIdade();
			short getTipoSanguineo();
			char getFatorRH();
			string getEspecialidade();

			friend ostream& operator<< (ostream &o, Funcionario const _funcionario);

	};
}

#endif