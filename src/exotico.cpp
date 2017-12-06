#include "exotico.h"

namespace petfera {
	Exotico::Exotico(string ibama, string pais_origem) {
		this->ibama = ibama;
		this->pais_origem = pais_origem;
	}

	Exotico::Exotico() {}
	Exotico::~Exotico() {}

	void Exotico::setPaisOrigem(string pais_origem) {this->pais_origem = pais_origem;}

	string Exotico::getPaisOrigem() {return pais_origem;}
}