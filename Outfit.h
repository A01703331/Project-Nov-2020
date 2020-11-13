#include <iostream>
#include <string>

class Outfit {
	private:
		string Type; //Tipo de Vestimenta (Camuflaje de arma, disfraz, traje exterior)
		bool SG; //Afinidad para obtener Gemas
		int Rarity; //Rareza en Estrellas (De 1 a 15)
	public:
		Outfit(): Type("Camuflaje"),SG(0),Rarity(1); //Default
		void set_Type(string Vestimenta);
		void get_Type(Type);
		void set_SG(bool Gemas);
		void get_SG(Type);
		void set_Rarity(int Rareza);
		void get_Rarity(Type); 
};

string Outfit::set_Type(string Vestimenta) {
	cout << "Tipo de Cambio Estético (Camuflaje, disfraz, traje)" << endl;
	cin >> Vestimenta;
};

string Outfit::get_Type() {
	Type = Vestimenta;
	return Type
};

bool Outfit::set_SG(bool Gemas) {
	cout << "¿Tiene Afinidad? (0 ó 1)" << endl;
	cin >> Gemas;
};

bool Outfit::get_SG() {
	SG = Gemas;
	return SG
};

int Outfit::set_Rarity(int Rareza) {
	cout << "Rareza del arma" << endl;
	cin >> Rareza;
};

int Outfit::get_Rarity() {
	Rarity = Rareza;
	return Rarity
};
