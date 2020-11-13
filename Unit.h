#include <iostream>
#include <string>

class Unit {
	private:
		string Part; //Parte de Armadura (Cuerpo, Brazos, Piernas)
		string TypeReq; //Atributo Requerido (Melee, Ranged, Technique, Dexterity)
		string StatReq; //Característica Requerida (Atk, Def, Dex no tiene)
		int Rarity; //Rareza en Estrellas (De 1 a 15)
		int Req; //Valor del Requisito (Desconozco el límite pero esta por encima de 2000)
		int MainDef; //Valor de Defensa del tipo de Atributo principal	
	public:
		Unit(): Part("Cuerpo"),TypeReq("Melee"),StatReq("Atk"),Rarity(1),Req(1),MainDef(1); //Default
		void set_Part(string Armadura);
		void get_Part(Part);
		void set_TypeReq(string TipoRequisito);
		void get_TypeReq(TypeReq);
		void set_StatReq(string Requisito);
		void get_StatReq(StatReq);
		void set_Rarity(int Rareza);
		void get_Rarity(Rarity);
		void set_Req(int ValorRequisito);
		void get_Req(Req);
		void set_MainDef(int Defensa);
		void get_MainDef(MainDef);	
};

string Unit::set_Part(string Armadura) {
	cout << "Parte de Armadura" << endl;
	cin >> Armadura;
};

string Unit::get_Part() {
	Part = Armadura;
	return Part
};

string Unit::set_TypeReq(string TipoRequisito) {
	cout << "Atributo Requerido" << endl;
	cin >> TipoRequisito;
};

string Unit::get_TypeReq() {
	TypeReq = TipoRequisito;
	return TypeReq
};

string Unit::set_StatReq(string Requisito) {
	cout << "Característica Requerida" << endl;
	cin >> Requisito;
};

string Unit::get_StatReq() {
	StatReq = Requisito;
	return StatReq
};

int Unit::set_Rarity(int Rareza) {
	cout << "Rareza del arma" << endl;
	cin >> Rareza;
};

int Unit::get_Rarity() {
	Rarity = Rareza;
	return Rarity
};

int Unit::set_Req(int ValorRequisito) {
	cout << "Valor del Requisito" << endl;
	cin >> ValorRequisito;
};

int Unit::get_Req() {
	Req = ValorRequisito;
	return Req
};

int Unit::set_MainDef(int Defensa) {
	cout << "Valor de Defensa principal" << endl;
	cin >> Defensa;
};

int Unit::get_MainDef() {
	MainDef = Defensa;
	return MainDef
};
