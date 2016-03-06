#ifndef __champion__
#define __champion__

#include "unit.h"
#include "item.h"

class champion: public unit {
	public:

		// servono 18base + 18lvl stat per champion
		champion(float _hp, float _mana, float _hp_reg, float _mana_reg, float _ar, float _mr, float _ad, float _ap, float _as, float _apen, float _mpen, float _ls, float _sv, float _dmg_reg, int _range, int _ms, int _crit, int _cdr, float _hp_lvl, float _mana_lvl, float _hp_reg_lvl, float _mana_reg_lvl, float _ar_lvl, float _mr_lvl, float _ad_lvl, float _ap_lvl, float _as_lvl, float _apen_lvl, float _mpen_lvl, float _ls_lvl, float _sv_lvl, float _dmg_reg_lvl, int _range_lvl, int _ms_lvl, int _crit_lvl, int _cdr_lvl);
		~champion();

		//set e get delle varie "bonus_stat"

		float get_bonus_hp() const;
		float get_bonus_mana() const;
		float get_bonus_hp_reg() const;
		float get_bonus_mana_reg() const;
		float get_bonus_ar() const;
		float get_bonus_mr() const;
		float get_bonus_ad() const;
		float get_bonus_ap() const;
		float get_bonus_as() const;
		float get_bonus_apen() const;
		float get_bonus_mpen() const;
		float get_bonus_ls() const;
		float get_bonus_sv() const;
		float get_bonus_dmg_reg() const;
		float get_bonus_range() const;
		float get_bonus_ms() const;
		float get_bonus_crit() const;
		float get_bonus_cdr() const;
		int get_n_ability() const;

		void set_bonus_hp(float );
		void set_bonus_mana(float );
		void set_bonus_hp_reg(float );
		void set_bonus_mana_reg(float );
		void set_bonus_ar(float );
		void set_bonus_mr(float );
		void set_bonus_ad(float );
		void set_bonus_ap(float );
		void set_bonus_as(float );
		void set_bonus_apen(float );
		void set_bonus_mpen(float );
		void set_bonus_ls(float );
		void set_bonus_sv(float );
		void set_bonus_dmg_reg(float );
		void set_bonus_range(float );
		void set_bonus_ms(float );
		void set_bonus_crit(float );
		void set_bonus_cdr(float );
		void set_n_ability(int );

		///////////////

		void get_item(item );	//##### dice che non posso passare un tipo "astratto" item perchè contiene delle funzioni virtuali
		void lvlup(int );  //int == numeber of level-ups (not the new level)

		virtual float maxcombo() const =0;
		
		//abilità e masteries e rune
		
	private:
		int n_ability;
		float bonus_ad, bonus_ap;
		float bonus_ar, bonus_mr;

		float bonus_hp, bonus_mana;
		float bonus_hp_reg, bonus_mana_reg;
		float bonus_as;
		float bonus_apen, bonus_mpen;
		float bonus_ls, bonus_sv;
		float bonus_dmg_reg;
		int bonus_range, bonus_ms;
		int bonus_crit, bonus_cdr;
		
		
};

#endif

