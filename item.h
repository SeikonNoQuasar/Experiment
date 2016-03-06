#ifndef __item__
#define __item__

class item {

	public:
		item();
		~item();

		float get_give_hp() const;
		float get_give_mana() const;
		float get_give_hp_reg() const;
		float get_give_mana_reg() const;
		float get_give_ar() const;
		float get_give_mr() const;
		float get_give_ad() const;
		float get_give_ap() const;
		float get_give_as() const;
		float get_give_apen() const;
		float get_give_mpen() const;
		float get_give_ls() const;
		float get_give_sv() const;
		float get_give_dmg_reg() const;
		float get_give_range() const;
		float get_give_ms() const;
		float get_give_crit() const;
		float get_give_cdr() const;

		void set_give_hp(float );
		void set_give_mana(float );
		void set_give_hp_reg(float );
		void set_give_mana_reg(float );
		void set_give_ar(float );
		void set_give_mr(float );
		void set_give_ad(float );
		void set_give_ap(float );
		void set_give_as(float );
		void set_give_apen(float );
		void set_give_mpen(float );
		void set_give_ls(float );
		void set_give_sv(float );
		void set_give_dmg_reg(float );
		void set_give_range(float );
		void set_give_ms(float );
		void set_give_crit(float );
		void set_give_cdr(float );

// next two funcions tell me if there is AT LEAST ONE atk or def passive
		void have_atk_passive();
		void have_def_passive();

	/*	virtual float atkpassive() const=0;		COMMENTO PERCHE' AL MOMENTO CREA CASINI IN COMPILAZIONE
		virtual float defpassive() const=0;		DI CHAMPION	*/

// next two functions tell me if there is AT LEAST ONE atk or def active
		void have_atk_active();
		void have_def_active();

	/*	virtual float atkactive() const=0;		COMMENTO PERCHE' AL MOMENTO CREA CASINI IN COMPILAZIONE
		virtual float defactive() const=0;		DI CHAMPION	*/


	private:
		float give_hp, give_mana;
		float give_hp_reg, give_mana_reg;
		float give_ar, give_mr;
		float give_ad, give_ap;
		float give_as;
		float give_apen, give_mpen;
		float give_ls, give_sv;
		float give_dmg_reg;
		int give_range, give_ms;
		int give_crit, give_cdr;
		int cost;

// non sono proprio sicurissimo di come si gestiscano le booleiane
		bool atk_passive, def_passive;
		bool atk_active, def_active;


};

#endif
