#ifndef __BotRK__
#define __BotRK__

#include "item.h"

class botrk: public item {
	public:
	
		botrk();		//target max hp and target current hp
		~botrk();

		float atkpassive(float ) const;
		float atkactive(float ) const;

};

#endif
