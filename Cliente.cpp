#include "Persona.cpp"
#include <iostream>


using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor 
	public : 
	Cliente (){
	}
	Cliente(string nom,string ape,string dir, int tel, string n) : Persona(nom,ape,dir,tel){
	nit : n;
		
	}
	//metodos 
	//set (verificar)
	void setnit(string n){nit = n;}
	void setnombres(string nom){nombres = nom;}
	void setapellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void settelefono(int tel){telefono = tel;}
	
	
	//get (mostrar)
	string getnit(){return nit;	}
		string getnombres(){return nombres;	}
			string getapellidos(){return apellidos;	}
				string getdireccion(){return direccion;	}
					int gettelefono(){return telefono;	}
	
	
	
	
	
	
	
	void mostrar (){
		cout<<"_____________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
