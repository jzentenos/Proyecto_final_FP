#ifndef DATOS_H
#define DATOS_H
#include<string>
using namespace std;
struct DOMICILIO{
	string calle;
	char numero[100];
	char cod_postal[100];
	string referencia;
};
struct FECHA{
	char dia[100];
	char mes[100];
	char periodo[100];
};
struct DATOS{
	string nombre;
	string apellido;
	DOMICILIO direccion;
	char DNI[100];
	FECHA nacimiento;
	char telefono[100];
};
int leer_datos(DATOS datos[]);
void mostrar_datos(DATOS datos[], int n);
#endif
