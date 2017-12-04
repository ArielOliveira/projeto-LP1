#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

namespace petfera {
	class Funcionario {
		protected:
			int id;
			string nome;
			short idade;
			short tipo_sanguineo;
			char fatorRH;
			string especialidade;
		public:
			Funcionario(int id, string nome, short idade, short tipo_sanguineo, char fatorRH, string especialidade);

			Funcionario();
			~Funcionario();


			void setID(int id);
			void setNome(string nome);
			void setIdade(int idade);
			void setTipoSanguineo(short tipo_sanguineo);
			void setFatorRH(char fatorRH);
			void setEspecialidade(string especialidade);

			int getID();
			string getNome();
			short getIdade();
			short getTipoSanguineo();
			char getFatorRH();
			string getEspecialidade();
	};
}

#endif