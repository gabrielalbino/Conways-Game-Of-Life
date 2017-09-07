#include "gosperglidergun.hpp"
#include "block.hpp"
#include "blinker.hpp"

CelulaMatrix GosperGliderGun::makeAGosperGliderGun(CelulaMatrix universoAntigo, int x, int y){
	setUniverso(universoAntigo);
	if(x < 0 || y < 0 || x > ALTURA-9 || y > LARGURA-35){
		std::cout << "Não foi possível gerar uma gosper glider gun nas coordenadas (" << x << "," << y << ")" << std::endl;
		return getUniverso();
	}
	Block blockObj;
	Blinker blinkerObj;

	setUniverso(blockObj.makeABlock(getUniverso(), x+4, y));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+5, y+10));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+5, y+16));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+3, y+20));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+3, y+21));
        setUniverso(blockObj.makeABlock(getUniverso(), y+2, y+34));

        getUniverso()[x+3][y+11].setAlive(true);
        getUniverso()[x+7][y+11].setAlive(true);
        getUniverso()[x+2][y+12].setAlive(true);
        getUniverso()[x+8][y+12].setAlive(true);
        getUniverso()[x+2][y+13].setAlive(true);
        getUniverso()[x+8][y+13].setAlive(true);
        getUniverso()[x+5][y+14].setAlive(true);
        getUniverso()[x+3][y+15].setAlive(true);
        getUniverso()[x+7][y+15].setAlive(true);
        getUniverso()[x+5][y+17].setAlive(true);
        getUniverso()[x+1][y+22].setAlive(true);
        getUniverso()[x+5][y+22].setAlive(true);
        getUniverso()[x][y+24].setAlive(true);
        getUniverso()[x+1][y+24].setAlive(true);
        getUniverso()[x+5][y+24].setAlive(true);
        getUniverso()[x+6][y+24].setAlive(true);
        getUniverso()[x+2][y+34].setAlive(true);
        return getUniverso();
}
