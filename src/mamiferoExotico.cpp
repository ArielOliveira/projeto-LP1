#include "mamiferoExotico.h"

namespace petfera {
		MamiferoExotico::MamiferoExotico(int id, string classe, string nome, char sexo, float tamanho, string dieta, 
						Veterinario veterinario, Tratador tratador, string batismo, string cor_pelo,
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
		this->cor_pelo = cor_pelo;
		this->ibama = ibama;
		this->pais_origem = pais_origem;
	}

	MamiferoExotico::MamiferoExotico() {}
	MamiferoExotico::~MamiferoExotico() {}
}