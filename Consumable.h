#include <iostream>
using namespace std;

class Consumable {
	private:
		string Name;
		string Type; //Objeto de curación, potenciador
		int Effect; //Fuerza del efecto en % (Healing de 30, 50, ó 100 / Booster de 50 en 50 con 250 de límite)
	public:
		Consumable(); //Llama al Default
		Consumable(string n, string tc, int ef): Name(n), Type(tc),
		  Effect(ef){}; //Integra los valores que se pongan al momento de definir el consumible
		//getters
		string get_Name();
		string get_Type();
		int get_Effect();
		//setters
		void set_Name(string);
		void set_Type(string);
		void set_Effect(int);
};

Consumable::Consumable(){ //Default
	Name = "Monomate";
	Type = "Healing";
	Effect = 30;
};

//Funciones de getters

string Consumable::get_Name(){
	return Name;
};

string Consumable::get_Type() {
	return Type;
};

int Consumable::get_Effect() {
	return Effect;
};

//Funciones de getters

void Consumable::set_Name(string n){
	Name = n;
};

void Consumable::set_Type(string tc) {
	Type = tc;
};

void Consumable::set_Effect(int ef) {
	Effect = ef;
};

//Subclase

class EmoAcc : public Consumable {
	private:
		int ID; //ID del Emote o Accesorio
		bool unlock; //Estatus de desbloqueo (Personaje Actual)
		bool unlock_a; //Estatus de desbloqueo (Cuenta)
	public:
		EmoAcc(); //Llama al Default
		EmoAcc(string n, string tc, int ef, int id, bool u, bool ua): 
		  Consumable(n, tc, ef), ID(id), unlock(u), unlock_a(ua){}; //Integra los valores que se pongan al momento de definir el emote/accesorio
		int get_ID();
		bool get_unlock();
		bool get_unlock_a();
		void set_ID(int);
		void set_unlock(bool);
		void set_unlock_a(bool);
};

EmoAcc::EmoAcc(){ //Default
	Consumable();
	ID = 0;
	unlock = 0;
	unlock_a= 0;
};

//Funciones de getters

int EmoAcc::get_ID(){
	return ID;
};

bool EmoAcc::get_unlock(){
	return unlock;
};

bool EmoAcc::get_unlock_a(){
	return unlock_a;
};

//Funciones de setters

void EmoAcc::set_ID(int id){
	ID = id;
};

void EmoAcc::set_unlock(bool u){
	unlock = u;
};

void EmoAcc::set_unlock_a(bool ua){
	unlock_a = ua;
};
