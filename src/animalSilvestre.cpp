#include "animalSilvestre.h"

namespace petfera {
	AnimalSilvestre::AnimalSilvestre(string ibama) {this->ibama = ibama;}

	AnimalSilvestre::AnimalSilvestre() {}
	AnimalSilvestre::~AnimalSilvestre() {}

	void AnimalSilvestre::setIbama(string ibama) {this->ibama = ibama;}

	string AnimalSilvestre::getIbama() {return ibama;}
}