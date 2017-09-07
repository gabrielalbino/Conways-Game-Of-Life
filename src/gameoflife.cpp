#include "gameoflife.hpp"
#include "block.hpp"


void GameOfLife::setForma(int forma, int x, int y){
	switch(forma){
	case 1:{
		Block blockObj;
		setUniverso(blockObj.makeABlock(getUniverso(), x, y));
		break;
	}

	}
}
