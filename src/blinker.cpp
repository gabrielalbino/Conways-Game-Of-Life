#include "blinker.hpp"

CelulaMatrix Blinker::makeABlinker(CelulaMatrix universoAntigo, int x, int y){
	setUniverso(universoAntigo);
	if(x<=0 ||y <= 0 || x >= ALTURA-1 || y >= LARGURA-1){
		std::cout << "Não foi possível gerar um blinker nas coordenadas (" << x << "," << y << ")" << std::endl;
		return getUniverso();
	}
	getUniverso()[x+1][y].setAlive(true);
	getUniverso()[x][y].setAlive(true);
	getUniverso()[x-1][y].setAlive(true);

	return getUniverso();
}
