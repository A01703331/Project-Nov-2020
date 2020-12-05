/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 04/Diciembre/2020
*/

#include "Inventory.hpp"
#include "Weapon.hpp"
#include "Unit.hpp"
#include "Consumable.hpp"
#include "Disc.hpp"

Inventory::Inventory(){
	int i;
	for (i=0;i<50;i++)
		inventory[i] = 0;
} //Constructor por default

Inventory::~Inventory(){
	int i;
	for (i=0;i<50;i++)
		if (inventory[i]!=NULL)
			delete inventory[i];
} //Destructor

/**
 * Función que crea objetos basandose en el input del usuario,
 * llama a las funciones que crean objetos, y luego ordena
 * dependiendo del tipo de ordenamiento deseado
*/
void Inventory::create_item(){
	int i, t;
	t = 1;
	for (i=0;i<50 && t!=0;i++){
		cout << "Which item would you like to create?" << endl;
		cout << "1. Weapon" << endl;
		cout << "2. Unit" << endl;
		cout << "3. Consumable" << endl;
		cout << "4. Emote/Accesory" << endl;
		cout << "5. Disc" << endl;
		cout << "Any other number to finish creation" << endl;
		cin >> t;
		switch (t){
			case 1:{
				create_weapon(i);
				break;}
			case 2:{
				create_unit(i);
				break;}
			case 3:{
				create_consumable(i);
				break;}
			case 4:{
				create_emoacc(i);
				break;}
			case 5:{
				create_disc(i);
				break;}
			default:{
				t = 0;
				break;
			}
		}
	}
	cout << "Sorting Type (0 Value / 1 Rarity / 2 Entry)" << endl;
	cin >> sort;
	switch (sort){
		case 0:{
			sort_value();
			print_inv(sort);
			break;
		}
		case 1:{
			sort_rarity();
			print_inv(sort);
			break;
		}
		case 2:{
		default:
			print_inv(sort);
			break;
		}
	}
}

/**
 * sorteador por valor, ordena los objetos del array inventario
 * a otro array por valor de manera ascendente
 *
 *@param
 *@return
*/
void Inventory::sort_value(){
	int v, s, i;
	for (v=0;v<28;v++){
		for (i=0;i<50;i++){
			if (inventory[i] != 0){
				int value_temp = inventory[i]->get_value();
				if (value_temp == (v+1)){
					if (s<50){
						sortedv[s] = inventory[i];
						s++;			
					}
				}
			}
		}
	}
}

/**
 * sorteador por rareza, ordena los objetos del array inventario
 * a otro array por rareza de manera ascendente
 *
 *@param
 *@return
*/
void Inventory::sort_rarity(){
	int r, s, i;
	for (r=0;r<15;r++){
		for (i=0;i<50;i++){
			if (inventory[i] != 0){
				int rar_temp = inventory[i]->get_rarity();
				if (rar_temp == (r+1)){
					if (s<50){
						sortedr[s] = inventory[i];
						s++;			
					}
				}
			}
		}
	}
}

/**
 * crear weapon, crea un objeto weapon con los atributos que el usuario pone y
 * lo inserta en el ïndice que recibe
 * 
 *@param int i: indice al que se incorpora
 *@return
 */
void Inventory::create_weapon(int i){
	string n, el, tw, tr, sr;
	int r, rq, a;
	Weapon * temp;
	cout << "Name: ";
	cin >> n;
	cout << endl << "Element: ";
	cin >> el;
	cout << endl << "Weapon Type: ";
	cin >> tw;
	cout << endl << "Attribute required: ";
	cin >> tr;
	cout << endl << "Stat required: ";
	cin >> sr;
	cout << endl << "Required value: ";
	cin >> rq;
	cout << endl << "Rarity: ";
	cin >> r;
	cout << endl << "Attack value: ";
	cin >> a;
	cout << endl;
	temp = new Weapon(n,el,tw,tr,sr,r,rq,a);
	temp->set_value(tw);
	inventory[i] = (Storage *)temp;
}

/**
 * crear weapon, crea un objeto unit con los atributos que el usuario pone y
 * lo inserta en el ïndice que recibe
 * 
 *@param int i: indice al que se incorpora
 *@return
 */
void Inventory::create_unit(int i){
	string n, p, tr, sr;
	int r, rq, d;
	Unit * temp;
	cout << "Name: ";
	cin >> n;
	cout << endl << "Part: ";
	cin >> p;
	cout << endl << "Attribute required: ";
	cin >> tr;
	cout << endl << "Stat required: ";
	cin >> sr;
	cout << endl << "Required value: ";
	cin >> rq;
	cout << endl << "Rarity: ";
	cin >> r;
	cout << endl << "Defense value: ";
	cin >> d;
	cout << endl;
	temp = new Unit(n, p, tr, sr, r, rq, d);
	temp->set_value(p);
	inventory[i] = (Storage *)temp;
}

/**
 * crear consumible, crea un objeto consumible con los atributos que el usuario pone y
 * lo inserta en el ïndice que recibe
 * 
 *@param int i: indice al que se incorpora
 *@return
 */
void Inventory::create_consumable(int i){
	string n, tc;
	int ef, r;
	Consumable * temp;
	cout << "Name: ";
	cin >> n;
	cout << endl << "Type: ";
	cin >> tc;
	cout << endl << "Effect: ";
	cin >> ef;
	cout << endl << "Rarity: ";
	cin >> r;
	cout << endl;
	temp = new Consumable(n, tc, ef, r);
	temp->set_value(tc);
	inventory[i] = (Storage *)temp;
}

/**
 * crear emoacc, crea un objeto emoacc con los atributos que el usuario pone y
 * lo inserta en el ïndice que recibe
 * 
 *@param int i: indice al que se incorpora
 *@return
 */
void Inventory::create_emoacc(int i){
	string n, tc;
	int ef, r, id;
	bool u, ua;
	EmoAcc * temp;
	cout << "Name: ";
	cin >> n;
	cout << endl << "Type: ";
	cin >> tc;
	cout << endl << "Effect: ";
	cin >> ef;
	cout << endl << "Rarity: ";
	cin >> r;
	cout << endl << "ID Number: ";
	cin >> id;
	cout << endl << "Unlock status (0 False / 1 True): ";
	cin >> u;
	if (tc == "Emote")
		ua = u;
	else if (tc == "Accessory")
		cout << "Account Unlock status (0 False / 1 True)" << endl;
		cin >> ua;
	cout << endl;
	temp = new EmoAcc(n, tc, ef, r, id, u, ua);
	temp->set_value(tc);
	inventory[i] = (Storage *)temp;
}

void Inventory::create_disc(int i){
	string n, s, sr;
	int rq, r, lv;
	bool c;
	Disc * temp; 
	cout << "Photon Art Name: ";
	cin >> n;
	cout << endl << "Photon Art Type: ";
	cin >> s;
	cout << endl << "Stat required: ";
	cin >> sr;
	cout << endl << "Stat requirement: ";
	cin >> rq;
	cout << endl << "Disc level: ";
	cin >> lv;
	cout << endl << "Custom (0 No / 1 Yes): ";
	cin >> c;
	cout << endl;
    temp = new Disc(n, s, sr, rq, r, lv, c);
	temp->set_rarity(lv);
	temp->set_value(s);
	inventory[i] = (Storage*)temp;
}

/**
 * print, imprime el inventario dependiendo del tipo de sorteo
 * 
 *@param int i: indice del objeto
 *@return
 */
void Inventory::print_inv(int sort){
	int i;
	if (sort == 0){
		for (i=0;i<50;i++){
			if (sortedv[i] != 0){
				sortedv[i]->print();
			}
		}
	}
	else if (sort == 1){
		for (i=0;i<50;i++){
			if (sortedr[i] != 0){
				sortedr[i]->print();
			}
		}
	}
	else{
		for (i=0;i<50;i++){
			if (inventory[i] != 0){
				inventory[i]->print();
			}
		}
	}
}
