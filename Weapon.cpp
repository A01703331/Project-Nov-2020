#include "Weapon.hpp"

Weapon::Weapon(){ //Default
	atribute.name = "Sword";
	elem = "";
	type = "Sword";
	type_req = "Mel";
	stat_req = "Atk";
	atribute.rarity = 1;
	req = 1;
	power = 1;
};

Weapon::Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a): elem(el), type(tw), type_req(tr),
		  stat_req(sr), req(rq), power(a){
	atribute.name = n; 
	atribute.rarity = r;
	set_value(type);
}; //Integra los valores que se pongan al momento de definir el arma
		  
//Funciones de getters

string Weapon::get_name(){ //Regresa el nombre
	return atribute.name;
}

string Weapon::get_elem() { //Regresa el elemento
	return elem;
}

string Weapon::get_type() { //Regresa el tipo de arma
	return type;
}

string Weapon::get_type_req() { //Regresa el tipo de atributo requerido
	return type_req;
}

string Weapon::get_stat_req() { //Regresa la característica requerida
	return stat_req;
}

int Weapon::get_rarity() { //Regresa la rareza
	return atribute.rarity;
}

int Weapon::get_req() { //Regresa el valor de la característica requerida (Mel Atk, Rng Atk, Dex, etc.)
	return req;
}

int Weapon::get_power() { //Regresa el valor de ataque del arma
	return power;
}

int Weapon::get_value() {
	return atribute.value;
}

//Funciones de setters

void Weapon::set_name(string n){ //Cambia el nombre
	atribute.name = n;
}

void Weapon::set_elem(string el) { //Cambia el elemento
	elem = el;
}

void Weapon::set_type(string tw) { //Cambia el tipo de arma
	type = tw;
}

void Weapon::set_type_req(string tr) { //Cambia el tipo de atributo requrido
	type_req = tr;
}

void Weapon::set_stat_req(string sr) { //Cambia la característica requerida
	stat_req = sr;
}

void Weapon::set_rarity(int r) { //Cambia la rareza
	atribute.rarity = r;
}

void Weapon::set_req(int rq) { //Cambia el valor de la caracterpistica requerida
	req = rq;
}

void Weapon::set_power(int a) { //Cambia el valor de ataque del arma
	power = a;
}

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
	else if (type == "Dual Blades")
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

void Weapon::print() {
	cout << atribute.name << elem << type << type_req << stat_req << req <<
			power << endl;
}
