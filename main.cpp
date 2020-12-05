/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 04/Diciembre/2020
*/

/** 
 * Este proyecto est� hecho para la clase de Pensamiento Computacional
 * orientado a objetos. Es un programa que permite al usuario crear objetos
 * y ordenarlos de diferentes maneras o simplemente imprimirlos de la forma
 * en se crearon. Los objetos est�n basados en aquellos que se encontraron
 * en el juego Phantasy Star Online 2 en sus momentos de lanzamiento.
*/

// Inputs y outputs
#include <iostream> 

// Implementaci�n de la clase Weapon 
#include "Weapon.hpp"

// Implementaci�n de la clase Unit
#include "Unit.hpp"

// Implementaci�n de las clases Consumable y EmoAcc
#include "Consumable.hpp"

// Implementaci�n de la clase Disc
#include "Disc.hpp"

/** 
 * Implementaci�n de la clase Inventory, donde se encuentran todos los objetos
 * anidados con un apuntador desde la clase Storage
*/
#include "Inventory.hpp"

using namespace std;

int main(int argc, char** argv) {
	Inventory dummy;
	dummy.create_item();
};
