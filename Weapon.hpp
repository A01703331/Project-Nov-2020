/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

/**
 * Clase Weapon, contiene los atributos de un arma de PSO2
*/

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

// Declaración de la clase Weapon que hereda de Storage
class Weapon : public Storage  {
	private:
		//Variables de instancia
		string elem;
		string type; 
		string type_req;
		string stat_req;
		int req; 
		int power; 
		Composicion atribute;
	public:
		//Métodos
		Weapon(); //Constructor por default
		Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a); // Constructor que incorpora valores
		~Weapon(){}; // Destructor
		//getters
		string get_name();
		string get_elem();
		string get_type();
		string get_type_req();
		string get_stat_req();
		int get_rarity();
		int get_req();
		int get_power();
		int get_value();
		//setters
		void set_name(string);
		void set_elem(string);
		void set_type(string);
		void set_type_req(string);
		void set_stat_req(string);
		void set_rarity(int);
		void set_req(int);
		void set_power(int);
		void set_value(string);
		void print();
};

#endif
