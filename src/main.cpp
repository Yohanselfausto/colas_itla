//============================================================================
// Name        : Colas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Cola.h"
int main()
{
	Elemento* elemento1 = new Elemento("Documento1.docx");
	Elemento* elemento2 = new Elemento("Documento2.docx");
	Elemento* elemento3 = new Elemento("Documento3.docx");
	Elemento* elemento4 = new Elemento("Documento4.docx");
	Elemento* elemento5 = new Elemento("Documento5.docx");
	Elemento* elemento6 = new Elemento("Documento6.docx");

	Cola* cola = new Cola();
	cola -> agregar(elemento1);
	cola -> agregar(elemento2);
	cola -> agregar(elemento3);
	cola -> agregar(elemento4);
	cola -> agregar(elemento5);
	cola -> agregar(elemento6);

	Elemento* i = cola -> extraer();

	while(i != NULL)
	{
		cout << i -> getNombre() << endl;
		delete i;
		i = cola -> extraer();
	}
	delete cola;

	return 0;
}
