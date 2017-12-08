#include "mamiferoNativo.h"

namespace petfera {
	MamiferoNativo::MamiferoNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo,
							string ibama, string uf_origem, string autorizacao) {
		this->id = id;
		this->classe = classe;
		this->nome = nome;
		this->sexo = sexo;
		this->tamanho = tamanho;
		this->dieta = dieta;
		this->veterinario = veterinario;
		this->tratador = tratador;
		this->batismo = batismo;
		this->cor_pelo = cor_pelo;
		this->ibama = ibama;
		this->uf_origem = uf_origem;
		this->autorizacao = autorizacao;
	}

	MamiferoNativo::MamiferoNativo() {}
	MamiferoNativo::~MamiferoNativo() {}
}