/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#ifndef COMP_HPP_
#define COMP_HPP_

#include <iostream>
using namespace std;

//Declaración clase composición, cuyos datos se agregan a otros objetos
class Composicion {
	public:
		//Variables de instancia
		string name; // Nombre del objeto
		int value; // Valor del objeto
		int rarity; // Rareza del objeto
		Composicion() // Constructor
		{
			name = "";
			value = 0;
			rarity = 1;
		}
		~Composicion(){}; // Destructor
};

#endif
