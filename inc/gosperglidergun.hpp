#ifndef GOSPERGLIDERGUN
#define GOSPERGLIDERGUN

#include <iostream>
#include "universo.hpp"

class GosperGliderGun : public Universo{
public:
	CelulaMatrix makeAGosperGliderGun(CelulaMatrix universoAntigo, int x, int y);
	CelulaMatrix deleteAGosperGliderGun(CelulaMatrix universoAntigo, int x, int y);
};
#endif
