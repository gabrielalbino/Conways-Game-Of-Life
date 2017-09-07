#ifndef BLOCK
#define BLOCK

#include <iostream>
#include "universo.hpp"

class Block : public Universo{
public:
	CelulaMatrix makeABlock(Celula universoAntigo[ALTURA][LARGURA], int x, int y);
};
#endif
