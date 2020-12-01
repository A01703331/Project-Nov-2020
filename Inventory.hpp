#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include "Storage.hpp"
using namespace std;

class Inventory {
	private:
		Storage * inventory[50];
		bool sort_type; 
	public:
		Inventory();
		~Inventory();
		void create_item();
		void value_sort();
		void rarity_sort();
		void sorting();
};

#endif
