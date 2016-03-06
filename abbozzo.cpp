
#include<iostream>
#include"unit.h"
#include"item.h"
#include"champion.h"
#include"sivir.h"
#include"botrk.h"

using namespace std;

int main(){

	cout << "Sto creando Sivir..." << endl;

	sivir * s;


	cout << "Ciao Sivir!, a che livello sei?" << endl;

	int n;
	cin >> n;
	//s->lvlup(n-1);	//SEGMENTATION FAULT

	cout << "Ottimo, sivir è a livello " << n-1 << endl;
	cout << "Ora diamo a Sivir una botrk..." << endl;

	botrk b;

	s->get_item(b); 

	cout << "Fatto!" << endl;
	cout << "Ora vediamo il danno di un autoattacco" << endl;

	cout << "gne " << s->get_hp() << endl;		//qualcosa di sbagliato in come assegno i valori base a sivir
	cout << "1 autoattacco: " << s->get_ad()+s->get_bonus_ad() << endl;

	cout << "E la combo migliore e': " << endl;
	s->maxcombo();

	cout << "Niiiiiice!" << endl;

	return 0;
}
