#include "aveExotica.h"

namespace petfera {
		AveExotica::AveExotica(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, int tamanho_bico, int envergadura,
							string ibama, string pais_origem) {
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
		this->pais_origem = pais_origem;
	}

	AveExotica::AveExotica() {}
	AveExotica::~AveExotica() {}
}