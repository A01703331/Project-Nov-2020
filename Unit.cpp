/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Unit.hpp"

Unit::Unit(){ //Constructor por default
	atribute.name = "Unit";
	part = "Back";
	type_req = "Mel";
	stat_req = "Atk";
	atribute.rarity = 1;
	req = 1;
	defense = 1;
};

Unit::Unit(string n, string p, string tr, string sr, int r, int rq,
		   int d): part(p), type_req(tr), stat_req(sr), req(rq),
		   defense(d){
	atribute.name = n;
	atribute.rarity = r;
	set_value(part);
}; //Constructor que incorpora valores
		  
//Funciones de getters

string Unit::get_name(){
	return atribute.name;
}

string Unit::get_part() {
	return part;
};

string Unit::get_type_req() {
	return type_req;
};

string Unit::get_stat_req() {
	return stat_req;
};

int Unit::get_rarity() {
	return atribute.rarity;
};

int Unit::get_req() {
	return req;
};

int Unit::get_defense() {
	return defense;
};

int Unit::get_value() {
	return atribute.value;
}

//Funciones de setters

void Unit::set_name(string n){
	atribute.name = n;
}

void Unit::set_part(string p){
	part = p;
};

void Unit::set_type_req(string tr){
	type_req = tr;
};

void Unit::set_stat_req(string sr){
	stat_req = sr;
};

void Unit::set_rarity(int r) {
	atribute.rarity = r;
};

void Unit::set_req(int rq) {
	req = rq;
};

void Unit::set_defense(int d) {
	defense = d;
};

void Unit::set_value(string part) {
	if (part == "Back")
		atribute.value = 19;
	else if (part == "Arms")
		atribute.value = 20;
	else if (part == "Legs")
		atribute.value = 21;
	else
		cout << "Invalid Unit Type" << endl;
}

void Unit::print() {
	cout << atribute.name << " " << part << " " << type_req << " " << stat_req
		 << req << " " << atribute.rarity << " " << defense << endl;
}
