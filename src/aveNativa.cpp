#include "aveNativa.h"

namespace petfera {
	AveNativa::AveNativa(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int envergadura,
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
		this->tamanho_bico = tamanho_bico;
		this->envergadura = envergadura;
		this->ibama = ibama;
		this->uf_origem = uf_origem;
		this->autorizacao = autorizacao;
	}

	AveNativa::AveNativa() {}
	AveNativa::~AveNativa() {}
}