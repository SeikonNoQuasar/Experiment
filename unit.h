#ifndef __unit__
#define __unit__

class unit {
	public:

// costruttore e distruttore
	unit();
	~unit();

//funzioni caratteristiche base
		float get_hp() const;
		float get_mana() const;
		float get_hp_reg() const;
		float get_mana_reg() const;
		float get_ar() const;
		float get_mr() const;
		float get_ad() const;
		float get_ap() const;
		float get_as() const;
		float get_apen() const;
		float get_mpen() const;
		float get_ls() const;
		float get_sv() const;
		float get_dmg_reg() const;
		int get_range() const;
		int get_ms() const;
		int get_crit() const;
		int get_cdr() const;

		void set_hp(float );
		void set_mana(float );
		void set_hp_reg(float );
		void set_mana_reg(float );
		void set_ar(float );
		void set_mr(float );
		void set_ad(float );
		void set_ap(float );
		void set_as(float );
		void set_apen(float );
		void set_mpen(float );
		void set_ls(float );
		void set_sv(float );
		void set_dmg_reg(float );
		void set_range(int );
		void set_ms(int );
		void set_crit(int );
		void set_cdr(int );

// funzioni caratteristiche level_up

		float get_hp_lvl() const;
		float get_mana_lvl() const;
		float get_hp_reg_lvl() const;
		float get_mana_reg_lvl() const;
		float get_ar_lvl() const;
		float get_mr_lvl() const;
		float get_ad_lvl() const;
		float get_ap_lvl() const;
		float get_as_lvl() const;
		float get_apen_lvl() const;
		float get_mpen_lvl() const;
		float get_ls_lvl() const;
		float get_sv_lvl() const;
		float get_dmg_reg_lvl() const;
		int get_range_lvl() const;
		int get_ms_lvl() const;
		int get_crit_lvl() const;
		int get_cdr_lvl() const;

		void set_hp_lvl(float );
		void set_mana_lvl(float );
		void set_hp_reg_lvl(float );
		void set_mana_reg_lvl(float );
		void set_ar_lvl(float );
		void set_mr_lvl(float );
		void set_ad_lvl(float );
		void set_ap_lvl(float );
		void set_as_lvl(float );
		void set_apen_lvl(float );
		void set_mpen_lvl(float );
		void set_ls_lvl(float );
		void set_sv_lvl(float );
		void set_dmg_reg_lvl(float );
		void set_range_lvl(int );
		void set_ms_lvl(int );
		void set_crit_lvl(int );
		void set_cdr_lvl(int );





// virtual per il level up (???)
		virtual void lvlup(int N)=0;
		
		
	private:

///// Caratteristiche base (sono in totale: 18, di cui solo le ultime 4 sono intere)
		float hp, mana;			//health and mana
		float hp_reg, mana_reg;		//health regen and mana regen
		float ar, mr;			//armor and magic resist
		float ad, ap;			//attack damage and ability power
		float as;			//attack speed
		float apen, mpen;		//armor and magic penetration
		float ls, sv; 			//lifesteal and spellvamp
		float dmg_reg;			//regeneration from all kind of damage
		int range, ms;			//range and movement speed
		int crit, cdr;			//crit chance and cooldown reduction

// Caratteristiche level_up
		float hp_lvl, mana_lvl;
		float hp_reg_lvl, mana_reg_lvl;
		float ar_lvl, mr_lvl;
		float ad_lvl, ap_lvl;
		float as_lvl;
		float apen_lvl, mpen_lvl;
		float ls_lvl, sv_lvl;
		float dmg_reg_lvl;
		int range_lvl, ms_lvl;
		int crit_lvl, cdr_lvl;

};

#endif
