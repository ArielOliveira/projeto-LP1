#ifndef ENTRADA_INVALIDA_H
#define ENTRADA_INVALIDA_H

class MyException : public invalid_argument {
	public:
		MyException() : invalid_argument("Valor invalido para o tipo solicitado!") {}
};

#endif