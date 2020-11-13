#include <iostream>
#include <string>

class Disc {
	private:
		string Skill; //Tipo de Habilidad (Melee, Ranged, Technique)
		string TypeReq; //Atributo Requerido (Melee, Ranged, Technique)
		string StatReq; //Característica Requerida (Atk, Def)
		bool Custom; //Si el disco es customizado o no
		int Req; //Valor del requisito
	public:
		void set_Skill(string TipoHab);
		void get_Skill(Skill);
		void set_TypeReq(string TipoRequisito);
		void get_TypeReq(TypeReq);
		void set_StatReq(string Requisito);
		void get_StatReq(StatReq);
		void set_Custom(bool Customizado);
		void get_Custom(Custom)
		void set_Req(int ValorRequisito);
		void get_Req(Req);
};
