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
			string tipo_sanguineo;
			char fatorRH;
			const string especialidade;
		public:
			Funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH);

			Funcionario();
			~Funcionario();


			void setID(int id);
			void setNome(string nome);
			void setCPF(string cpf);
			void setIdade(int idade);
			void setTipoSanguineo(string tipo_sanguineo);
			void setFatorRH(char fatorRH);
			void setEspecialidade(string especialidade);

			int getID();
			string getNome();
			string getCPF();
			short getIdade();
			string getTipoSanguineo();
			char getFatorRH();
			string getEspecialidade();

			friend ostream& operator<< (ostream &o, Funcionario const _funcionario);

	};
}

#endif