#include "glider.hpp"

CelulaMatrix Glider::makeAGlider(CelulaMatrix universoAntigo, int x, int y){
	setUniverso(universoAntigo);
	if(x < 0 || y < 0 || x >= ALTURA-4 || y >= LARGURA-4){
		std::cout << "Não foi possível gerar um glider nas coordenadas (" << x << "," << y << ")" << std::endl;
		return getUniverso();
	}
        getUniverso()[x+2][y].setAlive(true);
        getUniverso()[x][y+1].setAlive(true);
        getUniverso()[x+2][y+1].setAlive(true);
        getUniverso()[x+1][y+2].setAlive(true);
        getUniverso()[x+2][y+2].setAlive(true);
	
	return getUniverso();
}

CelulaMatrix Glider::deleteAGlider(CelulaMatrix universoAntigo, int x, int y){
        setUniverso(universoAntigo);
        if(x < 0 || y < 0 || x >= ALTURA-4 || y >= LARGURA-4){
                std::cout << "Não foi possível gerar um glider nas coordenadas (" << x << "," << y << ")" << std::endl;
                return getUniverso();
        }
        getUniverso()[x+2][y].setAlive(false);
        getUniverso()[x][y+1].setAlive(false);
        getUniverso()[x+2][y+1].setAlive(false);
        getUniverso()[x+1][y+2].setAlive(false);
        getUniverso()[x+2][y+2].setAlive(false);

        return getUniverso();

}
