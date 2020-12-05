/** 
 * José Sebastián Pedrero Jiménez
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
		string skill; 
		string stat_req; 
		int req; 
		int level; 
		bool custom;
		Composicion atribute;
	public:
		//Métodos
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
