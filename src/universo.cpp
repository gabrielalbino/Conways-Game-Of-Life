#include "universo.hpp"

Universo::Universo(){
	int x, y;
	for(x = 0; x < ALTURA; x++){
		for(y = 0; y < LARGURA; y++){
			uni[x][y].setAlive(false);
			uni[x][y].setX(x);
			uni[x][y].setY(y);
		}
	}
}

CelulaMatrix Universo::getUniverso(){
	return uni;
}
/*
void Universo::setUniverso(CelulaMatrix uni){
	int x, y;
        for(x = 0; x < ALTURA; x++){
                for(y = 0; y < LARGURA; y++){
                        this-> uni[x][y].setX(uni[x][y].getX());
			this-> uni[x][y].setY(uni[x][y].getY());
			this-> uni[x][y].setAlive(uni[x][y].getAlive());
                }
        }
}
*/
void Universo::setUniverso(Celula uni[ALTURA][LARGURA]){
        int x, y;
        for(x = 0; x < ALTURA; x++){
                for(y = 0; y < LARGURA; y++){
                        this-> uni[x][y].setX(uni[x][y].getX());
                        this-> uni[x][y].setY(uni[x][y].getY());
                        this-> uni[x][y].setAlive(uni[x][y].getAlive());
                }
	}
}

void Universo::printUniverso(){
        int x, y;
        for(x = 0; x < ALTURA; x++){
                for(y = 0; y < LARGURA; y++){
			if(uni[x][y].getAlive()) std::cout << "\u25AA";
			else std::cout << " ";
                }
	std::cout << std::endl;
        }
}
