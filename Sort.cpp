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
	Weapon AlbaSword; //Crea un arma
	AlbaSword.set_Elem("Fire"); //Cambia el elemento del arma a fuego
	cout << AlbaSword.get_Elem() << endl; //Muestra el elemento al usuario
	Unit BackHelio; // Crea una unidad de armadura con los valores default
	cout << BackHelio.get_Rarity() << " " << BackHelio.get_Part() << " " << BackHelio.get_StatReq() << endl; //Muestra la rareza y el tipo de armadura al usuario
	Consumable Trimate("Trimate","Healing",100); //Crea un objeto de curación y sus atributos
	cout << Trimate.get_Type() << " " << Trimate.get_Effect() << endl; //Muestra al usuario que tipo de objeto consumible es, y el porcentaje de efecto de este
	EmoAcc ArksDance("Arks Dance","Emote", 0, 27, 1, 1); //Crea un emote, subclase de consumible, y sus atributos
	cout << ArksDance.get_Type() << " " << ArksDance.get_ID() << endl; //Muestra el tipo de consumible, y su ID de Emote
	Disc SonicArrow("Sonic Arrow","Mel","Atk",30,5,0); //Crea un Disco de Arte de Fotón, sus requisitos de uso, y su nivel
	cout << SonicArrow.get_Name() << " Level " << SonicArrow.get_Lvl() << endl; //Muestra al usuario el nombre del Arte de Fotón, y su nivel
};
