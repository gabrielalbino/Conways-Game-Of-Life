#ifndef CELULA
#define CELULA

#define ALTURA 25
#define LARGURA 50

class Celula{
private:
	bool isAlive;
	int x,y;
public:
	Celula(bool isAlive,int x,int y);
	
	bool getAlive();
	void setAlive(bool alive);
	int getX();
	int getY();

	void checkSurvival(Celula universo[ALTURA][LARGURA]);
	
};
#endif
