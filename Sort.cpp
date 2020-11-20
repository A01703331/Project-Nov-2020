// Run this program using the console pauser or add your own getch, system("pause") or input loop */
// José Sebastián Pedrero Jiménez A01703331
// Un sorteador de un inventario de Phantasy Star Online 2

#include <iostream>
#include "Weapon.h"
#include "Unit.h"
#include "Consumable.h"
#include "Disc.h"
using namespace std;

int main(int argc, char** argv) {
	Weapon AlbaSword;
	AlbaSword.set_Elem("Fire");
	cout << AlbaSword.get_Elem() << endl;
	Unit BackHelio;
	cout << BackHelio.get_Rarity() << " " << BackHelio.get_Part() << " " << BackHelio.get_StatReq() << endl;
	Consumable Trimate("Trimate","Healing",100);
	cout << Trimate.get_Type() << " " << Trimate.get_Effect() << endl;
	EmoAcc ArksDance("Arks Dance","Emote", 0, 27, 1, 1);
	cout << ArksDance.get_Type() << " " << ArksDance.get_ID() << endl;
	Disc SonicArrow("Sonic Arrow","Mel","Atk",30,5,0);
	cout << SonicArrow.get_Name() << " Level " << SonicArrow.get_Lvl() << endl;
};
