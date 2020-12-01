#ifndef UNIT_HPP_
#define UNIT_HPP_

#include <iostream>
#include "Storage.hpp"
#include "Comp.hpp"
using namespace std;

class Unit : public Storage {
	private:
		string part; //Parte de Armadura (Cuerpo, Brazos, Piernas)
		string type_req; //Atributo requerido (Melee (Mel), Ranged (Rng), Technique (Tec), Dexterity (Dex))
		string stat_req; //CaracterÝstica requerida (Atk, Def, Dex no tiene)
		int req; //Valor del requisito (LÝmite de 1 a 1000)
		int defense; //Valor de la caracteristica principal
		Composicion atribute;
	public:
		Unit(); //Llama al Default
		Unit(string n, string p, string tr, string sr, int r, int rq, int d); //Integra los valores que se pongan al momento de definir la unidad
		~Unit(){};
		//getters
		string get_name();
		string get_part();
		string get_type_req();
		string get_stat_req();
		int get_rarity();
		int get_req();
		int get_defense();
		int get_value();
		//setters
		void set_name(string);
		void set_part(string);
		void set_type_req(string);
		void set_stat_req(string);
		void set_rarity(int);
		void set_req(int);
		void set_defense(int);
		void set_value(string);
		void print();
};

#endif
