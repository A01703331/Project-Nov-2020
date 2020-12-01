// Run this program using the console pauser or add your own getch, system("pause") or input loop */
// José Sebastián Pedrero Jiménez A01703331
// Un sorteador de un inventario de Phantasy Star Online 2

#include <iostream>
#include "Weapon.hpp"
#include "Unit.hpp"
#include "Consumable.hpp"
#include "Disc.hpp"
using namespace std;

int main(int argc, char** argv) {
	Weapon AlbaSword; //Crea un arma
	AlbaSword.set_elem("Fire"); //Cambia el elemento del arma a fuego
	cout << AlbaSword.get_elem() << endl; //Muestra el elemento al usuario
	Unit BackHelio; // Crea una unidad de armadura con los valores default
	cout << BackHelio.get_rarity() << " " << BackHelio.get_part() << " " << BackHelio.get_stat_req() << endl; //Muestra la rareza y el tipo de armadura al usuario
	Consumable Trimate("Trimate","Healing",100, 1); //Crea un objeto de curación y sus atributos
	cout << Trimate.get_type() << " " << Trimate.get_effect() << endl; //Muestra al usuario que tipo de objeto consumible es, y el porcentaje de efecto de este
	EmoAcc ArksDance("Arks Dance","Emote", 0, 3, 27, 1, 1); //Crea un emote, subclase de consumible, y sus atributos
	cout << ArksDance.get_type() << " " << ArksDance.get_index() << endl; //Muestra el tipo de consumible, y su ID de Emote
	Disc SonicArrow("Sonic Arrow","Mel","Atk",30,2,5,0); //Crea un Disco de Arte de Fotón, sus requisitos de uso, y su nivel
	cout << SonicArrow.get_name() << " Level " << SonicArrow.get_level() << endl; //Muestra al usuario el nombre del Arte de Fotón, y su nivel
};
