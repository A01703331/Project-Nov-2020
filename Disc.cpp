/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Disc.hpp"

Disc::Disc(){ //Constructor por default
	atribute.name = "Rising Edge";
	skill = "Mel";
	stat_req = "Atk";
	req = 1;
	atribute.rarity = 1;
	level = 1;
	custom = 0;
};

Disc::Disc(string n, string s, string sr, int rq, int r, int lv, bool c):
           skill(s), stat_req(sr), req(rq),level(lv), custom(c){
    atribute.name = n;
    atribute.rarity = r;
    set_value(skill);
} //Constructor que incorpora variables

//Funciones de getters

string Disc::get_name(){
	return atribute.name;
};

string Disc::get_skill(){
	return skill;
};

string Disc::get_stat_req(){
	return stat_req;
};

int Disc::get_req(){
	return req;
};

int Disc::get_rarity(){
	return atribute.rarity;
}

int Disc::get_level(){
	return level;
};

bool Disc::get_custom(){
	return custom;
};

int Disc::get_value(){
	return atribute.value;
}

//Funciones de setters

void Disc::set_name(string n){
	atribute.name = n;
};

void Disc::set_stat_req(string sr){
	stat_req = sr;
};

void Disc::set_req(int rq){
	req = rq;
};

void Disc::set_rarity(int level){
	if (level <= 2)
		atribute.rarity = 1;
	else if (level <= 5)
		atribute.rarity = 2;
	else if (level <= 8)
		atribute.rarity = 3;
	else if (level <= 11)
		atribute.rarity = 4;
	else if (level <= 14)
		atribute.rarity = 5;
	else if (level <= 17)
		atribute.rarity = 6;
}

void Disc::set_level(int lv){
	level = lv;
};

void Disc::set_custom(bool c){
	custom = c;
};

void Disc::set_value(string skill) {
	if ((skill == "Mel") || (skill == "Melee"))
		atribute.value = 26;
	else if ((skill == "Rng") || (skill == "Ranged"))
		atribute.value = 27;
	else if ((skill == "Tec") || (skill == "Technique"))
		atribute.value = 28;
	else 
		cout << "Invalid Disc Skill Type" << endl;
}

void Disc::print() {
	cout << atribute.name << " " << skill << " " << stat_req << " " << req
		 << atribute.rarity << " " << level << " " << custom << " " << endl;
}
