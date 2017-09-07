#include "gameoflife.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

void GameOfLife::setForma(int forma, int x, int y){
	switch(forma){
	case 1:{
		if(x >= 0 && y >= 0 && x < ALTURA && y < LARGURA)
			getUniverso()[x][y].setAlive(true);
		break;
	}
	case 2:{
		Block blockObj;
		setUniverso(blockObj.makeABlock(getUniverso(), x, y));
		break;
	}
	case 3:{
		Blinker blinkerObj;
		setUniverso(blinkerObj.makeABlinker(getUniverso(),x,y));
		break;
	}
	case 4:{
		Glider gliderObj;
		setUniverso(gliderObj.makeAGlider(getUniverso(),x,y));
		break;
	}
	}
}
