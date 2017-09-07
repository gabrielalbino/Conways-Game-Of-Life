#include "celula.hpp"

Celula::Celula(bool isAlive, int x, int y){
	this-> isAlive = isAlive;
	this-> x = x;
	this-> y = y;
}

bool Celula::getAlive(){
	return isAlive;
}

void Celula::setAlive(bool alive){
	isAlive = alive;
}

int Celula::getX(){
	return x;
}

int Celula::getY(){
	return y;
}

void Celula::checkSurvival(Celula universo[ALTURA][LARGURA]){
	int contador = 0;
	/*checa se a celula está nas bordas*/
	if(x == ALTURA-1){
		if(y == 0){
			contador+=(int)universo[x-1][y].getAlive();
			contador+=(int)universo[x-1][y+1].getAlive();
			contador+=(int)universo[x][y+1].getAlive();
		}
		else if (y == LARGURA-1){
			contador+=(int)universo[x-1][y].getAlive();
			contador+=(int)universo[x-1][y-1].getAlive();
			contador+=(int)universo[x][y-1].getAlive();
		}	
		else{
			contador+=(int)universo[x][y-1].getAlive();
			contador+=(int)universo[x][y+1].getAlive();
			contador+=(int)universo[x-1][y].getAlive();
			contador+=(int)universo[x-1][y-1].getAlive();
			contador+=(int)universo[x-1][y+1].getAlive();
		}
	}
	else if(x == 0){
                if(y == 0){
                        contador+=(int)universo[x+1][y].getAlive();
                        contador+=(int)universo[x+1][y+1].getAlive();
                        contador+=(int)universo[x][y+1].getAlive();
                }
                else if (y == LARGURA-1){
                        contador+=(int)universo[x+1][y].getAlive();
                        contador+=(int)universo[x+1][y-1].getAlive();
                        contador+=(int)universo[x][y-1].getAlive();
                }
                else{
                        contador+=(int)universo[x][y-1].getAlive();
                        contador+=(int)universo[x][y+1].getAlive();
                        contador+=(int)universo[x+1][y].getAlive();
                        contador+=(int)universo[x+1][y-1].getAlive();
                        contador+=(int)universo[x+1][y+1].getAlive();
                }
	}
	else if(y == 0){
                contador+=(int)universo[x-1][y].getAlive();
                contador+=(int)universo[x+1][y].getAlive();
                contador+=(int)universo[x-1][y+1].getAlive();
                contador+=(int)universo[x+1][y+1].getAlive();
                contador+=(int)universo[x][y+1].getAlive();
	}
	else if(y == LARGURA-1){
                contador+=(int)universo[x-1][y].getAlive();
                contador+=(int)universo[x+1][y].getAlive();
                contador+=(int)universo[x-1][y-1].getAlive();
                contador+=(int)universo[x+1][y-1].getAlive();
                contador+=(int)universo[x][y-1].getAlive();
	}
	/*se ele n tiver em nenhuma das bordas:*/
	else{
                contador+=(int)universo[x+1][y+1].getAlive();
                contador+=(int)universo[x+1][y].getAlive();
                contador+=(int)universo[x+1][y-1].getAlive();
                contador+=(int)universo[x-1][y+1].getAlive();
                contador+=(int)universo[x-1][y].getAlive();
                contador+=(int)universo[x-1][y-1].getAlive();
                contador+=(int)universo[x][y-1].getAlive();
                contador+=(int)universo[x][y+1].getAlive();
	}
	if(getAlive() == true && (contador <= 1 || contador >= 4)){
		setAlive(false);	
	}
	else if(getAlive() == false && contador == 3){
		setAlive(true);
	}
}
