/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Unit.hpp"

//Constructor por default
Unit::Unit(){
	atribute.name = "Unit";
	part = "Back";
	type_req = "Mel";
	stat_req = "Atk";
	atribute.rarity = 1;
	req = 1;
	defense = 1;
};

//Constructor que incorpora variables
Unit::Unit(string n, string p, string tr, string sr, int r, int rq,
		   int d): part(p), type_req(tr), stat_req(sr), req(rq),
		   defense(d){
	atribute.name = n;
	atribute.rarity = r;
	set_value(part);
}; 
		  
//Funciones de getters

/**
 * getter nombre
 *
 * @param 
 * @return string atribute.name: nombre de la armadura
*/
string Unit::get_name(){
	return atribute.name;
}

/**
 * getter parte
 *
 * @param string el: elemento insertado
 * @return string elem: elemento del arma
*/
string Unit::get_part() {
	return part;
};

/**
 * getter tipo de atributo requerido
 *
 * @param 
 * @return string type: tipo de atributo
*/
string Unit::get_type_req() {
	return type_req;
};

/**
 * getter tipo de caracteristica requerida
 *
 * @param 
 * @return string type: tipo de caracteristica
*/
string Unit::get_stat_req() {
	return stat_req;
};


/**
 * getter rareza
 *
 * @param 
 * @return int atribute.rarity: rareza
*/
int Unit::get_rarity() {
	return atribute.rarity;
};

/**
 * getter requisito
 *
 * @param 
 * @return int req: requisito
*/
int Unit::get_req() {
	return req;
};

/**
 * getter valor de defensa
 *
 * @param 
 * @return int power: valor de defensa objeto
*/
int Unit::get_defense() {
	return defense;
};

/**
 * getter valor
 *
 * @param 
 * @return int atribute.value: valor del objeto
*/
int Unit::get_value() {
	return atribute.value;
}

//Funciones de setters

/**
 * setter name
 *
 * @param string n: nombre insertado
 * @return string atribute.name: nombre de la armadura
*/
void Unit::set_name(string n){
	atribute.name = n;
}

/**
 * setter parte de armadura
 *
 * @param string p: parte insertada
 * @return string part: parte de armadura
*/
void Unit::set_part(string p){
	part = p;
};

/**
 * setter atributo requerido
 *
 * @param string tr: atributo insertado
 * @return string type_req: atributo requerido
*/
void Unit::set_type_req(string tr){
	type_req = tr;
};

/**
 * setter caracteristica requerida
 *
 * @param string sr: caracteristica insertada
 * @return string stat_req: caracterisitca requerida
*/
void Unit::set_stat_req(string sr){
	stat_req = sr;
};

/**
 * setter rareza
 *
 * @param int r: rareza insertada
 * @return int atribute.rarity: rareza de la armadura
*/
void Unit::set_rarity(int r) {
	atribute.rarity = r;
};

/**
 * setter requisito
 *
 * @param int rq: requisito insertado
 * @return int req: requisito de la armadura
*/
void Unit::set_req(int rq) {
	req = rq;
};

/**
 * setter defense
 *
 * @param int d: valor de defensa insertado
 * @return int power: valor de defensa del arma
*/
void Unit::set_defense(int d) {
	defense = d;
};

/**
 * setter valor del objeto
 *
 * @param string part: parte de armadura
 * @return int atribute.value: valor del objeto
*/
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

// Print que se llama al final de todo
void Unit::print() {
	cout << atribute.name << " " << part << " " << type_req << " " << stat_req
		 << req << " " << atribute.rarity << " " << defense << endl;
}
