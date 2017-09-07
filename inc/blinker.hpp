#ifndef BLINKER
#define BLINKER

#include "universo.hpp"
#include <iostream>

class Blinker : public Universo{
public:
	CelulaMatrix makeABlinker(CelulaMatrix universoAntigo, int x, int y);
};
#endif
