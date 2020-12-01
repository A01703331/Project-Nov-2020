#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Weapon : public Storage  {
	private:
		string elem; //Elemento del Arma
		string type; //Tipo de Arma (Espada, Pistola, Lanza...)
		string type_req; //Atributo requerido (Melee (Mel), Ranged (Rng), Technique (Tec), Dexterity (Dex))
		string stat_req; //Característica requerida (Atk, Def, Dex no tiene)
		int req; //Valor del requisito (Limite de 1 a 1000)
		int power; //Valor de la caracteristica principal
		Composicion atribute;
	public:
		Weapon(); //Llama al default
		Weapon(string n, string el, string tw, string tr, string sr, int r,
		  int rq, int a); //Integra los valores que se pongan al momento de definir el arma
		~Weapon(){};
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
