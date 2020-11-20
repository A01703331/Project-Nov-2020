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
		Weapon();
		Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a): Name(n), Elem(el), Type(tw), TypeReq(tr),
		  StatReq(sr), Rarity(r), Req(rq), MainAtk(a){};
		string get_Name();
		string get_Elem();
		string get_Type();
		string get_TypeReq();
		string get_StatReq();
		int get_Rarity();
		int get_Req();
		int get_MainAtk();
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

string Weapon::get_Name(){
	return Name;
}

string Weapon::get_Elem() {
	return Elem;
};

string Weapon::get_Type() {
	return Type;
};

string Weapon::get_TypeReq() {
	return TypeReq;
};
string Weapon::get_StatReq() {
	return StatReq;
};

int Weapon::get_Rarity() {
	return Rarity;
};

int Weapon::get_Req() {
	return Req;
};

int Weapon::get_MainAtk() {
	return MainAtk;
};

void Weapon::set_Name(string n){
	Name = n;
};

void Weapon::set_Elem(string el) {
	Elem = el;
};

void Weapon::set_Type(string tw) {
	Type = tw;
};

void Weapon::set_TypeReq(string tr) {
	TypeReq = tr;
};

void Weapon::set_StatReq(string sr) {
	StatReq = sr;
};

void Weapon::set_Rarity(int r) {
	Rarity = r;
};
void Weapon::set_Req(int rq) {
	Req = rq;
};

void Weapon::set_MainAtk(int a) {
	MainAtk = a;
};
