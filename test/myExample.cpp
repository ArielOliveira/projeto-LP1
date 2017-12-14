#include <iostream>
using std::getline;
using std::cin;
using std::cerr;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <exception>
using std::invalid_argument;

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

typedef bool (*Validacao) (string&);

class MyException : public invalid_argument {
	public:
		MyException() : invalid_argument("Valor invalido para o tipo solicitado!") {}

};

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

void cadastrarFuncionario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fatorRH, string especialidade) {

}


int main() {

	string minha;

	lerTeclado<string>(minha, validarCPF, "Insira seu CPF: ");

	cout << minha << endl;

	int valor;

	lerTeclado<int>(valor, validarInteiroCampo);

	cout << valor << endl;

	//lerTeclado<char>(letra);

	//cout << valor << endl;
	//cout << letra << endl;

	return 0;
}
