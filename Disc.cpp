/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Disc.hpp"

//Constructor por default
Disc::Disc(){ 
	atribute.name = "Rising Edge";
	skill = "Mel";
	stat_req = "Atk";
	req = 1;
	atribute.rarity = 1;
	level = 1;
	custom = 0;
};

//Constructor que incorpora variables
Disc::Disc(string n, string s, string sr, int rq, int r, int lv, bool c):
           skill(s), stat_req(sr), req(rq),level(lv), custom(c){
    atribute.name = n;
    atribute.rarity = r;
    set_value(skill);
} 

//Funciones de getters

/**
 * getter name
 *
 * @param
 * @return string atribute.name: nombre de la habilidad del disco
*/
string Disc::get_name(){
	return atribute.name;
};

/**
 * getter tipo de atributo de la habilidad
 *
 * @param 
 * @return string type: tipo de habilidad
*/
string Disc::get_skill(){
	return skill;
};

/**
 * getter tipo de caracteristica requerida
 *
 * @param 
 * @return string type: tipo de caracteristica
*/
string Disc::get_stat_req(){
	return stat_req;
};

/**
 * getter requisito
 *
 * @param 
 * @return int req: requisito
*/
int Disc::get_req(){
	return req;
};

/**
 * getter rareza
 *
 * @param 
 * @return int atribute.rarity: rareza
*/
int Disc::get_rarity(){
	return atribute.rarity;
}

/**
 * getter nivel
 *
 * @param 
 * @return int level: nivel del disco
*/
int Disc::get_level(){
	return level;
};

/**
 * getter customización
 *
 * @param 
 * @return bool custom: customización del disco
*/
bool Disc::get_custom(){
	return custom;
};

/**
 * getter valor
 *
 * @param 
 * @return int atribute.value: valor del objeto
*/
int Disc::get_value(){
	return atribute.value;
}

//Funciones de setters

/**
 * setter name
 *
 * @param string n: nombre insertado
 * @return string atribute.name: nombre de la habilidad del disco
*/
void Disc::set_name(string n){
	atribute.name = n;
};

/**
 * setter tipo de habilidad
 *
 * @param string s: tipo insertado
 * @return string skill: tipo de habilidad del disco
*/
void Disc::set_skill(string s){
	skill = s;
}

/**
 * setter caracteristica requerida
 *
 * @param string sr: caracteristica insertada
 * @return string stat_req: caracterisitca requerida
*/
void Disc::set_stat_req(string sr){
	stat_req = sr;
};

/**
 * setter requisito
 *
 * @param int rq: requisito insertado
 * @return int req: requisito del disco
*/
void Disc::set_req(int rq){
	req = rq;
};

/**
 * setter rareza
 *
 * @param int level: nivel del arma
 * @return int atribute.rarity: rareza del arma
*/
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

/**
 * setter nivel
 *
 * @param int lv: nivel insertado
 * @return int level: nivel del disco
*/
void Disc::set_level(int lv){
	level = lv;
};

/**
 * setter customización
 *
 * @param bool c: customización insertada
 * @return bool custom: customización del disco
*/
void Disc::set_custom(bool c){
	custom = c;
};

/**
 * setter valor del disco
 *
 * @param string type:  tipo de disco
 * @return int atribute.value: valor del disco
*/
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

// Print que se llama al final de todo
void Disc::print() {
	cout << atribute.name << " " << skill << " " << stat_req << " " << req
		 << atribute.rarity << " " << level << " " << custom << " " << endl;
}
