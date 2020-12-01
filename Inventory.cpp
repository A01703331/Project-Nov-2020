#include "Inventory.hpp"
#include "Weapon.hpp"
#include "Unit.hpp"
#include "Consumable.hpp"
#include "Disc.hpp"

Inventory::Inventory(){
	int i;
	for (i=0;i<50;i++)
		inventory[i] = 0;
}

Inventory::~Inventory(){
	int i;
	for (i=0;i<50;i++)
		if (inventory[i]!=NULL)
			delete inventory[i];
}
