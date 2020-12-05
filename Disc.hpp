/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 04/Diciembre/2020
*/

#ifndef DISC_HPP_
#define DISC_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Disc : public Storage {
	private:
		//Variables de instancia
		string skill; //Tipo de Habilidad (Melee (Mel), Ranged (Rng), Technique (Tec))
		string stat_req; //Caracter�stica Requerida (Atk, Def)
		int req; //Valor del requisito
		int level; //Nivel de la Habilidad
		bool custom; //Si el disco es customizado o no
		Composicion atribute;
	public:
		//M�todos
		Disc(); //Constructor por default
		Disc(string n, string s, string sr, int rq, int r, int lv, bool c);
		// ^Constructor que incorpora valores
		~Disc(){};//Destructor
		//getters
		string get_name();
		string get_skill();
		string get_stat_req();
		int get_req();
		int get_rarity();
		int get_level();
		bool get_custom();
		int get_value();
		//setters
		void set_name(string);
		void set_skill(string);
		void set_stat_req(string);
		void set_req(int);
		void set_rarity(int);
		void set_level(int);
		void set_custom(bool);
		void set_value(string);
		void print();
};

#endif
