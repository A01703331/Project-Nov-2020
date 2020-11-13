#include <iostream>
using namespace std;

class Weapon {
	private:
		string Elem; //Elemento del Arma
		string Type; //Tipo de Arma (Espada, Pistola, Lanza...)
		string TypeReq; //Atributo Requerido (Melee, Ranged, Technique, Dexterity)
		string StatReq; //Característica Requerida (Atk, Def, Dex no tiene)
		int Rarity; //Rareza en Estrellas (De 1 a 15)
		int Req; //Valor del Requisito (Desconozco el límite pero esta por encima de 2000)
		int MainAtk; //Valor de Ataque del tipo de Atributo principal	
	public:
		Weapon(): Elem(""),Type("Espada"),TypeReq("Melee"),StatReq("Atk"),Rarity(1),Req(1),MainAtk(1){}; //Default
		string set_Elem(string Elemento);
		string get_Elem();
		string set_Type(string TipoArma);
		string get_Type();
		string set_TypeReq(string TipoRequisito);
		string get_TypeReq();
		string set_StatReq(string Requisito);
		string get_StatReq();
		int set_Rarity(int Rareza);
		int get_Rarity();
		int set_Req(int ValorRequisito);
		int get_Req();
		int set_MainAtk(int Ataque);
		int get_MainAtk();	
};

string Weapon::set_Elem(string Elemento) {
	string Elemento;
	cout << "Elemento del arma" << endl;
	cin >> Elemento;
	Elem = Elemento;
};

string Weapon::get_Elem() {
	return Elem;
};

string Weapon::set_Type(string TipoArma) {
	string TipoArma;
	cout << "Tipo de arma" << endl;
	cin >> TipoArma;
	Type = TipoArma;
};

string Weapon::get_Type() {
	return Type;
};

string Weapon::set_TypeReq(string TipoRequisito) {
	string TipoRequisito;
	cout << "Atributo Requerido" << endl;
	cin >> TipoRequisito;
	TypeReq = TipoRequisito;
};

string Weapon::get_TypeReq() {
	return TypeReq;
};

string Weapon::set_StatReq(string Requisito) {
	string Requisito;
	cout << "Característica Requerida" << endl;
	cin >> Requisito;
	StatReq = Requisito;
};

string Weapon::get_StatReq() {
	return StatReq;
};

int Weapon::set_Rarity(int Rareza) {
	int Rareza;
	cout << "Rareza del arma" << endl;
	cin >> Rareza;
	Rarity = Rareza
};

int Weapon::get_Rarity() {
	return Rarity;
};

int Weapon::set_Req(int ValorRequisito) {
	cout << "Valor del Requisito" << endl;
	cin >> ValorRequisito;
};

int Weapon::get_Req() {
	Req = ValorRequisito;
	return Req
};

int Weapon::set_MainAtk(int Ataque) {
	cout << "Valor de Ataque principal" << endl;
	cin >> Ataque;
	MainAtk = Ataque;
};

int Weapon::get_MainAtk() {
	return MainAtk
};
