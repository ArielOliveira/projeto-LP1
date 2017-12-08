#include "reptilNativo.h"

namespace petfera {
	ReptilNativo::ReptilNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, bool venenoso, string tipo_veneno,
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
		this->venenoso = venenoso;
		this->tipo_veneno = tipo_veneno;
		this->ibama = ibama;
		this->uf_origem = uf_origem;
		this->autorizacao = autorizacao;
	}

	ReptilNativo::ReptilNativo() {}
	ReptilNativo::~ReptilNativo() {}
}