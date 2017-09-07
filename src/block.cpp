#include "block.hpp"
/*
CelulaMatrix Block::makeABlock(Celula UniversoAntigo[ALTURA][LARGURA], int x, int y){
	setUniverso(UniversoAntigo);
	if(x < 0 || y < 0 || x > 24 || y > 49){
		std::cout << "Não foi possível gerar um block nas coordenadas (" << x << "," << y << ")" << std::endl;
		return getUniverso();
	}
	getUniverso()[x][y].setAlive(true);
	getUniverso()[x][y+1].setAlive(true);
	getUniverso()[x+1][y].setAlive(true);
	getUniverso()[x+1][y+1].setAlive(true);

	return getUniverso();
}
*/
CelulaMatrix Block::makeABlock(CelulaMatrix UniversoAntigo, int x, int y){
        setUniverso(UniversoAntigo);
        if(x < 0 || y < 0 || x >= ALTURA-1 || y >= LARGURA-1){
                std::cout << "Não foi possível gerar um block nas coordenadas (" << x << "," << y << ")" << std::endl;
                return getUniverso();
        }
        getUniverso()[x][y].setAlive(true);
        getUniverso()[x][y+1].setAlive(true);
        getUniverso()[x+1][y].setAlive(true);
        getUniverso()[x+1][y+1].setAlive(true);

        return getUniverso();
}
  
