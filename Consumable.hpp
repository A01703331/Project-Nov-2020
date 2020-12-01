#ifndef CONSUMABLE_HPP_
#define CONSUMABLE_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Consumable : public Storage {
	private:
		protected:
		int effect; //Fuerza del efecto en % (Healing de 30, 60, ó 100 / Booster de 10, 25, 50, 75, 100, 150, 200, 250 ó 300)
		Composicion atribute;
		string type; //Objeto de curación, potenciador
	public:
		Consumable(); //Llama al Default
		Consumable(string n, string tc, int ef, int r); //Integra los valores que se pongan al momento de definir el consumible
		~Consumable(){};
		//getters
		string get_name();
		string get_type();
		int get_effect();
		int get_rarity();
		int get_value();
		//setters
		void set_name(string);
		void set_type(string);
		void set_effect(int);
		void set_rarity(int, string);
		void set_value(string);
		void print();
};

//Subclase

class EmoAcc : public Consumable {
	private:
		int index; //ID del Emote o Accesorio
		bool unlock; //Estatus de desbloqueo (Personaje Actual)
		bool unlock_a; //Estatus de desbloqueo (Cuenta)
		
	public:
		EmoAcc(); //Llama al Default
		EmoAcc(string n, string tc, int ef, int r, int id, bool u, bool ua); //Integra los valores que se pongan al momento de definir el emote/accesorio
		~EmoAcc(){};
		//getters
		int get_index();
		bool get_unlock();
		bool get_unlock_a();
		//setters
		void set_index(int);
		void set_unlock(bool);
		void set_unlock_a(bool);
		void print();
};

#endif
