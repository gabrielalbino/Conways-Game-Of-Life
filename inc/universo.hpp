#ifndef UNIVERSO
#define UNIVERSO

#include <array>
#include "celula.hpp"
#include <iostream>

typedef Celula (&CelulaMatrix)[ALTURA][LARGURA];

class Universo{
private:
	Celula uni[ALTURA][LARGURA];
public:
	Universo();

	CelulaMatrix getUniverso();
	void setUniverso(CelulaMatrix uni);
	void setUniverso(Celula uni[ALTURA][LARGURA]);
	void printUniverso();
};

#endif
