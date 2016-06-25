/*
 * Cola.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: raydelto
 */

#include "Cola.h"

Cola::Cola() : _primer(NULL), _ultimo(NULL)
{

}

Cola::~Cola()
{

}

void Cola::agregar(Elemento* elemento)
{
	if(_primer == NULL) // cola está vacía
	{
		_primer = elemento;
		_ultimo = elemento;
	}else
	{
		_ultimo -> setSiguiente(elemento);
		_ultimo = elemento;
	}
}

Elemento* Cola::extraer()
{
	if (_primer == NULL)
	{
		return NULL;
	}
	Elemento* retorno = _primer;
	_primer = _primer -> getSiguiente();
	return retorno;
}
