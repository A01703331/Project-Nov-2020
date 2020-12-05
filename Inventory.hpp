/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include "Storage.hpp"
using namespace std;

/**
 * Declaración de clase Inventory, donde se usan apuntadores
 * para guardar los datos en un array
*/
class Inventory {
	private:
		//Variables de instancia
		Storage * inventory[50];
		Storage * sortedv[50];
		Storage * sortedr[50];
		int sort;
	public:
		//Métodos
		Inventory();
		~Inventory();
		void create_item();
		void create_weapon(int);
		void create_unit(int);
		void create_consumable(int);
		void create_emoacc(int);
		void create_disc(int);
		void sort_value();
		void sort_rarity();
		void print_inv(int);
};

#endif
