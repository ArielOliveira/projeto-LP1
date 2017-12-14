#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "petferaLib.h"

using namespace petfera;

template <typename T>
bool lerTeclado(T &valor, Validacao valida, const char* dialogo = "Insira o valor: ") {
	string entrada;

	cout << dialogo;

	try {
		getline(cin, entrada);
		if (!valida(entrada)) throw MyException();

	} catch (MyException &ex) {
		cerr << ex.what() << endl;
		return false;
	}

	stringstream(entrada) >> valor;

	return true;
}

int main() {


	vector<Funcionario*> *f;	
	

	vector<Funcionario*>::iterator it;
	for (it = f->begin(); it < f->end(); it++) {
		cout << *(*it) << endl;
	}

	return 0;
}