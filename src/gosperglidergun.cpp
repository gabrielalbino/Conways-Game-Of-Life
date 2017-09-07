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

	setUniverso(blockObj.makeABlock(getUniverso(), x, y+4));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+10, y+5));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+16, y+5));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+20, y+3));
        setUniverso(blinkerObj.makeABlinker(getUniverso(), x+21, y+3));
        setUniverso(blockObj.makeABlock(getUniverso(), y+34, y+2));

        getUniverso()[x+11][y+3].setAlive(true);
        getUniverso()[x+11][y+7].setAlive(true);
        getUniverso()[x+12][y+2].setAlive(true);
        getUniverso()[x+12][y+8].setAlive(true);
        getUniverso()[x+13][y+2].setAlive(true);
        getUniverso()[x+13][y+8].setAlive(true);
        getUniverso()[x+14][y+5].setAlive(true);
        getUniverso()[x+15][y+3].setAlive(true);
        getUniverso()[x+15][y+7].setAlive(true);
        getUniverso()[x+17][y+5].setAlive(true);
        getUniverso()[x+22][y+1].setAlive(true);
        getUniverso()[x+22][y+5].setAlive(true);
        getUniverso()[x+24][y].setAlive(true);
        getUniverso()[x+24][y+1].setAlive(true);
        getUniverso()[x+24][y+5].setAlive(true);
        getUniverso()[x+24][y+6].setAlive(true);
        getUniverso()[x+34][y+2].setAlive(true);
        return getUniverso();
}
