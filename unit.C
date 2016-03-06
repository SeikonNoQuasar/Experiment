#include "unit.h"

// costruttore e distruttore

	unit::unit(){

// inizializzo le variabili a 0
	hp=0;
	mana=0;
	hp_reg=0;
	mana_reg=0;
	ar=0;
	mr=0;
	ad=0;
	ap=0;
	as=0;
	apen=0;
	mpen=0;
	ls=0;
	sv=0;
	dmg_reg=0;
	range=0;
	ms=0;
	crit=0;
	cdr=0;

	hp_lvl=0;
	mana_lvl=0;
	hp_reg_lvl=0;
	mana_reg_lvl=0;
	ar_lvl=0;
	mr_lvl=0;
	ad_lvl=0;
	ap_lvl=0;
	as_lvl=0;
	apen_lvl=0;
	mpen_lvl=0;
	ls_lvl=0;
	sv_lvl=0;
	dmg_reg_lvl=0;
	range_lvl=0;
	ms_lvl=0;
	crit_lvl=0;
	cdr_lvl=0;

	};

	unit::~unit(){
	};


// funzioni base
	float unit::get_hp() const{
		return hp;
	};	

	float unit::get_mana() const{
		return mana;
	};	

	float unit::get_hp_reg() const{
		return hp_reg;
	};	

	float unit::get_mana_reg() const{
		return mana_reg;
	};

	float unit::get_ar() const{
		return ar;
	};

	float unit::get_mr() const{
		return mr;
	};

	float unit::get_ad() const{
		return ad;
	};

	float unit::get_ap() const{
		return ap;
	};

	float unit::get_as() const{
		return as;
	};

	float unit::get_apen() const{
		return apen;
	};

	float unit::get_mpen() const{
		return mpen;
	};

	float unit::get_ls() const{
		return ls;
	};

	float unit::get_sv() const{
		return sv;
	};

	float unit::get_dmg_reg() const{
		return dmg_reg;
	};

	int unit::get_range() const{
		return range;
	};

	int unit::get_ms() const{
		return ms;
	};

	int unit::get_crit() const{
		return crit;
	};

	int unit::get_cdr() const{
		return cdr;
	};


	void unit::set_hp(float x){
		hp = hp + x;
	};

	void unit::set_mana(float x){
		mana = x;
	};

	void unit::set_hp_reg(float x){
		hp_reg = x;
	};

	void unit::set_mana_reg(float x){
		mana_reg = x;
	};

	void unit::set_ar(float x){
		ar = x;
	};

	void unit::set_mr(float x){
		mr = x;
	};

	void unit::set_ad(float x){
		ad = x;
	};

	void unit::set_ap(float x){
		ap = x;
	};

	void unit::set_as(float x){
		as = x;
	};

	void unit::set_apen(float x){
		apen = x;
	};

	void unit::set_mpen(float x){
		mpen = x;
	};

	void unit::set_ls(float x){
		ls = x;
	};

	void unit::set_sv(float x){
		sv = x;
	};

	void unit::set_dmg_reg(float x){
		dmg_reg = x;
	};

	void unit::set_range(int x){
		range = x;
	};

	void unit::set_ms(int x){
		ms = x;
	};

	void unit::set_crit(int x){
		crit = x;
	};

	void unit::set_cdr(int x){
		cdr = x;
	};

// funzioni level_up

	float unit::get_hp_lvl() const{
		return hp_lvl;
	};	

	float unit::get_mana_lvl() const{
		return mana_lvl;
	};	

	float unit::get_hp_reg_lvl() const{
		return hp_reg_lvl;
	};	

	float unit::get_mana_reg_lvl() const{
		return mana_reg_lvl;
	};

	float unit::get_ar_lvl() const{
		return ar_lvl;
	};

	float unit::get_mr_lvl() const{
		return mr_lvl;
	};

	float unit::get_ad_lvl() const{
		return ad_lvl;
	};

	float unit::get_ap_lvl() const{
		return ap_lvl;
	};

	float unit::get_as_lvl() const{
		return as_lvl;
	};

	float unit::get_apen_lvl() const{
		return apen_lvl;
	};

	float unit::get_mpen_lvl() const{
		return mpen_lvl;
	};

	float unit::get_ls_lvl() const{
		return ls_lvl;
	};

	float unit::get_sv_lvl() const{
		return sv_lvl;
	};

	float unit::get_dmg_reg_lvl() const{
		return dmg_reg_lvl;
	};

	int unit::get_range_lvl() const{
		return range_lvl;
	};

	int unit::get_ms_lvl() const{
		return ms_lvl;
	};

	int unit::get_crit_lvl() const{
		return crit_lvl;
	};

	int unit::get_cdr_lvl() const{
		return cdr_lvl;
	};


	void unit::set_hp_lvl(float x){
		hp_lvl = x;
	};

	void unit::set_mana_lvl(float x){
		mana_lvl = x;
	};

	void unit::set_hp_reg_lvl(float x){
		hp_reg_lvl = x;
	};

	void unit::set_mana_reg_lvl(float x){
		mana_reg_lvl = x;
	};

	void unit::set_ar_lvl(float x){
		ar_lvl = x;
	};

	void unit::set_mr_lvl(float x){
		mr_lvl = x;
	};

	void unit::set_ad_lvl(float x){
		ad_lvl = x;
	};

	void unit::set_ap_lvl(float x){
		ap_lvl = x;
	};

	void unit::set_as_lvl(float x){
		as_lvl = x;
	};

	void unit::set_apen_lvl(float x){
		apen_lvl = x;
	};

	void unit::set_mpen_lvl(float x){
		mpen_lvl = x;
	};

	void unit::set_ls_lvl(float x){
		ls_lvl = x;
	};

	void unit::set_sv_lvl(float x){
		sv_lvl = x;
	};

	void unit::set_dmg_reg_lvl(float x){
		dmg_reg_lvl = x;
	};

	void unit::set_range_lvl(int x){
		range_lvl =x;
	};

	void unit::set_ms_lvl(int x){
		ms_lvl = x;
	};

	void unit::set_crit_lvl(int x){
		crit_lvl = x;
	};

	void unit::set_cdr_lvl(int x){
		cdr_lvl = x;
	};



