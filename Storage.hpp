#ifndef STORAGE_HPP_
#define STORAGE_HPP_

#include <iostream>
using namespace std;

class Storage{
	public:
		virtual string get_name() = 0;
		virtual int get_rarity() = 0;
		virtual int get_value() = 0;
		virtual void print() = 0;
		/*virtual int get_power() = 0;
		virtual int get_defense() = 0;
		virtual int get_effect() = 0;
		virtual int get_id() = 0;
		virtual int get_level()= 0;*/
};

#endif
