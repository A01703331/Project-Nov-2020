#include <iostream>
using namespace std;

class Weapon {
	private:
		string Name; //Nombre del Arma
		string Elem; //Elemento del Arma
		string Type; //Tipo de Arma (Espada, Pistola, Lanza...)
		string TypeReq; //Atributo Requerido (Melee (Mel), Ranged (Rng), Technique (Tec), Dexterity (Dex))
		string StatReq; //Característica Requerida (Atk, Def, Dex no tiene)
		int Rarity; //Rareza en Estrellas (De 1 a 15)
		int Req; //Valor del Requisito (Limite de 1 a 1000)
		int MainAtk; //Valor de Ataque del tipo de Atributo principal
	public:
		Weapon(); //Llama al default
		Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a): Name(n), Elem(el), Type(tw), TypeReq(tr),
		  StatReq(sr), Rarity(r), Req(rq), MainAtk(a){}; //Integra los valores que se pongan al momento de definir el arma
		//getters
		string get_Name();
		string get_Elem();
		string get_Type();
		string get_TypeReq();
		string get_StatReq();
		int get_Rarity();
		int get_Req();
		int get_MainAtk();
		//setters
		void set_Name(string);
		void set_Elem(string);
		void set_Type(string);
		void set_TypeReq(string);
		void set_StatReq(string);
		void set_Rarity(int);
		void set_Req(int);
		void set_MainAtk(int);
};

Weapon::Weapon(){ //Default
	Name = "Sword";
	Elem = "";
	Type = "Sword";
	TypeReq = "Mel";
	StatReq = "Atk";
	Rarity = 1;
	Req = 1;
	MainAtk = 1;
};

//Funciones de getters

string Weapon::get_Name(){ //Regresa el nombre
	return Name;
}

string Weapon::get_Elem() { //Regresa el elemento
	return Elem;
};

string Weapon::get_Type() { //Regresa el tipo de arma
	return Type;
};

string Weapon::get_TypeReq() { //Regresa el tipo de atributo requerido
	return TypeReq;
};
string Weapon::get_StatReq() { //Regresa la característica requerida
	return StatReq;
};

int Weapon::get_Rarity() { //Regresa la rareza
	return Rarity;
};

int Weapon::get_Req() { //Regresa el valor de la característica requerida (Mel Atk, Rng Atk, Dex, etc.)
	return Req;
};

int Weapon::get_MainAtk() { //Regresa el valor de ataque del arma
	return MainAtk;
};

//Funciones de setters

void Weapon::set_Name(string n){ //Cambia el nombre
	Name = n;
};

void Weapon::set_Elem(string el) { //Cambia el elemento
	Elem = el;
};

void Weapon::set_Type(string tw) { //Cambia el tipo de arma
	Type = tw;
};

void Weapon::set_TypeReq(string tr) { //Cambia el tipo de atributo requrido
	TypeReq = tr;
};

void Weapon::set_StatReq(string sr) { //Cambia la característica requerida
	StatReq = sr;
};

void Weapon::set_Rarity(int r) { //Cambia la rareza
	Rarity = r;
};
void Weapon::set_Req(int rq) { //Cambia el valor de la caracterpistica requerida
	Req = rq;
};

void Weapon::set_MainAtk(int a) { //Cambia el valor de ataque del arma
	MainAtk = a;
};
