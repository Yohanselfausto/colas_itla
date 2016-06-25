/*
 * Elemento.h
 *
 *  Created on: Jun 25, 2016
 *      Author: raydelto
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <string>
class Elemento
{
public:
	Elemento(std::string nombre);
	virtual ~Elemento();

	std::string getNombre()
	{
		return _nombre;
	}

	void setNombre(std::string nombre)
	{
		_nombre = nombre;
	}

	Elemento* getSiguiente()
	{
		return _siguiente;
	}

	void setSiguiente(Elemento* siguiente)
	{
		_siguiente = siguiente;
	}

private:
	std::string _nombre;
	Elemento* _siguiente;
};

#endif /* ELEMENTO_H_ */
