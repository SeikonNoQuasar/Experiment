
#include "sivir.h"
#include<iostream>

	sivir::sivir() : champion( /* base */ /*hp*/516, /*mana*/284, /*hpreg*/5.2, /*manareg*/8.0, /*armor*/22.2, /*mr*/30.0, /*ad*/57, 0, 0.625, 0, 0, 0, 0, 0, 500, 335, 0, 0, /*per lvl*/ 82, 50, 0.55, 0.9, 3.25, 0, 2.41, 0, 1.6, 0, 0, 0, 0, 0, 0, 0, 0, 0) {

	set_n_ability(4);
	}

	sivir::~sivir(){
	}

	float sivir::maxcombo(){
		std::cout << " AA + W(aa-reset) + AA + Q" << std::endl;
	}
