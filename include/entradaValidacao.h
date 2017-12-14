#ifndef ENTRADA_VALIDACAO_H
#define ENTRADA_VALIDACAO_H

bool validarInteiro(string &valor) {
	for (std::size_t i = 0; i < valor.size(); i++) {
		if (valor.at(i) < '0' || valor.at(i) > '9') return false;
	}
	return true;
}

bool validarFatorRH(string &valor) {
	if (valor.size() > 1) return false;
	if (valor.compare("M") == 0 || valor.compare("F") == 0) return true;

	return false;
}

bool validarInteiroCampo(string &valor) {
	if (valor.size() > 4) return false;
	if (!validarInteiro(valor)) return false;

	return true;
}

bool validarTipoSanguineo(string &valor) {
	if (valor.size() > 1) return false;
	if (valor.compare("A") == 0 || valor.compare("B") == 0 ||
		valor.compare("AB") == 0 || valor.compare("O") == 0) return true;

	return false;
}

bool validarCPF(string &valor) {
	if (valor.size() < 11) return false;
	
	if (!validarInteiro(valor)) return false;

	valor.insert(3,  1,  '.');
	valor.insert(7,  1,  '.');
	valor.insert(11, 1,  '-');

	return true;
}

#endif