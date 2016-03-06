#include "botrk.h"

	botrk::botrk(){
		
		set_give_as( 40);	//sto usando le funzioni di "item" ma non sono sicuro sia questo il modo giusto
		set_give_ad( 25);
		set_give_ls( 10);

		have_atk_passive();
		have_atk_active();
	}

	botrk::~botrk(){
	};

	float botrk::atkpassive(float curr_hp) const{
		return (curr_hp/100.)*6;
	};

	float botrk::atkactive(float max_hp) const{
		return (max_hp/100.)*10;
	}

// manca la cura attraverso l'attiva (e anche la movemente speed steal). come implementare?
