#include "gameoflife.hpp"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(){
	GameOfLife jogoDaVida;
	int aux, opcao, x, y, nroGer;
	do{
		cout << "\033[2J";
		cout << "\033[0;0f";
		cout << "Universo celular atual:\n";
		jogoDaVida.printUniverso();
		cout << endl;
		cout << "Escolha uma opção:\n";
		cout << "0 - Encerrar Modificações no universo celular\n";
		cout << "1 - Adcionar uma celula no universo celular\n";
		cout << "2 - Adcionar um block no universo celular\n";
		cout << "3 - Adcionar um blinker no universo celular\n";
		cout << "4 - Adcionar um glider no universo celular\n";
		cout << "5 - Adcionar uma gosperGliderGun no universo celular\n";
		cout << "6 - Remover uma celula do universo celular\n";
		cout << "7 - Remover um block do universo celular\n";
		cout << "8 - Remover um blinker do universo celular\n";
		cout << "9 - Remover um glider do universo celular\n";
		cout << "10 - Remover uma gosperGliderGun no universo celular\n";
		cout << "Opção: ";
		cin >> opcao;
		if(opcao > 0 && opcao <= 10){
			cout << "Insira as coordenadas X (1 a 25) e Y (1 a 50): ";
			cin >> x >> y;
			jogoDaVida.setForma(opcao, x-1, y-1);
		}
	}while(opcao != 0);
	cout << "Insira o numero de gerações que você deseja: ";
	cin >> nroGer;
	for(aux = 0; aux < nroGer; aux++){
	        cout << "\033[2J";
                cout << "\033[0;0f";
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
		jogoDaVida.run();
		jogoDaVida.printUniverso();
	}

	return 0;
}
