/*
 * Cola.h
 *
 *  Created on: Jun 25, 2016
 *      Author: raydelto
 */

#ifndef COLA_H_
#define COLA_H_
#include "Elemento.h"
class Cola
{
public:
	Cola();
	virtual ~Cola();
	void agregar(Elemento* elemento);
	Elemento* extraer();
private:
	Elemento* _primer;
	Elemento* _ultimo;
};

#endif /* COLA_H_ */
