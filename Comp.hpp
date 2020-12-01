#ifndef COMP_HPP_
#define COMP_HPP_

#include <iostream>
using namespace std;

class Composicion {
	public:
		string name;
		int value;
		int rarity;
		Composicion()
		{
			name = "";
			value = 0;
			rarity = 1;
		}
		~Composicion(){};
};

#endif
