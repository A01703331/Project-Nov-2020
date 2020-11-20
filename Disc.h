#include <iostream>
using namespace std;

class Disc {
	private:
		string Name; //Nombre de la Habilidad
		string Skill; //Tipo de Habilidad (Melee (Mel), Ranged (Rng), Technique (Tec))
		string StatReq; //Característica Requerida (Atk, Def)
		int Req; //Valor del requisito
		int Lvl; //Nivel de la Habilidad
		bool Custom; //Si el disco es customizado o no
	public:
		Disc(); //Llama al Default
		Disc(string n, string s, string sr, int rq, int lv, bool c): Name(n), Skill(s),
		  StatReq(sr), Req(rq), Lvl(lv), Custom(c){}; //Integra los valores que se pongan al momento de definir el disco
		//getters
		string get_Name();
		string get_Skill();
		string get_StatReq();
		int get_Req();
		int get_Lvl();
		bool get_Custom();
		//setters
		void set_Name(string);
		void set_Skill(string);
		void set_StatReq(string);
		void set_Req(int);
		void set_Lvl(int);
		void set_Custom(bool);
};

Disc::Disc(){ //Default
	Name = "Rising Slash";
	Skill = "Mel";
	StatReq = "Atk";
	Req = 1;
	Lvl = 1;
	Custom = 0;
};

//Funciones de getters

string Disc::get_Name(){
	return Name;
};

string Disc::get_Skill(){
	return Skill;
};

string Disc::get_StatReq(){
	return StatReq;
};

int Disc::get_Req(){
	return Req;
};

int Disc::get_Lvl(){
	return Lvl;
};

bool Disc::get_Custom(){
	return Custom;
};

//Funciones de setters

void Disc::set_Name(string n){
	Name = n;
};

void Disc::set_StatReq(string sr){
	StatReq = sr;
};

void Disc::set_Req(int rq){
	Req = rq;
};

void Disc::set_Lvl(int lv){
	Lvl = lv;
};

void Disc::set_Custom(bool c){
	Custom = c;
};
