#ifndef DOCTORES_H
#define DOCTORES_H
#include<string>
using namespace std;
struct INFORMACION{
	string nombres;
	string apellidos;
	char telefono[100];
	string especialidad;
	string estado_civil;
	string pais;
	char DNI[100];
	string email;
};
INFORMACION doc_nuevos();
INFORMACION doc_mostrar();
#endif
