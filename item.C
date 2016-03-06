#include "item.h"

	item::item(){

		give_hp=0;
		give_mana=0;
		give_hp_reg=0;
		give_mana_reg=0;
		give_ar=0;
		give_mr=0;
		give_ad=0;
		give_ap=0;
		give_as=0;
		give_apen=0;
		give_mpen=0;
		give_ls=0;
		give_sv=0;
		give_dmg_reg=0;
		give_range=0;
		give_ms=0;
		give_crit=0;
		give_cdr=0;
		cost=0;

		atk_passive=0;
		def_passive=0;
		atk_active=0;
		def_active=0;
	};

	item::~item(){
	};

	float item::get_give_hp() const{
		return give_hp;
	};

	float item::get_give_mana() const{
		return give_mana;
	};

	float item::get_give_hp_reg() const{
		return give_hp_reg;
	};

	float item::get_give_mana_reg() const{
		return give_mana_reg;
	};

	float item::get_give_ar() const{
		return give_ar;
	};

	float item::get_give_mr() const{
		return give_mr;
	};

	float item::get_give_ad() const{
		return give_ad;
	};

	float item::get_give_ap() const{
		return give_ap;
	};

	float item::get_give_as() const{
		return give_as;
	};

	float item::get_give_apen() const{
		return give_apen;
	};

	float item::get_give_mpen() const{
		return give_mpen;
	};

	float item::get_give_ls() const{
		return give_ls;
	};

	float item::get_give_sv() const{
		return give_sv;
	};

	float item::get_give_dmg_reg() const{
		return give_dmg_reg;
	};

	float item::get_give_range() const{
		return give_range;
	};

	float item::get_give_ms() const{
		return give_ms;
	};

	float item::get_give_crit() const{
		return give_crit;
	};

	float item::get_give_cdr() const{
		return give_cdr;
	};


	void item::set_give_hp(float x){
		give_hp = x;
	};

	void item::set_give_mana(float x){
		give_mana = x;
	};

	void item::set_give_hp_reg(float x){
		give_hp_reg = x;	
	};

	void item::set_give_mana_reg(float x){
		give_mana_reg = x;	
	};

	void item::set_give_ar(float x){
		give_ar = x;
	};
	
	void item::set_give_mr(float x){
		give_mr = x;
	};

	void item::set_give_ad(float x){
		give_ad = x;
	};

	void item::set_give_ap(float x){
		give_ap = x;
	};

	void item::set_give_as(float x){
		give_as = x;
	};

	void item::set_give_apen(float x){
		give_apen = x;
	};

	void item::set_give_mpen(float x){
		give_mpen = x;
	};

	void item::set_give_ls(float x){
		give_ls = x;
	};

	void item::set_give_sv(float x){
		give_sv = x;
	};

	void item::set_give_dmg_reg(float x){
		give_dmg_reg = x;
	};

	void item::set_give_range(float x){
		give_range = x;
	};

	void item::set_give_ms(float x){
		give_ms = x;
	};

	void item::set_give_crit(float x){
		give_crit = x;
	};

	void item::set_give_cdr(float x){
		give_cdr = x;
	};

	void item::have_atk_passive(){
		atk_passive = 1;
	};

	void item::have_def_passive(){
		def_passive = 1;
	};

	void item::have_atk_active(){
		atk_active = 1;
	};

	void item::have_def_active(){
		def_active = 1;
	};
