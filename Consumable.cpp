/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Consumable.hpp"

//Constructor por default
Consumable::Consumable(){ 
	atribute.name = "Monomate";
	type = "Healing";
	effect = 30;
	atribute.rarity = 1;
};

//Constructor que incorpora variables
Consumable::Consumable(string n, string tc, int ef, int r): type(tc), effect(ef){
	atribute.name = n;
	atribute.rarity;
	set_value(type);
};

//Funciones de getters

/**
 * getter name
 *
 * @param
 * @return string atribute.name: nombre del consumible/objeto
*/
string Consumable::get_name(){
	return atribute.name;
};

/**
 * getter tipo de consumible
 *
 * @param 
 * @return string type: tipo de consumible
*/
string Consumable::get_type() {
	return type;
};

/**
 * getter efecto
 *
 * @param 
 * @return int effect: efecto del objeto en %
*/
int Consumable::get_effect() {
	return effect;
};

/**
 * getter rareza
 *
 * @param 
 * @return int atribute.rarity: rareza
*/
int Consumable::get_rarity() {
	return atribute.rarity;
}

/**
 * getter valor
 *
 * @param 
 * @return int power: valor del objeto
*/
int Consumable::get_value() {
	return atribute.value;
}

//Funciones de setters

/**
 * setter name
 *
 * @param string n: nombre insertado
 * @return string atribute.name: nombre del consumible
*/
void Consumable::set_name(string n){
	atribute.name = n;
};

/**
 * setter tipo consumible
 *
 * @param string t: nombre insertado
 * @return string atribute.name: nombre del consumible
*/
void Consumable::set_type(string tc) {
	type = tc;
};

/**
 * setter efecto
 *
 * @param string ef: valor del efecto en % insertado
 * @return string effect: valor del efecto en % del consumible
*/
void Consumable::set_effect(int ef) {
	effect = ef;
}

/**
 * setter rareza
 *
 * @param 
 * int effect: efecto del consumible en %
 * string type: tipo de consumible
 * @return int atribute.rarity: rareza del consumible
*/
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

/**
 * setter valor del consumible/objeto
 *
 * @param string type: tipo de consumible
 * @return int atribute.value: valor del consumible/objeto
*/
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

// Print que se llama al final de todo
void Consumable::print(){
	cout << atribute.name << " " << type << " " << effect << " " <<
		    atribute.rarity << endl;
}

// Constructor por default
EmoAcc::EmoAcc(){ 
	Consumable();
	index = 0;
	unlock = 0;
	unlock_a= 0;
};

//Constructor que incorpora variables
EmoAcc::EmoAcc(string n, string tc, int ef, int r, int id, bool u, bool ua): 
		  Consumable(n, tc, ef, r), index(id), unlock(u), unlock_a(ua){
	atribute.name = n;
	atribute.rarity = r;
	set_value(type);
}; 
//Funciones de getters

/**
 * getter index
 *
 * @param 
 * @return int index: indice del emote/accesorio
*/
int EmoAcc::get_index(){
	return index;
};

/**
 * getter desbloqueo para el personaje
 *
 * @param 
 * @return bool unlock: desbloqueo para el personaje
*/
bool EmoAcc::get_unlock(){
	return unlock;
};

/**
 * getter desbloqueo para la cuenta
 *
 * @param 
 * @return bool unlock_a: desbloqueo para la cuenta
*/
bool EmoAcc::get_unlock_a(){
	return unlock_a;
};

//Funciones de setters

/**
 * setter index
 *
 * @param int id: indice insertado
 * @return int index: indice del emote/accesorio
*/
void EmoAcc::set_index(int id){
	index = id;
};

/**
 * setter desbloqueo para el personaje
 *
 * @param bool u: desbloqueo insertado
 * @return bool unlock: desbloqueo para el personaje
*/
void EmoAcc::set_unlock(bool u){
	unlock = u;
};

/**
 * setter desbloqueo para la cuenta
 *
 * @param bool ua: desbloqueo insertado
 * @return bool unlock_a: desbloqueo para la cuenta
*/
void EmoAcc::set_unlock_a(bool ua){
	unlock_a = ua;
};

// Print que se llama al final de todo
void EmoAcc::print() {
	cout << atribute.name << " " << type << " " << effect << " "
		 << atribute.rarity << " " << index << " " << unlock << 
		 	unlock_a << endl;
}
