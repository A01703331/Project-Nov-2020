/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#ifndef STORAGE_HPP_
#define STORAGE_HPP_

#include <iostream>
using namespace std;

//Declaración de interfaz Storage
class Storage{
	public:
		virtual string get_name() = 0;
		virtual int get_rarity() = 0;
		virtual int get_value() = 0;
		virtual void print() = 0;
};

#endif
