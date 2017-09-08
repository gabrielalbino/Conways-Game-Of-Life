#ifndef GAMEOFLIFE
#define GAMEOFLIFE

#include "universo.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"
#include "gosperglidergun.hpp"


class GameOfLife : public Universo{
public:
	void setForma(int forma, int x, int y);
	void erase();
	void run();
};
#endif
