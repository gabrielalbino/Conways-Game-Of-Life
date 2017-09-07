#include "gameoflife.hpp"
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
	case 5:{
		GosperGliderGun gosperObj;
		setUniverso(gosperObj.makeAGosperGliderGun(getUniverso(),x,y));
		break;
	}
        case 6:{
                if(x >= 0 && y >= 0 && x < ALTURA && y < LARGURA)
                        getUniverso()[x][y].setAlive(false);
                break;
        }
        case 7:{
                Block blockObj;
                setUniverso(blockObj.deleteABlock(getUniverso(), x, y));
                break;
        }
        case 8:{
                Blinker blinkerObj;
                setUniverso(blinkerObj.deleteABlinker(getUniverso(),x,y));
                break;
        }
        case 9:{
                Glider gliderObj;
                setUniverso(gliderObj.deleteAGlider(getUniverso(),x,y));
                break;
        }
        case 10:{
                GosperGliderGun gosperObj;
                setUniverso(gosperObj.deleteAGosperGliderGun(getUniverso(),x,y));
                break;
        }
	}
}
