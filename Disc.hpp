#ifndef DISC_HPP_
#define DISC_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Disc : public Storage {
	private:
		string skill; //Tipo de Habilidad (Melee (Mel), Ranged (Rng), Technique (Tec))
		string stat_req; //Característica Requerida (Atk, Def)
		int req; //Valor del requisito
		int level; //Nivel de la Habilidad
		bool custom; //Si el disco es customizado o no
		Composicion atribute;
	public:
		Disc(); //Llama al Default
		Disc(string n, string s, string sr, int rq, int r, int lv, bool c); //Integra los valores que se pongan al momento de definir el disco
		~Disc(){};
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
