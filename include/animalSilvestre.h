#ifndef ANIMAL_SILVESTRE_H
#define ANIMAL_SILVESTRE_H

#include <string>
using std::string;

namespace petfera {
	class AnimalSilvestre {
		protected:
			string ibama;
		public:
			AnimalSilvestre(string ibama);

			AnimalSilvestre();
			~AnimalSilvestre();

			void setIbama(string ibama);

			string getIbama();
	};
}

#endif