#include "champion.h"

	champion::champion(float _hp, float _mana, float _hp_reg, float _mana_reg, float _ar, float _mr, float _ad, float _ap, float _as, float _apen, float _mpen, float _ls, float _sv, float _dmg_reg, int _range, int _ms, int _crit, int _cdr, float _hp_lvl, float _mana_lvl, float _hp_reg_lvl, float _mana_reg_lvl, float _ar_lvl, float _mr_lvl, float _ad_lvl, float _ap_lvl, float _as_lvl, float _apen_lvl, float _mpen_lvl, float _ls_lvl, float _sv_lvl, float _dmg_reg_lvl, int _range_lvl, int _ms_lvl, int _crit_lvl, int _cdr_lvl){

		set_hp( _hp);
		set_mana( _mana);
		set_hp_reg( _hp_reg);
		set_mana_reg( _mana_reg);
		set_ar( _ar);
		set_mr( _mr);
		set_ad( _ad);
		set_ap( _ap);
		set_as( _as);
		set_apen( _apen);
		set_mpen( _mpen);
		set_ls( _ls);
		set_sv( _sv);
		set_dmg_reg( _dmg_reg);
		set_range( _range);
		set_ms( _ms);
		set_crit( _crit);
		set_cdr( _cdr);
		set_hp_lvl( _hp_lvl);
		set_mana( _mana_lvl);
		set_hp_reg_lvl( _hp_reg_lvl);
		set_mana_reg_lvl( _mana_reg_lvl);
		set_ar_lvl( _ar_lvl);
		set_mr_lvl( _mr_lvl);
		set_ad_lvl( _ad_lvl);
		set_ap_lvl( _ap_lvl);
		set_as_lvl( _as_lvl);
		set_apen_lvl( _apen_lvl);
		set_mpen_lvl( _mpen_lvl);
		set_ls_lvl( _ls_lvl);
		set_sv_lvl( _sv_lvl);
		set_dmg_reg_lvl( _dmg_reg_lvl);
		set_range_lvl( _range_lvl);
		set_ms_lvl( _ms_lvl);
		set_crit_lvl( _crit_lvl);
		set_cdr_lvl( _cdr_lvl);
	}

	champion::~champion(){
	}

	//item

	void champion::lvlup(int N){

		set_hp( get_hp() + (N * get_hp_lvl()) );

		set_mana( get_mana() + (N * get_mana_lvl()) );

		set_hp_reg( get_hp_reg() + (N * get_hp_reg_lvl()) );

		set_mana_reg( get_mana_reg() + (N * get_mana_reg_lvl()) );

		set_ar( get_ar() + (N * get_ar_lvl()) );

		set_mr( get_mr() + (N * get_mr_lvl()) );

		set_ad( get_ad() + (N * get_ad_lvl()) );

		set_ap( get_ap() + (N * get_ap_lvl()) );

		set_as( get_as() + ( (N * get_as_lvl())*get_as()/100. ) );	//per lvl è percentuale

		set_apen( get_apen() + (N * get_apen_lvl()) );

		set_mpen( get_mpen() + (N * get_mpen_lvl()) );

		set_ls( get_ls() + (N * get_ls_lvl()) );

		set_sv( get_sv() + (N * get_sv_lvl()) );

		set_dmg_reg( get_dmg_reg() + (N * get_dmg_reg_lvl()) );

		set_range( get_range() + (N * get_range_lvl()) );

		set_ms( get_ms() + (N * get_ms_lvl()) );

		set_crit( get_crit() + (N * get_crit_lvl()) );

		set_cdr( get_cdr() + (N * get_cdr_lvl()) );
	};

	void champion::get_item(item it){

		set_bonus_hp( get_bonus_hp() + it.get_give_hp());

		set_bonus_mana( get_bonus_mana() + it.get_give_mana());

		set_bonus_hp_reg( get_bonus_hp_reg() + it.get_give_hp_reg());

		set_bonus_mana_reg( get_bonus_mana_reg() + it.get_give_mana_reg());

		set_bonus_ar( get_bonus_ar() + it.get_give_ar());

		set_bonus_mr( get_bonus_mr() + it.get_give_mr());

		set_bonus_ad( get_bonus_ad() + it.get_give_ad());

		set_bonus_ap( get_bonus_ap() + it.get_give_ap());

		set_bonus_as( get_bonus_as() + it.get_give_as() );	//è percentuale ed è motlipl/add ? (per ora add)

		set_bonus_apen( get_bonus_apen() + it.get_give_apen());

		set_bonus_mpen( get_bonus_mpen() + it.get_give_mpen());

		set_bonus_ls( get_bonus_ls() + it.get_give_ls());

		set_bonus_sv( get_bonus_sv() + it.get_give_sv());

		set_bonus_dmg_reg( get_bonus_dmg_reg() + it.get_give_dmg_reg());

		set_bonus_range( get_bonus_range() + it.get_give_range());

		set_bonus_ms( get_bonus_ms() + it.get_give_ms());

		set_bonus_crit( get_bonus_crit() + it.get_give_crit());

		set_bonus_cdr( get_bonus_cdr() + it.get_give_cdr());

	}

	


// varie set e get dei bonus_stat


	float champion::get_bonus_hp() const{
		return bonus_hp;
	};

	float champion::get_bonus_mana() const{
		return bonus_mana;
	};

	float champion::get_bonus_hp_reg() const{
		return bonus_hp_reg;
	};

	float champion::get_bonus_mana_reg() const{
		return bonus_mana_reg;
	};

	float champion::get_bonus_ar() const{
		return bonus_ar;
	};

	float champion::get_bonus_mr() const{
		return bonus_mr;
	};

	float champion::get_bonus_ad() const{
		return bonus_ad;
	};

	float champion::get_bonus_ap() const{
		return bonus_ap;
	};

	float champion::get_bonus_as() const{
		return bonus_as;
	};

	float champion::get_bonus_apen() const{
		return bonus_apen;
	};

	float champion::get_bonus_mpen() const{
		return bonus_mpen;
	};

	float champion::get_bonus_ls() const{
		return bonus_ls;
	};

	float champion::get_bonus_sv() const{
		return bonus_sv;
	};

	float champion::get_bonus_dmg_reg() const{
		return bonus_dmg_reg;
	};

	float champion::get_bonus_range() const{
		return bonus_range;
	};

	float champion::get_bonus_ms() const{
		return bonus_ms;
	};

	float champion::get_bonus_crit() const{
		return bonus_crit;
	};

	float champion::get_bonus_cdr() const{
		return bonus_cdr;
	};

	int champion::get_n_ability() const{
		return n_ability;
	};


	void champion::set_bonus_hp(float x){
		bonus_hp = x;
	};

	void champion::set_bonus_mana(float x){
		bonus_mana = x;
	};

	void champion::set_bonus_hp_reg(float x){
		bonus_hp_reg = x;	
	};

	void champion::set_bonus_mana_reg(float x){
		bonus_mana_reg = x;	
	};

	void champion::set_bonus_ar(float x){
		bonus_ar = x;
	};
	
	void champion::set_bonus_mr(float x){
		bonus_mr = x;
	};

	void champion::set_bonus_ad(float x){
		bonus_ad = x;
	};

	void champion::set_bonus_ap(float x){
		bonus_ap = x;
	};

	void champion::set_bonus_as(float x){
		bonus_as = x;
	};

	void champion::set_bonus_apen(float x){
		bonus_apen = x;
	};

	void champion::set_bonus_mpen(float x){
		bonus_mpen = x;
	};

	void champion::set_bonus_ls(float x){
		bonus_ls = x;
	};

	void champion::set_bonus_sv(float x){
		bonus_sv = x;
	};

	void champion::set_bonus_dmg_reg(float x){
		bonus_dmg_reg = x;
	};

	void champion::set_bonus_range(float x){
		bonus_range = x;
	};

	void champion::set_bonus_ms(float x){
		bonus_ms = x;
	};

	void champion::set_bonus_crit(float x){
		bonus_crit = x;
	};

	void champion::set_bonus_cdr(float x){
		bonus_cdr = x;
	};

	void champion::set_n_ability(int x){
		n_ability = x;
	};
