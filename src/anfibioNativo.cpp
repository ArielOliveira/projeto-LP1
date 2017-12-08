#include "anfibioNativo.h"

namespace petfera {
	AnfibioNativo::AnfibioNativo(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int total_mudas, string ultima_muda,
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
		this->total_mudas = total_mudas;
		this->ultima_muda = ultima_muda;
		this->ibama = ibama;
		this->uf_origem = uf_origem;
		this->autorizacao = autorizacao;
	}

	AnfibioNativo::AnfibioNativo() {}
	AnfibioNativo::~AnfibioNativo() {}
}