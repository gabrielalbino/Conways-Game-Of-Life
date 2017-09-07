#ifndef CELULA
#define CELULA

#define ALTURA 25
#define LARGURA 50

class Celula{
private:
	bool isAlive;
	int x,y;
public:
	Celula();
	
	bool getAlive();
	void setAlive(bool alive);
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);

	void checkSurvival(Celula universo[ALTURA][LARGURA]);
	
};
#endif
