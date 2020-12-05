/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Weapon.hpp"

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Weapon
*/
Weapon::Weapon(){ 
	atribute.name = "Sword";
	elem = "";
	type = "Sword";
	type_req = "Mel";
	stat_req = "Atk";
	atribute.rarity = 1;
	req = 1;
	power = 1;
};

/**
 * Constructor que incorpora valores
 *
 * @param 
 * string n: nombre de serie del arma
 * string el: elemento del arma
 * string tw: tipo de arma
 * string tr: atributo requerido para equipar el arma
 * string sr: caracteristica requerida para equipar el arma
 * int r: rareza del arma
 * int rq: valor de requisito
 * int a: valor de ataque del arma
 * @return Objeto Weapon
*/

Weapon::Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a): elem(el), type(tw), type_req(tr),
		  stat_req(sr), req(rq), power(a){
	atribute.name = n; 
	atribute.rarity = r;
	set_value(type);
}; 
		  
//Funciones de getters

/**
 * getter name
 *
 * @param
 * @return string atribute.name: nombre del arma
*/
string Weapon::get_name(){ 
	return atribute.name;
}

/**
 * getter elemento
 *
 * @param
 * @return string elem: elemento del arma
*/
string Weapon::get_elem() {
	return elem;
}

/**
 * getter tipo de arma
 *
 * @param 
 * @return string type: tipo de arma
*/
string Weapon::get_type() {
	return type;
}

/**
 * getter tipo de atributo requerido
 *
 * @param 
 * @return string type: tipo de atributo
*/
string Weapon::get_type_req() {
	return type_req;
}

/**
 * getter tipo de caracteristica requerida
 *
 * @param 
 * @return string type: tipo de caracteristica
*/
string Weapon::get_stat_req() {
	return stat_req;
}

/**
 * getter rareza
 *
 * @param 
 * @return int atribute.rarity: rareza
*/
int Weapon::get_rarity() {
	return atribute.rarity;
}

/**
 * getter requisito
 *
 * @param 
 * @return int req: requisito
*/
int Weapon::get_req() { 
	return req;
}

/**
 * getter power
 *
 * @param 
 * @return int power: valor de ataque del arma
*/
int Weapon::get_power() { 
	return power;
}

/**
 * getter power
 *
 * @param 
 * @return int power: valor de ataque del arma
*/
int Weapon::get_value() {
	return atribute.value;
}

//Funciones de setters

/**
 * setter name
 *
 * @param string n: nombre insertado
 * @return string atribute.name: nombre del arma
*/
void Weapon::set_name(string n){
	atribute.name = n;
}

/**
 * setter elemento
 *
 * @param string el: elemento insertado
 * @return string elem: elemento del arma
*/
void Weapon::set_elem(string el) { 
	elem = el;
}

/**
 * setter tipo del arma
 *
 * @param string tw: tipo insertado
 * @return string type: tipo de arma
*/
void Weapon::set_type(string tw) { 
	type = tw;
}

/**
 * setter atributo requerido
 *
 * @param string tr: atributo insertado
 * @return string type_req: atributo requerido
*/
void Weapon::set_type_req(string tr) {
	type_req = tr;
}

/**
 * setter caracteristica requerida
 *
 * @param string sr: caracteristica insertada
 * @return string stat_req: caracterisitca requerida
*/
void Weapon::set_stat_req(string sr) { 
	stat_req = sr;
}

/**
 * setter rareza
 *
 * @param int r: nombre insertado
 * @return int atribute.rarity: rareza del arma
*/
void Weapon::set_rarity(int r) { 
	atribute.rarity = r;
}

/**
 * setter requisito
 *
 * @param int rq: requisito insertado
 * @return int req: requisito del arma
*/
void Weapon::set_req(int rq) {
	req = rq;
}

/**
 * setter power
 *
 * @param int a: valor de ataque insertado
 * @return int power: valor de ataque del arma
*/
void Weapon::set_power(int a) { //Cambia el valor de ataque del arma
	power = a;
}

/**
 * setter valor del arma
 *
 * @param string type:  string type: tipo de arma
 * @return int atribute.value: valor del objeto
*/
void Weapon::set_value(string type){
	if (type == "Sword")
		atribute.value = 1;
	else if (type == "Wired Lance")
		atribute.value = 2;
	else if (type == "Partisan")
		atribute.value = 3;
	else if (type == "Twin Dagger")
		atribute.value = 4;
	else if (type == "Double Saber")
		atribute.value = 5;
	else if (type == "Knuckles")
		atribute.value = 6;
	else if (type == "Katana")
		atribute.value = 7;
	else if (type == "Soaring Blades")
		atribute.value = 8;
	else if (type == "Gunblade")
		atribute.value = 9;
	else if (type =="Assault Rifle")
		atribute.value = 10;
	else if (type == "Launcher")
		atribute.value = 11;
	else if (type == "Twin Machine Guns")
		atribute.value = 12;
	else if (type == "Bow")
		atribute.value = 13;
	else if (type == "Rod")
		atribute.value = 14;
	else if (type == "Talis")
		atribute.value = 15;
	else if (type =="Wand")
		atribute.value = 16;
	else if (type == "Jet Boots")
		atribute.value = 17;
	else if (type == "Harmonizer")
		atribute.value = 18;
	else
		cout << "Invalid Weapon Type" << endl;
}

// Print que se llama al final de todo
void Weapon::print() {
	cout << atribute.name << " " << elem << " "  << type << " "  << type_req
		 << " " << stat_req << " "  << req << " "  << atribute.rarity << " "
		 << power << endl;
}
