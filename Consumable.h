#include <iostream>
#include <string>

class Consumable {
	private:
		string Type; //Objeto de curación, potenciador, boleto de accesorio/emote
		int Effect; //Efecto, (Curación poca/media/alta, accesorio bloqueado/desbloqueado para personaje/desbloqueado para cuenta)
	public:
		Consumable(): Type("Curacion"),EffStrength(1); //Default
		void set_Type(string Objeto);
		void get_Type(Type);
		void set_Effect(int Efecto);
		void get_Effect(Effect);
};

string Consumable::set_Type(string Objeto) {
	cout << "Tipo de objeto" << endl;
	cin >> Objeto;
};

string Consumable::get_Type() {
	Type = Objeto;
	return Type
};

int Consumable::set_Effect(int Efecto) {
	cout << "Efecto de Objeto (1,2, ó 3)" << endl;
	cin >> Efecto;
};

int Consumable::get_Effect() {
	Effect = Efecto;
	return Effect
};
