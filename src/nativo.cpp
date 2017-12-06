#include "nativo.h"

namespace petfera {
	Nativo::Nativo(string ibama, string uf_origem, string autorizacao) {
		this->ibama = ibama;
		this->uf_origem = uf_origem;
		this->autorizacao = autorizacao;
	}

	Nativo::Nativo() {}
	Nativo::~Nativo() {}

	void Nativo::setUfOrigem(string uf_origem) {this->uf_origem = uf_origem;}
	void Nativo::setAutorizacao(string autorizacao) {this->autorizacao = autorizacao;}

	string Nativo::getUfOrigem() {return uf_origem;}
	string Nativo::getAutorizacao() {return autorizacao;}
}