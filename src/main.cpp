#include "gameoflife.hpp"


int main(){
	GameOfLife jogoDaVida;
	jogoDaVida.printUniverso();
	jogoDaVida.setForma(1,10,10);
	jogoDaVida.setForma(5,0,0);
	jogoDaVida.printUniverso();

	return 0;
}
