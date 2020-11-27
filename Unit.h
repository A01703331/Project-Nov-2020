#include <iostream>
using namespace std;

class Unit {
	private:
		string Part; //Parte de Armadura (Cuerpo, Brazos, Piernas)
		string TypeReq; //Atributo Requerido (Melee (Mel), Ranged (Rng), Technique (Tec), Dexterity (Dex))
		string StatReq; //Caracter�stica Requerida (Atk, Def, Dex no tiene)
		int Rarity; //Rareza en Estrellas (De 1 a 15)
		int Req; //Valor del Requisito (L�mite de 1 a 1000)
		int MainStat; //Valor de la caracteristica principal	
	public:
		Unit(); //Llama al Default
		Unit(string p, string tr, string sr, int r, int rq, int d):
		  Part(p), TypeReq(tr), StatReq(sr), Rarity(r), Req(rq), MainStat(d){}; //Integra los valores que se pongan al momento de definir la unidad
		//getters
		string get_Part();
		string get_TypeReq();
		string get_StatReq();
		int get_Rarity();
		int get_Req();
		int get_MainStat();
		//setters
		void set_Part(string);
		void set_TypeReq(string);
		void set_StatReq(string);
		void set_Rarity(int);
		void set_Req(int);
		void set_MainStat(int);
};

Unit::Unit(){ //Default
	Part = "Back";
	TypeReq = "Mel";
	StatReq = "Atk";
	Rarity = 1;
	Req = 1;
	MainStat = 1;
};

//Funciones de getters

string Unit::get_Part() {
	return Part;
};

string Unit::get_TypeReq() {
	return TypeReq;
};

string Unit::get_StatReq() {
	return StatReq;
};

int Unit::get_Rarity() {
	return Rarity;
};

int Unit::get_Req() {
	return Req;
};

int Unit::get_MainStat() {
	return MainStat;
};

//Funciones de setters

void Unit::set_Part(string p){
	Part = p;
};

void Unit::set_TypeReq(string tr){
	TypeReq = tr;
};

void Unit::set_StatReq(string sr){
	StatReq = sr;
};

void Unit::set_Rarity(int r) {
	Rarity = r;
};

void Unit::set_Req(int rq) {
	Req = rq;
};

void Unit::set_MainStat(int d) {
	MainStat = d;
};
