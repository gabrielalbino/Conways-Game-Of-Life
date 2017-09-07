#ifndef GLIDER
#define GLIDER

#include <iostream>
#include "universo.hpp"

class Glider : public Universo{
public:
	CelulaMatrix makeAGlider(CelulaMatrix universoAntigo, int x, int y);	
	CelulaMatrix deleteAGlider(CelulaMatrix universoAntigo, int x, int y);
};
#endif
