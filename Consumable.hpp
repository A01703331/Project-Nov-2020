/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

/**
 * Clase Weapon, contiene los atributos de un consumible de PSO2
*/

#ifndef CONSUMABLE_HPP_
#define CONSUMABLE_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Consumable : public Storage {
	private:
		//Variables de instancia
		protected:
		int effect; 
		Composicion atribute;
		string type;
	public:
		//Métodos
		Consumable();  //Constructor por default
		Consumable(string n, string tc, int ef, int r);
		// ^Constructor que incorpora valores 
		~Consumable(){}; //Destructor
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

/**
 * Clase Weapon, contiene los atributos de un arma de PSO2
*/

// Declaración de la clase EmoAcc que hereda de Consumable
class EmoAcc : public Consumable {
	private:
		//Variables de instancia
		int index; //ID del Emote o Accesorio
		bool unlock; //Estatus de desbloqueo (Personaje Actual)
		bool unlock_a; //Estatus de desbloqueo (Cuenta)
		
	public:
		//Métodos
		EmoAcc(); //Constructor por default
		EmoAcc(string n, string tc, int ef, int r, int id, bool u, bool ua);
		// ^Constructor que incorpora valores
		~EmoAcc(){}; //Destructor
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
