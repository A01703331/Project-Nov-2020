/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Consumable.hpp"

Consumable::Consumable(){ //Constructor por default
	atribute.name = "Monomate";
	type = "Healing";
	effect = 30;
	atribute.rarity = 1;
};

Consumable::Consumable(string n, string tc, int ef, int r): type(tc), effect(ef){
	atribute.name = n;
	atribute.rarity;
	set_value(type);
}; //Constructor que incorpora variables

//Funciones de getters

string Consumable::get_name(){
	return atribute.name;
};

string Consumable::get_type() {
	return type;
};

int Consumable::get_effect() {
	return effect;
};

int Consumable::get_rarity() {
	return atribute.rarity;
}

int Consumable::get_value() {
	return atribute.value;
}

//Funciones de setters

void Consumable::set_name(string n){
	atribute.name = n;
};

void Consumable::set_type(string tc) {
	type = tc;
};

void Consumable::set_effect(int ef) {
	effect = ef;
}

void Consumable::set_rarity(int effect, string type) {
	if ((effect <= 30) && (type == "Healing"))
		atribute.rarity = 1;
	else if ((effect <= 60) && (type == "Healing"))
		atribute.rarity = 2;
	else if ((effect > 60) && (type == "Healing"))
		atribute.rarity = 3;
	else if ((effect <= 50) && (type == "Booster"))
		atribute.rarity = 4;
	else if ((effect <= 100) && (type == "Booster"))
		atribute.rarity = 5;
	else if ((effect <= 250) && (type == "Booster"))
		atribute.rarity = 6;
	else if ((effect <= 300) && (type == "Booster"))
		atribute.rarity = 7;
	else if ((effect > 300) && (type == "Booster"))
		atribute.rarity = 8;
}

void Consumable::set_value(string type) {
	if (type == "Healing")
		atribute.value = 22;
	else if (type == "Booster")
		atribute.value = 23;
	else if (type == "Accesory")
		atribute.value = 24;
	else if (type == "Emote")
		atribute.value = 25;
	else 
		cout << "Invalid Consumable Type" << endl;
}

void Consumable::print(){
	cout << atribute.name << " " << type << " " << effect << " " <<
		    atribute.rarity << endl;
}

EmoAcc::EmoAcc(){ //Default
	Consumable();
	index = 0;
	unlock = 0;
	unlock_a= 0;
};

EmoAcc::EmoAcc(string n, string tc, int ef, int r, int id, bool u, bool ua): 
		  Consumable(n, tc, ef, r), index(id), unlock(u), unlock_a(ua){
	atribute.name = n;
	atribute.rarity = r;
	set_value(type);
}; 
//Funciones de getters

int EmoAcc::get_index(){
	return index;
};

bool EmoAcc::get_unlock(){
	return unlock;
};

bool EmoAcc::get_unlock_a(){
	return unlock_a;
};

//Funciones de setters

void EmoAcc::set_index(int id){
	index = id;
};

void EmoAcc::set_unlock(bool u){
	unlock = u;
};

void EmoAcc::set_unlock_a(bool ua){
	unlock_a = ua;
};

void EmoAcc::print() {
	cout << atribute.name << " " << type << " " << effect << " "
		 << atribute.rarity << " " << index << " " << unlock << 
		 	unlock_a << endl;
}
